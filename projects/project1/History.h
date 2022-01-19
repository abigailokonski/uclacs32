#ifndef HISTORY_H
#define HISTORY_H

#include "globals.h"
class Mesa;

class History
{
public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;
private:
	int hRows;
	int hCols;
	char grid[MAXROWS][MAXCOLS];
	Mesa* history_mesa;
};

#endif
