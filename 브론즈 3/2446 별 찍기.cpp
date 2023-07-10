#include <stdio.h>

int main () {

int n;
scanf("%d", &n);

int i,j;
for(i=0; i<n; i++) {
	

 for(j=0; j<i+0; j++) {
	printf(" ");
}
 for(j=0; j<(n*2-1)-i*2; j++) {
	printf("*");
}

printf("\n");
 }

for(i=0; i<n-1; i++) {

for(j=0; j<n-i-2; j++) {
	printf(" ");
}
for(j=0; j<3+i*2; j++) {
	printf("*");
}
printf("\n");
}
}
