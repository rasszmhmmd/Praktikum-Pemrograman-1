#include <stdio.h>

int main()
{
    float A , B , C , k , l;
    A = 12;
    C = 5;
    B = sqrt((pow(C,2)) + (pow(A,2)));
    printf("Diketahui:\n");
    printf("Alas = %.0f cm\n", C);
    printf("Tinggi = %.0f cm\n\n", A);
    printf("Jawab:\n");
    printf("Sisi A = %.0f cm\n", A);
    printf("Sisi B = %.0f cm\n", B);
    printf("Sisi C = %.0f cm\n", C);
    k = A + B + C;
    printf("Keliling = %.0f cm\n", k);
    l = 0.5 * C * A;
    printf("Luas = %.0f", l);
    return 0;
}
