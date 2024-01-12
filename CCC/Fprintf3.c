#include <stdio.h>
int main() {
	char temp[64];
	FILE* p_file = fopen("C:\\SJW\\titi.txt", "rt");
	if (p_file!=NULL) {
		while (fscanf_s(p_file, "%63s", temp,sizeof(temp)) != EOF) {
			printf("%s\n", temp);
			
		}
		fclose(p_file);
	}
	return 0;
}