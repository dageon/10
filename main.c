#include <stdio.h>
#include <string.h>

int main(void) {
	FILE* fp = NULL;
	char c;
	
	fp = fopen("sample.txt", "r");
	
	if (fp == NULL) {
		printf("failed to open\n");
		return 0;
	}
	
	while( (c = fgetc(fp)) != EOF )
		putchar(c);
	
	fclose(fp);
	
	return 0;
}
