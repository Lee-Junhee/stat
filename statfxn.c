#include"headers.h"

void statfile(char *filename) {
	struct stat info;
	stat(filename, &info);
	int mode = info.st_mode % 01000;
	struct tm *timestamp = localtime(&(info.st_atim.tv_sec));
	printf("%s:\nsize: %ld\nmode: %o\nlast access: %s\n",
			filename,
			info.st_size,
			mode,
			asctime(timestamp));
}
