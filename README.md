# Bookbinding PDF rearrangement tool
If you want a cheap & easy way to professionaly bind a book in a paper-back style, this is the go to [video](https://www.youtube.com/watch?v=cifj5UYQDZE&list=WL&index=16) made by [Sebastiaan Mathôt](https://www.youtube.com/c/SebastiaanMath%C3%B4t). In fact, I bound my first book following the video's instructions & couldn't be happier with the results. I would strongly recommend watching the video before reading what comes next, it will give well needed context.

## Rearranging the PDF
This [C++ program]() outputs a series of numbers and, at the end, the number of pages you are going to need to do the printing. The series of numbers represent the way in which you have to rearrange the PDF's pages for the next section. Each line of the series (every 4 numbers) represents one page (front & back). The code of the program includes some instructions on how to use it. 

Tip: give ChatGPT your book PDF and the series of numbers outputted by the program. Then give it this prompt: "give me a new PDF rearranged according to the series of numbers. If the word 'blank' appears in the series, it represents an empty page".  

## Printing
Before anything, make sure your printer allows for duplex printing or printing double sided. If not, you will have to do the duplexing manually. 

To print the book, we have to make sure that the printer is indeed doing what we want. Open the PDF on your preferred PDF viewer (Google's default one worked fine for me) and press the print icon. Then, select the following configurations below.

Every printer that allows for duplex printing has these two options:
- Flip on long edge
- Flip on short edge

For our purposes, we will select "flip on XXXXXXX". 

Furthermore, select the option of horizontal printing, two pages per page and duplex printing. Thus, every sheet of paper will have 4 pages of your book, 2 pages at the front & another 2 at the back.

Before printing the real thing, run a test. Make a paginated document (using Word, Google docs, etc.) of 4 pages. For the first page write a "1", for the second page write a "3", for the third page write a "4" and for the fourth page write a "2". After printing, cut the stack of papers lengthwise in half and put the left side on top of the right side as shown in the video tutorial. If you get a 4 page book, you are ready to print your PDF book.
