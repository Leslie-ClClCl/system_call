#include <unistd.h>
#include <stdio.h>
#include <errno.h>
int main(void) {
	char src[64], dst[64];
	printf("Input the source file: ");
	scanf("%s", src);
	printf("Input the destination file: ");
	scanf("%s", dst);
    int ret = syscall(333,src,dst);
    int err = errno;
    printf("copy done!\n");
    if (ret == -1)
		printf("Error num = %d\n", err);
    return 0;
}

