/* Một game đối kháng cho phép tạo ra các đấu thủ
 (mỗi đấu thủ có ba chỉ số sức mạnh, nhanh nhẹn,
 và máu)*/

#include <stdio.h>
double chisowin = 2.0/100.0;
double chisolose = 1.0/100.0;
typedef struct {
    double strength;
    double agility;
    double health;
} Fighter;
void inputFighter(Fighter *f) {
    printf("Enter strength, agility, health: ");
    scanf("%lf %lf %lf", &f->strength, &f->agility, &f->health);
}

void printFighter(const Fighter *f) {
    printf("Fighter stats - Strength: %.2lf, Agility: %.2lf, Health: %.2lf\n", f->strength, f->agility, f->health);
}

void arena(Fighter *f1, Fighter *f2, Fighter *f3, int vongdau) {
    double score1 = f1->strength + f1->agility + f1->health; 
    double score2 = f2->strength + f2->agility + f2->health;
    double score3 = f3->strength + f3->agility + f3->health;
    do{
    printf("Round %d:\n", vongdau);
    if (score1 >= score2 && score1 >= score3) {
        printf("Fighter 1 wins!\n");
        f1->health += chisowin;
        f1->strength += chisowin;
        f1->agility += chisowin;
        f2->health += chisolose;
        f2->strength += chisolose;
        f2->agility += chisolose;
        f3->health += chisolose;
        f3->strength += chisolose;
        f3->agility += chisolose;
    } else if (score2 >= score1 && score2 >= score3) {
        printf("Fighter 2 wins!\n");
        f2->health += chisowin;
        f2->strength += chisowin;
        f2->agility += chisowin;
        f1->health += chisolose;
        f1->strength += chisolose;
        f1->agility += chisolose;
        f3->health += chisolose;
        f3->strength += chisolose;
        f3->agility += chisolose;
    } else {
        printf("Fighter 3 wins!\n");
        f3->health += chisowin;
        f3->strength += chisowin;
        f3->agility += chisowin;
        f1->health += chisolose;
        f1->strength += chisolose;
        f1->agility += chisolose;
        f2->health += chisolose;
        f2->strength += chisolose;
        f2->agility += chisolose;
    }
    vongdau++;
}while(vongdau < 5);
}

int main() {
    Fighter f1, f2, f3;
    inputFighter(&f1);
    inputFighter(&f2);
    inputFighter(&f3);
    int vongdau = 1;
    arena(&f1, &f2, &f3, vongdau);
    printFighter(&f1);
    printFighter(&f2);
    printFighter(&f3);
    return 0;
}


