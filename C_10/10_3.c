#include<stdio.h>
#include<stdlib.h>
void sapXepTang(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // hoán đổi
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sapXepGiam(int n, int a[]) {
    for(int i = 0 ; i< n-1; i++ ) {
        for(int j = i+1 ; j< n; j++ ) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n, a[n];
    do{
        printf("nhap n: ");
        scanf("%d", &n);

    }while(n> 10);

    printf("nhap du lieu: ");
    for(int i = 0; i< n; i++) {
        scanf("%d ", &a[i]);
    }
    printf("du lieu da nhap: \n");
    for(int i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }


    int choice;
    printf("nhap lua chon:");
    scanf(" %d", &choice);
    getchar();
    switch(choice) {
        case 1: 
            printf("sap xep tang dan nhu sau: ");
            sapXepTang(n, a);
        case 2:
            printf("sap xep giam dan nhu sau: ");
            sapXepGiam(n, a);
    }


}