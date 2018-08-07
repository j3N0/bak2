#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	struct stat buf;

	stat("/boot/initramfs-linux.img", &buf);

	printf("size = %ld\n", buf.st_size);

	return 0;
}

