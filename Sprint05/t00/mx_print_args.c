#include <unistd.h>
#include <stdlib.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_not_enough_args_error(int args);
void mx_printerr(char *s);

int main(int argc, char const *argv[]) {
	if (argc == 1) {
		mx_not_enough_args_error(argc);
	}
	for (int i = 1; i < argc; ++i) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}
