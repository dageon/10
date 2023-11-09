#include <stdio.h>
#include <string.h>

int main(void) {
	FILE* fp;
	fp = fopen("sample.txt", "w");
	
	char str[100];
	int i = 0;
	
	for(i=0; i<3; i++){
		printf("input a word:");
		scanf("%s", str);
		fprintf(fp, "%s\n", str);	
	}
	
	fclose(fp);
	
	return 0;
}
