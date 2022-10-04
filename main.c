// 2022-10-04
// 1916513 
// main.c
// chapter 05-2

#include <stdio.h>

int main(void){
	int num;
	printf("정수 하나를 입력하시오" );
	scanf("%d", &num);
	if (num > 0) printf("절대값은 %d입니다.\n", num);
	else printf("절대값은 %d입니다.\n", num*-1);
	
	
}
