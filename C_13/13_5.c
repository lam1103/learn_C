#include <stdio.h>
#include <string.h>

int main () {
    char a[100];
    char kitu1, kitu2;
    printf("Nhap chuoi: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0; // Loai bo ky tu xuong dong neu co
    printf("Nhap 2 ky tu: ");
    scanf(" %c %c", &kitu1, &kitu2);
    
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == kitu1) {
            a[i] = kitu2;
            count++;
        }
    }

   printf("So lan xuat hien cua '%c': %d\n", kitu1, count);
   printf("Chuoi sau khi thay the: %s\n", a);
   return 0;

}