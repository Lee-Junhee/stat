#include"headers.h"

int main() {
	statfile("makefile");
	printf("----------\n");
	statfile("statfxn.c");
	printf("----------\n");
	statfile(".git");

	return 0;
}
