#include <stdio.h>
int main ()
{
float num1, num2, add, sub, mult, div;
printf("Digite dois numeros para realizar as 4 operacoes entre eles;\n");
scanf("%f%f", &num1, &num2);
add = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = num1 / num2;
printf("Resultados - Adicao: %f, Subtracao: %f, Multiplicacao: %f, Divisao: %f", add, sub, mult, div);
return 0;
}
