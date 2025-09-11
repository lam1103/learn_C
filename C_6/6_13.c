/*13. Bài toán tính hóa đơn bệnh nhân:
 • Chi phí bệnh viện của bệnh nhân gồm các khoản
 sau:– Phí nội trú (150000 VND/ngày)– Tiền thuốc– Tiền phẫu thuật (nếu có)
 • Bệnh nhân có 3 loại thẻ bảo hiểm y tế sau:– Gold(G): Chỉ cần thanh toán 30% chi phí– Silver(S): Chỉ cần thanh toán 50% chi phí– Citizen(C): Phải thanh toán 70% chi phí
 • Viết chương trình hỏi thông tin về bệnh nhân, số
 ngày nằm viện, tiền thuốc, có phải phẫu thuật,
 ..và loại thẻ bảo hiểm và in ra Hóa đơn thanh
 toán tiền viện phí có đầy đủ các hạng mục.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int main () { 
    char name[50];
    int days;
    float medicine;
    char surgery;
    char insurance;
    float surgery_cost = 0;
    float total_cost;
    float final_cost;
    printf("Nhap ten benh nhan: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Xoa ky tu xuong dong neu co
    printf("Nhap so ngay nam vien: ");
    scanf("%d", &days);
    printf("Nhap tien thuoc (VND): ");
    scanf("%f", &medicine);
    printf("Co phai phau thuat khong? (Y/N): ");
    scanf(" %c", &surgery);
    surgery = toupper(surgery);
    if(surgery == 'Y') {
        printf("Nhap chi phi phau thuat (VND): ");
        scanf("%f", &surgery_cost);
    }
    printf("Nhap loai the bao hiem y te (G-S-C): ");
    scanf(" %c", &insurance);
    insurance = toupper(insurance);
    
    total_cost = days * 150000 + medicine + surgery_cost;
    
    switch(insurance) {
        case 'G':
            final_cost = total_cost * 0.3;
            break;
        case 'S':
            final_cost = total_cost * 0.5;
            break;
        case 'C':
            final_cost = total_cost * 0.7;
            break;
        default:
            printf("Loai the bao hiem khong hop le. Thoat chuong trinh.\n");
            return 0;
    }
    
    printf("\n--- HOA DON THANH TOAN ---\n");
    printf("Ten benh nhan: %s\n", name);
    printf("So ngay nam vien: %d\n", days);
    printf("Tien thuoc: %.2f VND\n", medicine);
    printf("Chi phi phau thuat: %.2f VND\n", surgery_cost);
    printf("Tong chi phi: %.2f VND\n", total_cost);
    printf("So tien phai thanh toan: %.2f VND\n", final_cost);
    return 0;
}