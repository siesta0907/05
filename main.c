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
		printf("���ڸ� �Է��ϼ���: ");
		scanf("%d",&num);
		if (num > answer) printf("���ڰ� ���亸�� Ů�ϴ�.\n");
		else if (num < answer) printf("���ڰ� ���亸�� �۽��ϴ�.\n");
	}while(num!=answer);
	
	printf("%dȸ �õ� ���� ������ ���߾����ϴ�!", tryNum); 
	
}
