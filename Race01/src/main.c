#include "matrix.h"

int main() {
	WINDOW * mainwin;
	mainwin = initscr();

    nodelay(mainwin, TRUE);
		curs_set(0);
		matrix(mainwin);
		delwin(mainwin);
		endwin();
		refresh();

	return 0;
}
