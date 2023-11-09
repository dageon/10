#include <stdio.h>
#include <string.h>

int main(void) {
	char src[] = "The worst things toeat before you sleep";
	char dst[100];
	
	strcpy(dst, src);
	
	printf("copied string : %s", dst);
	
	return 0;
}
