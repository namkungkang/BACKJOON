#include<stdio.h>
int money=100;
int item;


void buy() {
	money-=10;
	item++;
	printf("아이템을 구매했습니당\n");
	printf("아이템의 개수 : %d \n", item);
    printf("남은 금액 : %d",money);
}

int buyItem(int cost, int cnt) {
	if(money<cost) {
	
	printf("잔액이 부좃합니다.\n");
	return -1;
}


	item += cnt;
	money-=cost;
		printf("아이템을 구매했습니당\n");
	printf("아이템의 개수 : %d \n", item);
    printf("남은 금액 : %d",money);
    return 0;

}

int main () {
	int result;
	result=buyItem(300,5);

if(result == -1) {
	printf("돈이 부족합니다.\n"); 
}
result = buyItem(30,5);

}

