#include <stdio.h>

void main() {
	char data1, data2, data3, data4, data5, i;
	char* p[5] = { &data1,&data2,&data3,&data4,&data5 };
	for (i = 0; i < 5; i++) {
		*p[i] = 0;
	}
	printf("%d\n", data1);
	printf("%d\n", data2);
	printf("%d\n", data3);
	printf("%d\n", data4);
	printf("%d\n", data5);
	printf("%p\n", &data1);
	printf("%p\n", &data2);
	printf("%p\n", &data3);
	printf("%p\n", &data4);
	printf("%p\n", &data5);
}