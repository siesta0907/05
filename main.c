// 2022-10-04
// 1916513 
// main.c
// chapter 05-3

#include <stdio.h>

int main(void){
	int num =0;
	char c; 
	printf("문자열을 입력하세요: ");
	while ( (c = getchar() ) != '\n' ){
		if ((int)c>=48 && (int)c<=57) {
			
			num ++;
		}
	}
	printf("숫자의 개수는 %d개입니다.",num);
}
