#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Hay nhap 2 so nguyen duong: ");
	scanf("%d %d", &a, &b);
	int so_1 = a;
	int so_2 = b;
	while (b != 0){
		temp = b;
		b = a%b;
		a = temp;
	}
	if(so_1 > 0 && so_2 > 0){
		printf("Uoc chung lon nhat cua %d va %d la %d\n", so_1, so_2, a);
	}
	else{
		printf("Du lieu nhap vao khong hop le");
	}
	
	return 0;
}
