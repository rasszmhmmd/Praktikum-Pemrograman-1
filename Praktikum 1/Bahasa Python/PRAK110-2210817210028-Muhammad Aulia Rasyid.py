import math
A = 12
C = 5
B = math.sqrt((pow(C,2)) + (pow(A,2)))
print("Diketahui:")
print("Alas = %.0f cm"% C)
print("Tinggi = %.0f cm\n"% A)
print("Jawab:")
print("Sisi A = %.0f cm"% A)
print("Sisi B = %.0f cm"% B)
print("Sisi C = %.0f cm"% C)
k = A + B + C
print("Keliling = %.0f cm"% k)
l = 0.5 * C * A
print("Luas = %.0f"% l)