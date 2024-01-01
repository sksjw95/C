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
// 오류발생 - 유효하지 않은 주소에 5를 대입하기 때문에 문제가 발생함

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
// 오류발생 - q는 지역변수 이기 때문에 GetMyData 함수가 종료되면 같이 종료된다. 

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