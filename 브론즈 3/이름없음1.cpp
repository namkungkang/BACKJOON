#include<stdio.h>
int money=100;
int item;


void buy() {
	money-=10;
	item++;
	printf("�������� �����߽��ϴ�\n");
	printf("�������� ���� : %d \n", item);
    printf("���� �ݾ� : %d",money);
}

int buyItem(int cost, int cnt) {
	if(money<cost) {
	
	printf("�ܾ��� �����մϴ�.\n");
	return -1;
}


	item += cnt;
	money-=cost;
		printf("�������� �����߽��ϴ�\n");
	printf("�������� ���� : %d \n", item);
    printf("���� �ݾ� : %d",money);
    return 0;

}

int main () {
	int result;
	result=buyItem(300,5);

if(result == -1) {
	printf("���� �����մϴ�.\n"); 
}
result = buyItem(30,5);

}

