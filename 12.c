-#include<stdio.h>
   
   int main(void)
   {
       int i, j, k;
       char c;
       printf("Extended ASCII table\n\n");
       for (i = 0; i < 26; i++)
      {
          for (j = 0; j < 10; j++)
          {
              k = i * 10 + j;
              printf("%3d %c  ", k, k);
          }
          putchar('\n');
      }
  
      printf("\nDigite:Computaction!\n", 135, 198);
      do
          putchar(c = getchar());
      while (c != '\n');
  
      return(0);
  }
