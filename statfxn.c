#include"headers.h"

void statfile(char *filename) {
	struct stat info;
	stat(filename, info);
	printf("%s:\nsize: %d\nmode:%o\nlast access: %s\n",
			filename,
			info.st_size,
			info.st_mode,
			info.st_atim.tv_sec);
}
