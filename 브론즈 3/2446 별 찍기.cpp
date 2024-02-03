#include <stdio.h>
void call();
void num(int a);
int num1(int b);

void call() {
	printf("숫자 입력 : \n");
	
}

void num(int a) {
	int i;
	for(i=1; i<=a; i++) {
		printf("%d",i);
	}	
	
}
int num1(int b) {
	int i,sum=0;
	for(i=1; i<=b; i++) {
		sum = sum + i;
 
	}
	return sum;
}

int main (void) {
	int result,result2, y;
	call();
	num(7);
	result = num1(3);
	printf("\n3까지의 합은: %d \n",result);
	printf("어디까지의 합? "); 
	scanf("%d",&y);
	result2 = num1(y);
	printf("%d 까지의 합은 : %d", y, result2);    
return 0;








}


