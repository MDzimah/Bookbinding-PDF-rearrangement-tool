#include <iostream>
using llci = long long const int;
using lli = long long int;

/*-------DESCRIPTION OF THE PROGRAM, READ THIS BEFORE USE-------*/
/*
THIS PROGRAM GIVES THE NECESSARY PAGE LAYOUT OF THE PDF TO ACHIEVE
THE DESIRED PRINTING ORDER SHOWED IN THE VIDEO. 

THIS PROGRAM CAN BE COPIED & PASTED ON ANY C++ COMPILER ONLINE. 
JUST LOOK FOR "C++ COMPILER" ON YOUR WEB BROWSER & CLICK ON THE 
FIRST LINK.

IN THE "PARAMETERS" SECTION BELOW SUBSTITUTE THE NUMERIC NUMBER BY 
THE NUMBER OF PAGES OF YOUR PDF.
*/

/*------PARAMETERS------*/
llci NUMBER_OF_PAGES = 115;


/*------MAIN CODE------*/
int main() {
	if (NUMBER_OF_PAGES < 1) {
		std::cout << "ERROR: THE NUMBER OF PAGES HAS TO BE GREATER THAN 1\n";
		return 0;
	}

	lli np = 0;
	lli i = 1;

	if (NUMBER_OF_PAGES > 3) {
		lli LIMIT = (NUMBER_OF_PAGES - NUMBER_OF_PAGES % 4) / 2;
		while (i <= LIMIT) {
			std::cout << i << ", " << NUMBER_OF_PAGES / 2 + i << ", " << NUMBER_OF_PAGES / 2 + i + 1 << ", " << i + 1 << ", \n";
			i += 2;
			++np;
		}

		switch (NUMBER_OF_PAGES % 4) {
		case 3:
			std::cout << i << ", " << NUMBER_OF_PAGES - 1 << ", " << NUMBER_OF_PAGES << ", blank\n";
			++np;
			break;
		case 2:
			std::cout << i << ", " << NUMBER_OF_PAGES << ", blank, blank\n";
			++np;
			break;
		case 1:
			std::cout << "blank, " << NUMBER_OF_PAGES << ", blank, blank\n";
			++np;
			break;
		default: break;
		}
	}
	else {
		if (NUMBER_OF_PAGES == 3) std::cout << "1, 3, blank, 2\n";
		else {
			for (int i = 1; i <= NUMBER_OF_PAGES; ++i) {
				std::cout << i << ", ";
			}
			std::cout << "blank, blank\n";
		}
		++np;
	}

	std::cout << "\nNUMBER OF PAGES NEEDED FOR PRINTING: " << np << '\n';
	
	return 0;
}
