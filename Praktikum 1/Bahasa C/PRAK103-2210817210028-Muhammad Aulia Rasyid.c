#include <stdio.h>

int main()
{
    float a , b , x , y , hasil;
    a = 9;
    b = 6;
    x = 10;
    y = 7;
    hasil = (a + b) * x / y;
    printf("Variabel a bernilai %1.0f\n",a);
    printf("Variabel b bernilai %1.0f\n",b);
    printf("Variabel x bernilai %1.0f\n",x);
    printf("Variabel y bernilai %1.0f\n",y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %5.2f",hasil);
    return 0;
}
