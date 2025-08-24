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
        else result[f][1] = result[f][2] = -1;

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
