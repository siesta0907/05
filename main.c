// 2022-10-04
// 1916513 
// main.c
// chapter 05-4

#include <stdio.h>

int main(void){
	int num;
	int result=0;
	 
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	for (int i =1; i<= num; i++){
		result += i;
	} 
	printf("1���� %d������ ���� %d �Դϴ�.",num,result);
}
