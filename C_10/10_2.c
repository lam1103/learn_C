#include<stdio.h>

double tbc(int n, int a[n]) {
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += a[i];
    }
    return (double)sum/n; 
}

int tong(int n, int a[n]) {
    int sum = 0;
    for(int i = 0; i< n; i++){
        if(a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int dem(int n, int a[n]){
        int plus = 0;
    for(int i = 0; i< n; i++){
        if(a[i] ==0)
            plus++;
    }
    return plus;
}

int main() {
    int n;
    int a[n];
    do{
        printf("nhap n:");
        scanf("%d" , &n);

    }while(n>10);

    printf("nhap so: ");
    for(int i= 0; i< n; i++ ) {
        scanf("%d", &a[i]);
    }

    printf("day so da nhap ra man hinh :\n") ;
    for(int i = 0; i<n; i++ ) {
        printf("%d\n", a[i]);
    }

    printf("moi nhap lua chon: ");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("trung binh cong: %lf", tbc(n, a));
        case 2:
            printf("tong cac so duong la: %d", tong(n, a));
        case 3:
            printf("co %d so 0 trong day", dem(n, a));
    }

}