#include <stdio.h>
int main ()
{
int segundos, minutos;
printf("Digite os minutos que deseja converter em segundos:\n");
scanf("%d", &minutos);
segundos = 60 * minutos;
printf("A conversao e: %d", segundos);
return 0;
}
