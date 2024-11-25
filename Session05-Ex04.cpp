#include<stdio.h>
int main(){
	int number, b;
	int a = 1;
	printf("Hay nhap vao 1 so tu 1 den 10: ");
	scanf("%d",&number);
    if(number > 0 && number <11){
    	while(a != 11){
		b = number*a;
		printf("%d x %d = %d\n", a, number, b);
		++a;
	    }
	}
	else{
		printf("So nhap vao khong hop le");
	}
    
	return 0;
}
