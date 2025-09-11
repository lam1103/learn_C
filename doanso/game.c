#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu() {
    printf("==============================================================|\n");
    printf("|Welcome to Do An So 2 - Game!                                |\n");
    printf("|day la 1 tro choi doan so vui nhon.                          |\n");
    printf("|Ban se phai doan mot so ngau nhien trong khoang tu 1 den 100.|\n");
    printf("|ok, bat dau nao!                                             |\n");
    printf("==============================================================|\n");
}

int taosobimat() {
    int sobimat;
    sobimat = rand() % 100 + 1; // sinh so nnhien
    return sobimat;
}

void choi1luot(int sobimat, int Max, int dem) {
    int sodoan;
    do {
        dem++;
        printf("lan doan thu %d\n", dem);
        printf("nhap so ban doan: ");
        scanf("%d", &sodoan);
        int dolech = abs(sodoan - sobimat);
        if (sodoan == sobimat) {
            printf("Chuc mung ban da doan dung so bi mat %d\n", sobimat);
            break;
        } else {
               if(dem == Max){
                printf("ban da het luot doan, so bi mat la %d\n", sobimat);
                break;
               }else if (dolech <= 3) {
                   printf(" rat gan\n");
               } else if (dolech <= 5) {
                   printf(" gan\n");
               }
               else if (dolech <= 10) {
                   printf(" kha gan\n");
               }
                else if (dolech <= 20 && dolech > 10) {
                     printf(" kha xa\n");
                } else {
                     printf(" qua xa\n");
                }
        }
    } while (sodoan != sobimat);
}

int main() {
    int sobmat, sodoan;
    srand(time(NULL)); // Khoi tao
    menu();
    sobmat = taosobimat();
    int dem = 0;
    int Max = 10;
    choi1luot(sobmat, Max, dem);
    return 0;
}