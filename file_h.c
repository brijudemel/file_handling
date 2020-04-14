#include <stdio.h>
#include<string.h>
int main()
{
	FILE *fp1,*fp2;
	printf("File 1 read in reverse order: \n\t");
	fp1=fopen("C:/Users/Avemaria/Desktop/C/file1.txt","r");
	char ch;
	char str[30];
    int i,pos;
    fseek(fp1,0,SEEK_END);
    pos=ftell(fp1);
    i=0;
    while(i<pos)
	{
        i++;
        fseek(fp1,-i,SEEK_END);
        ch=fgetc(fp1);
        printf("%c",ch);
    }
    fclose(fp1);
    printf("\n");
    fp1=fopen("C:/Users/Avemaria/Desktop/C/file1.txt","r");
    fp2=fopen("C:/Users/Avemaria/Desktop/C/file2.txt","w");
    ch=getc(fp1);
    while(ch!=EOF)
    {
    	fprintf(fp2,"%c",ch);
    	ch=getc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	printf("File 2 after writing:\n\t");
	fp2=fopen("C:/Users/Avemaria/Desktop/C/file2.txt","r");
	ch=getc(fp2);
	while(ch!=EOF)
    {
    	printf("%c",ch);
    	ch=getc(fp1);
	}
	return 0;
}
