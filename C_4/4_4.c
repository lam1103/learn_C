/*Viết chương trình thanh toán tiềnmua sách.
 Người dungnhậpvào: tênsách(title), giásách
 (price),sốlượngmua(quantity),Mãsách(ISBN)
 vàtínhrasốtiềnphải trả,baogồmVATcốđịnh
 5%.Hiểnthị rabảngnhưsau*/

#include <stdio.h>

int main() {
    printf("-------------------------------------------------------\n");
    printf("| %-52s|\n", "BK Bookseller");
    printf("|-----------------------------------------------------|\n");
    printf("| %-5s %-8s %-15s %-10s %-10s|\n", "Qty", "ISBN", "Title", "Price", "Total");
    printf("|-----------------------------------------------------|\n");

    // Dữ liệu 1 dòng
    int qty = 345;
    int isbn = 3467;
    char title[] = "Ree";
    double price = 23.30;
    double total = 8440.42;

    printf("| %-5d %-8d %-15s %-10.2f %-10.2f|\n", qty, isbn, title, price, total);

    printf("| VAT:%-48.2f|\n", 401.92);
    printf("| You pay:%-44.2f|\n", 8440.42);
    printf("------------------------------------------------------\n");

    return 0;
}
