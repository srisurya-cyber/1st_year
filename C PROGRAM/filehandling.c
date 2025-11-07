#include<stdio.h>
int main()
{
	FILE *s;
	char buff[1000];
	s= fopen("filetext.txt","r");
	while(fscanf(s,"%s",buff)!=EOF){
		printf("%s",buff);
	}
	fclose(s);
}
