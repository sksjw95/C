#include<malloc.h>
void GetMyData(int*q) {
	q = (int*)malloc(8);
}
void main() {
	int* p;
	GetMyData(p);
	*p = 5;
	free(p);
}
// �����߻� - ��ȿ���� ���� �ּҿ� 5�� �����ϱ� ������ ������ �߻���

// 2
#include<malloc.h>
void GetMyData(int* q) {
	q = (int*)malloc(8);
	*p = q;
}
void main() {
	int* p;
	GetMyData(p);
	*p = 5;
	free(p);

}
// �����߻� - q�� �������� �̱� ������ GetMyData �Լ��� ����Ǹ� ���� ����ȴ�. 

#include<malloc.h>
#include<stdio.h>
void GetMyData(int** q) {
	*q = (int*)malloc(8);
	
}
void main() {
	int* p;
	GetMyData(&p);
	*p = 5;
	printf("%d", *p);
	free(p);

}