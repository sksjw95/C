/*#include<stdio.h>

void main() {
	int data = 100, data_list[5] = { 0,1,2,3,4 };
	FILE* p_file = fopen("C:\\SJW\\tipssoft", "wb");
	if (NULL != p_file) {
		fwrite(&data, sizeof(int), 1, p_file);
		fwrite(data_list, sizeof(int), 5, p_file);
		fclose(p_file);
	}
}*/