// 2022-10-04
// 1916513 
// main.c
// chapter 05-6

#include <stdio.h>

int main(void){
	int answer = 12;
	int num;
	int tryNum = 0;
	
	do {
		tryNum += 1;
		printf("숫자를 입력하세요: ");
		scanf("%d",&num);
		if (num > answer) printf("숫자가 정답보다 큽니다.\n");
		else if (num < answer) printf("숫자가 정답보다 작습니다.\n");
	}while(num!=answer);
	
	printf("%d회 시도 끝에 정답을 맞추었습니다!", tryNum); 
	
}
