#include <stdio.h>

int main(void)
{
	char url[]="poem.txt";
	char ch;
	FILE *arq;
	
	arq = fopen(url, "r");
	if(arq == NULL)
	    printf("Error, could not open file\n");
	else
	    while( (ch=fgetc(arq))!= EOF )
		putchar(ch);
			
	fclose(arq);
	
	return 0;
}
