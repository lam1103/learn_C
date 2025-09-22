#include<math.h>
#include<stdio.h>

double f(double t) {
    return exp(-t) * sin(t * t) ;
}

double integrate(double a, double b, int n) {
    if (n % 2 != 0) n++; // Simpson cần n chẵn
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }

    return sum * h / 3.0;
}

double F(double x) {
    return integrate(0,x, 1000);
}

int main() {
    double x; 
    printf("nhap x: " );
    scanf("%lf", &x);

    printf("F(%lf) =   %lf\n", x , F(x));
    return 0;
}