// 2022-10-04
// 1916513 
// main.c
// chapter 05-1

#include <stdio.h>

int main(void){
	int num;
	printf("정수 하나를 입력하시오" );
	scanf("%d", &num);
	if (num > 0) printf("양수입니다.\n");
	else if (num < 0) printf("음수입니다.\n");
	else printf("0입니다.\n");
	
}
