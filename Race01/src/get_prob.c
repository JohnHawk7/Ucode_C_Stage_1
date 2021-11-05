#include "matrix.h"

int get_prob(int percentage) {
	int num = rand() % 100;

	if(num < percentage)
		return 1;

	return 0;
}
