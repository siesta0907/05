// 2022-10-04
// 1916513 
// main.c
// chapter 05-5

#include <stdio.h>

int main(void){
	int num1, num2;
	char op;
	printf("������  �Է��ϼ���: ");
	scanf("%d %c %d", &num1,&op, &num2);
	
	if(op == '+') printf("%d %c %d = %d", num1, op, num2, num1+num2);
	else if(op == '-') printf("%d %c %d = %d", num1, op, num2, num1-num2);
	else if(op == '*') printf("%d %c %d = %d", num1, op, num2, num1*num2);
	else if(op == '/') printf("%d %c %d = %d", num1, op, num2, num1/num2);
	else printf("�߸��Է��ϼ̽��ϴ�.");

}
