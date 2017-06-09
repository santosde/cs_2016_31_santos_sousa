#include <stdio.h>
#define OUT 0
#define IN 1
int main()
{
int c, i, j, state, word, wlen;
word = wlen = 0;
state = OUT;
int length [20];
  for (i=0; i<20; ++i) {
  length[i] = 0;            // initialize elements
  i = 0;
  }
   while ((c = getchar()) != EOF  && word < 20) {
      if (c == ' ' || c == '\t' || c == '\n')
      {  
       state = OUT;
      }
      else if (state == OUT)
      {
        ++word;
        state == IN;
      }
     else if (word == OUT)
     {
         state = IN;
         ++word;
         ++length[wlen];
     }
       else if (state == IN)
      {
        ++length[wlen];
      }
   }   
   printf( "histogram:");
  for (i=0; i<20; ++i)     {
 printf( "%2d", i);
 for (j = 0; j < length[i]; ++j)
    printf("*");
    printf("\n");
   }
}
