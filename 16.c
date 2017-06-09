#include <stdio.h>
#include <string.h>//necessário para strncmp
#include <conio.h>
int main (void)
{
  char str1[10] = "Curso de C";
  char str2[22] = "Curso de programação C";
  int retorno;
 
  retorno = strncmp(str1, str2, 5);
 
  printf("retorno = %d\n", retorno);
  getch();
  return 0;
}
