#include<stdio.h>

void docso(int n) { 
    char *ones[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    char *tens[] = {"", "", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    char *hundreds[] = {"", "mot tram", "hai tram", "ba tram", "bon tram", "nam tram", "sau tram", "bay tram", "tam tram", "chin tram"};
    if(n < 0 || n > 999) {
        printf("So khong hop le.\n");
        return;
    }else{
        printf("So hop le.\n");
        printf("%s %s %s\n", hundreds[n / 100], tens[(n % 100) / 10], ones[n % 10]);
    }
    
}

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    docso(a);
    return 0;
}