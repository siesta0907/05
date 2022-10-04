// 2022-10-04
// 1916513 
// main.c
// chapter 05-4

#include <stdio.h>

int main(void){
	int num;
	int result=0;
	 
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	for (int i =1; i<= num; i++){
		result += i;
	} 
	printf("1부터 %d까지의 합은 %d 입니다.",num,result);
}
