#include<stdio.h>
int main(){
	int firstNumber, secondNumber;
	printf("Hay nhap vao 2 so bat ky: ");
	scanf("%d %d", &firstNumber, &secondNumber);
	printf("CALCULATOR\n\n");
	printf("1.Tong 2 so\n");
	printf("2.Hieu 2 so\n");
	printf("3.Tich 2 so\n");
	printf("4.Thuong 2 so\n");
	printf("5.Thoat\n\n");	
	int select;
	while(select != 5){
		printf("Lua chon cua ban: ");
		scanf("%d",&select);
		if(select == 1){
			int i = firstNumber + secondNumber;
			printf("Tong 2 so da nhap la: %d\n", i);
		}
		else if(select == 2){
			int i = firstNumber - secondNumber;
			printf("Hieu 2 so da nhap la: %d\n", i);
		}
		else if(select == 3){
			int i = firstNumber*secondNumber;
			printf("Tich 2 so da nhap la: %d\n", i);
		}
		else if(select == 4){
			if(secondNumber != 0){
			    float i = firstNumber/secondNumber;
			    printf("Thuong 2 so da nhap la: %.2f\n", i);
			}
            else{
            	printf("Phep tinh khong hop le\n");
			}
		}
	}
    
	return 0;
}
