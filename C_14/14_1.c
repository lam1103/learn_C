# include <stdio.h>
# include <math.h>

typedef struct{
    int day; 
    int month;
    int year;
} date_t;

int returntime(date_t date1, date_t date2) {
    if((date1.year > date2.year) || (date1.year == date2.year && date1.month > date2.month) || 
       (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day)){
        return 1;
       }
    else if(date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
        return -1;
    }
    else
        return 0;
}

int main() {
    date_t date1, date2; 
    printf("Nhap ngay thang nam thu nhat (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Nhap ngay thang nam thu hai (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    if(returntime(date1, date2)) {
        printf("Ngay thang nam thu nhat lon hon ngay thang nam thu hai\n");
    }else if(returntime(date1, date2) == -1) {
        printf("Hai ngay thang nam bang nhau\n");
    }else {
        printf("Ngay thang nam thu hai lon hon ngay thang nam thu nhat\n");
    }
}