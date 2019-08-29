#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	char c;
	char Fil_name1[50],Fil_name2[50],Fil_name3[50];
	printf("Enter the first file name");
	scanf("%s",Fil_name1);
	printf("Enter the second file name");
	scanf("%s",Fil_name2);
	printf("Enter the file to which the two files have to merged");
	scanf("%s",Fil_name3);
	fp1=fopen(Fil_name1,"r");
	fp2=fopen(Fil_name2,"r");
	fp3=fopen(Fil_name3,"w");
	if(fp1==NULL){
		printf("The file is null");
		exit(0);
	}
	else if(fp2==NULL){
		printf("The file is null");
		exit(0);
	}
	while((c=fgetc(fp1))!=EOF){
		fputc(c,fp3);
	}
	while((c=fgetc(fp2))!=EOF){
		fputc(c,fp3);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp3=fopen(Fil_name3,"r");
	while((c=fgetc(fp3))!=EOF){
		printf("%c",c);
	}
	fclose(fp3);
}
