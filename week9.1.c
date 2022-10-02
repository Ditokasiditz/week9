#include<stdio.h>
int main(){
    FILE*fp;
    int a,b,sum=0;
    fp=fopen("a.txt","r");
    while(!feof(fp)){
        a=0;b=0;
        fscanf(fp,"%d %d",&a,&b);
        sum = a+b;
        }
    fclose(fp);

    FILE*dp;
    dp=fopen("b.txt","w");
    fprintf(dp,"%d",sum);
    fclose(dp);
    return 0;
}