// 2022-10-04
// 1916513 
// main.c
// chapter 05-3

#include <stdio.h>

int main(void){
	int num =0;
	char c; 
	printf("���ڿ��� �Է��ϼ���: ");
	while ( (c = getchar() ) != '\n' ){
		if ((int)c>=48 && (int)c<=57) {
			
			num ++;
		}
	}
	printf("������ ������ %d���Դϴ�.",num);
}
