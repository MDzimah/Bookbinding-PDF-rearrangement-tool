# Bookbinding PDF Rearrangement Tool
If you want a cheap and easy way to bind a book in paperback style, check out this [video](https://www.youtube.com/watch?v=cifj5UYQDZE&list=WL&index=16) by [Sebastiaan Mathôt](https://www.youtube.com/c/SebastiaanMath%C3%B4t). I bound my first book following his instructions and couldn’t be happier. I recommend watching the video first for context.

## Rearranging the PDF
This [C++ program](code.cpp) outputs a series of numbers and, at the end, the number of pages needed for printing. The numbers show how to rearrange the PDF pages. Each line of four numbers represents one sheet (front and back). The code includes usage instructions.  

Tip: give ChatGPT your book PDF and the program’s output. Then use this prompt:  
*"Create a new PDF rearranged according to these numbers. If the word 'blank' appears, it means an empty page—include it as an extra page in the new PDF."*

## Printing
First, make sure your printer supports duplex (double-sided) printing. If not, you’ll need to flip pages manually.  

To print: open the PDF in your viewer (Google’s default works fine), press print, and select:  
- Two pages per sheet  
- Duplex (both sides)  
- Flip on short edge  

Each sheet will hold 4 book pages (2 front, 2 back). Remove fully blank sheets after cutting.  

Before printing the real book, do a test:  
Make a 4-page document with numbers: Page 1 → "1", Page 2 → "3", Page 3 → "4", Page 4 → "2". Print with the settings above, cut the stack lengthwise, then place the left half on top of the right as shown in the video. If you get a proper 4-page booklet, you’re ready to print your book.
