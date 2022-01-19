#include <iostream>
//#include "History.h"
#include "Mesa.h"
using namespace std;

History::History(int nRows, int nCols):hRows(nRows), hCols(nCols) {
	/*hRows = nRows;
	hCols = nCols;*/

	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nCols; j++) {
			//each spot on grid has only been visited zero times
			grid[i][j] = 0;
		}
	}

}

bool History::record(int r, int c)
{
	if (r > hRows || c > hCols || r < 1 || c < 1) {
		return false;
	}
	
	//spot on grid has been visited +1 times
	grid[r-1 ][c-1 ] ++;
	return true;

	
}

void History::display()const {
	clearScreen();

	for (int i = 0; i < (hRows); i++) {
		for (int j = 0; j < (hCols); j++) {
			if (grid[i][j] == 0) { //if hasnt been visited print a dot
				cout << '.';
			}
			else {// if it has been visited print letter coordinating how many times its been visited
				cout << static_cast<char>(grid[i][j] + 64);
			}
		}
		cout << endl;
	}

}
