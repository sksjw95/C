#include <stdio.h>
typedef struct People {
	char name[12];
	unsigned short int age;
	float height;
	float weight;
}Person;

void main() {
	Person data;

	printf("대상자의 정보를 입력하세요\n");
	printf("이름 : ");
	scanf_s("%s", &data.name, sizeof(data.name));
	printf("나이 : ");
	scanf_s("%hu", &data.age, sizeof(data.age));
	printf("키 : ");
	scanf_s("%f", &data.height, sizeof(data.height));
	printf("뭄무게 : ");
	scanf_s("%f", &data.weight, sizeof(data.weight));

	printf("\n입력한 정보는 다음과 같습니다. \n");
	printf("%s : %d세,%.1fcm, %fkg\n",data.name,data.age,data.height,data.height,data.weight);
}
