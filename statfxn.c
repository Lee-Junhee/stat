#include"headers.h"

void statfile(char *filename) {
	struct stat info;
	stat(filename, &info);
	int mode = info.st_mode % 01000;
	printf("%s:\nsize: %ld\nmode: %o\nlast access: %ld\n",
			filename,
			info.st_size,
			mode,
			info.st_atim.tv_sec);
}
