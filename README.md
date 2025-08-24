# Bookbinding PDF Rearrangement Tool
If you want a cheap and easy way to bind a book in paperback style, check out this [video](https://www.youtube.com/watch?v=cifj5UYQDZE&list=WL&index=16) by [Sebastiaan Mathôt](https://www.youtube.com/c/SebastiaanMath%C3%B4t). I bound my first book following his instructions and couldn’t be happier. I recommend watching the video first for context.

## Rearranging the PDF
The C++ code below outputs a series of numbers and, at the end, the sheets of paper needed for printing. The numbers show how to rearrange the PDF pages. Each line of four numbers represents one sheet (front and back). The code includes usage instructions.

```cpp
#include <iostream>
#include <vector>
using lli = long long int;

/*---------------------------------------------------------------
 PDF Bookbinding Layout Generator
 ---------------------------------------------------------------
 This program calculates the necessary page layout for your PDF
 so you can print and bind it as shown in the video tutorial.

 How to use:
 1. Copy and paste this code into any online C++ compiler.
    (Search "C++ compiler" in your web browser and open the first result.)
 2. In the PARAMETERS section below, set TOTAL_PAGES to the number
    of pages in your PDF.
 3. Run the program to get the rearranged page order and the total
    number of sheets needed for printing.
 ---------------------------------------------------------------*/

 /*---------------- PARAMETERS ----------------*/
const lli TOTAL_PAGES = 100; // <--- CHANGE THIS TO YOUR PDF PAGE COUNT


/*---------------- MAIN CODE ----------------*/
int main() {
    if (TOTAL_PAGES < 1) {
        std::cout << "ERROR: The number of pages must be greater than 0\n";
        return 0;
    }
    if (TOTAL_PAGES == 1) {
        std::cout << "1, blank, blank, blank\n\nSheets needed for printing: 1\n";
        return 0;
    }

    std::vector<std::vector<lli>> result;

    //Calculate required rows (4 pages per sheet)
    lli rows;
    if (TOTAL_PAGES % 4 == 0) rows = TOTAL_PAGES;
    else rows = TOTAL_PAGES - TOTAL_PAGES % 4 + 4;
    rows /= 4;

    lli n = 1;
    lli mid = rows * 2;

    for (lli f = 0; f < rows; ++f) {
        result.push_back(std::vector<lli>(4));

        result[f][0] = n;

        if (mid + n < TOTAL_PAGES) {
            result[f][1] = mid + n;
            result[f][2] = mid + n + 1;
        }
        else if (mid + n == TOTAL_PAGES) {
            result[f][1] = mid + n;
            result[f][2] = -1;
        }
        else {
            result[f][1] = result[f][2] = -1;
        }

        result[f][3] = n + 1;

        n += 2;
    }

    //Output page order
    for (lli f = 0; f < result.size(); ++f) {
        for (lli c = 0; c < 4; ++c) {
            if (result[f][c] == -1) std::cout << "blank";
            else std::cout << result[f][c];

            if (!(f == result.size() - 1 && c == 3)) std::cout << ", ";
        }
        std::cout << '\n';
    }

    std::cout << "\nSheets needed for printing: " << rows << '\n';
    return 0;
}
```

Tip: give ChatGPT your book PDF and the program’s output. Then use this prompt:  
*"Create a new PDF rearranged according to these numbers. If the word 'blank' appears, it means an empty page—include it as an extra page in the new PDF."*

## Printing
First, make sure your printer supports duplex (double-sided) printing. If not, you’ll need to flip pages manually.  

To print: open the PDF in your viewer (Google’s default works fine), press print, and select:  
- Two pages per sheet  
- Print on both sides (duplex printing)  
- Flip on short edge  

Each sheet will hold 4 book pages (2 front, 2 back). Remove fully blank sheets after cutting.  

Before printing the real book, do a test:  
Make a 4-page document with numbers: Page 1 → "1", Page 2 → "3", Page 3 → "4", Page 4 → "2". Print with the settings above, cut the stack lengthwise, then place the left half on top of the right as shown in the video. If you get a proper 4-page booklet, you’re ready to print your book.
