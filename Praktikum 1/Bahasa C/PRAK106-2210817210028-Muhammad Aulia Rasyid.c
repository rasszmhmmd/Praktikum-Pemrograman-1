#include <stdio.h>

int main()
{
    int a , b , c , perbandingan1 , perbandingan2 , perbandingan3;
    a = 4;
    b = 8;
    c = 3;
    perbandingan1 = a == b;
    perbandingan2 = b > c;
    perbandingan3 = a != c;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", perbandingan1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", perbandingan2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", perbandingan3);
    return 0;
}
