#include<stdio.h>
int main(){
	int choice, a, b, c;
    do{
    	printf("MENU\n\n");
    	printf("1.Nhap 3 so\n");
    	printf("2.Tong 3 so\n");
    	printf("3.Trung binh cong 3 so\n");
    	printf("4.So nho nhat\n");
    	printf("5.So lon nhat\n");
    	printf("6.Thoat\n");
    	printf("Lua chon cua ban: ");
    	scanf("%d",&choice);
    	switch (choice){
    		case 1:{
    			printf("Hay nhap so thu nhat: ");
    			scanf("%d",&a);
    			printf("Hay nhap so thu hai: ");
    			scanf("%d",&b);
    			printf("Hay nhap so thu ba: ");
    			scanf("%d",&c);
				break;
			}
			case 2:{
				int Tong = a + b + c;
				printf("Tong 3 so la: %d\n",Tong);
				break;
			}
			case 3:{
				int Avg = (a + b + c) / 3;
				printf("Trung binh cong 3 so la: %d\n",Avg);
				break;
			}
			case 4:{
				int Min = a;
				if(Min > b){
					Min = b;
				}
				if(Min > c){
					Min = c;
				}
				printf("So nho nhat la: %d\n",Min);
				break;
			}
			case 5:{
				int Max = a;
				if(Max < b){
					Max = b;
				}
				if(Max < c){
					Max = c;
				}
				printf("So lon nhat la: %d\n",Max);
				break;
			}
			case 6:{
				printf("Thoat chuong trinh\n");
				break;
			}
			default:{
				printf("Lua chon khong hop le\n");
				break;
			}
		}
	}while (choice != 6);
    
	return 0;
}

