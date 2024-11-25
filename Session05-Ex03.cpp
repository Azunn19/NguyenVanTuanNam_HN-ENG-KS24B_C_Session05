#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap 1 so nguyen duong: ");
	scanf("%d",&number);
	int a = 1;
	int b = number;
	while(a != b){
		number = number + a;
		++a;
    }
    printf("Tong tu 1 den %d la %d\n", b, number);
	return 0;
}
