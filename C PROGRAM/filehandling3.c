#include<stdio.h>
main(){
	FILE *write;
	write= fopen("filetext.txt","w");
	fprintf(write,"HI SURYA");
	fclose(write);
}
