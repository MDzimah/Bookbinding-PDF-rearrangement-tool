# Bookbinding PDF rearrangement tool
If you want a cheap & easy way to professionaly bind a book in a paper-back style, this is the go to [video](https://www.youtube.com/watch?v=cifj5UYQDZE&list=WL&index=16) made by [Sebastiaan Mathôt](https://www.youtube.com/c/SebastiaanMath%C3%B4t). In fact, I bound my first book following the video's instructions & couldn't be happier with the results. I would strongly recommend watching the video before reading what comes next, it will give well needed context.

## Rearranging the PDF
This [C++ program]() outputs a series of numbers and, at the end, the number of pages you are going to need to do the printing. The series of numbers represent the way in which you have to rearrange the PDF's pages for the next section. Each line of the series (every 4 numbers) represents one page (front & back). There are further instructions in 

## Printing
Before anything, make sure your printer allows for duplex printing or printing double sided. If not, you will have to do the duplexing manually. 

To print the book, we have to make sure that the printer is indeed doing what we want. Open the PDF on your preferred printing software and select the configurations below.

Every printer that allows for duplex printing has these two options:
- Flip on long edge
- Flip on short edge

For our purposes, we will select "flip on XXXXXXX". 

Before printing, run a test. Make a paginated document (using Word, Google docs, etc.) of 4 pages. So for the first page write a "1", for the second page write a "3", for the third page write a "4" and for the fourth page write a "2". If after printing, cutting the page in half and putting the left side on top of the right side as shown in the video tutorial you get a 4 page book, you are ready to do the real printing.



