#include <stdio.h>
void main() {
	int num1,num2,num3;
	FILE* p_file = fopen("C:\\SJW\\tipssoft.txt", "rt");
	if (NULL != p_file) {
		fscanf_s(p_file,"%d %d %d", &num1, &num2, &num3);
		
		printf("%d %d %d\n", num1,num2,num3);
		fclose(p_file);
	}
}