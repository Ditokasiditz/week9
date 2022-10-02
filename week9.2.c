#include<stdio.h>
int main(){
	FILE*fp;
	int a,b;
	fp = fopen("a.txt","r");
	fscanf(fp,"%d %d",&a,&b);
	
	FILE*gp;
	gp=fopen("b1.txt","w");
	fprintf(gp,"%d",a+b);
	fclose(fp); fclose(gp);
	return 0;
}