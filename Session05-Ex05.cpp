#include<stdio.h>
int main(){
    for(int a = 1; a <= 9; a++){
        printf("Bang cuu chuong cua %d:\n", a);
        for(int b = 1; b <= 10; b++){
            printf("%d x %d = %d\n", a, b, a*b);
        }
    }

    return 0;
}

