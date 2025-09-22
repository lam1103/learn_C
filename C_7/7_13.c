
#include<stdio.h>
int main() {
    for(int standing = 0; standing <= 100 / 5; standing++) {
        for(int lying = 0; lying <= 100 / 3; lying++) {
            for(int old = 0; old <= 100; old++) {
                if(standing + lying + old == 100 && (5 * standing + 3 * lying + old / 3.0) == 100) {
                    printf("So trau dung: %d\n", standing);
                    printf("So trau nam: %d\n", lying);
                    printf("So trau gia: %d\n", old);
                }
            }
        }
    }
}