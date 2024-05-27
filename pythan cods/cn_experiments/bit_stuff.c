#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("G:/BitstuffTX.txt","w");
    char org[100]={},tx[100]={},stuff[100]={};
    int count=0,i,j=0,k=0;
    char fla[]="01111110";
    printf("Enter the bit stream\n");
    scanf("%s",&org);
    for ( i = 0; i < strlen(org); i++)
    {
    if(org[i]=='0')
    {
       stuff[k]=org[i];
       k++;
       count=0; 
    }
    else{
        count++;
        stuff[k]=org[i];
        k++;
    }
    if(count==5)
    {
        stuff[k]='0';
        k++;
        count=0;
    }
    }
    printf("The stuffed bits are:%s",stuff);
     printf("\nThe stuffed bits are:%s",fla);
    strcat(tx,fla);
    strcat(tx,stuff);
    strcat(tx,fla);
    printf("\nThe stuffed bits are:%s",tx);
    for(i=0;i<strlen(tx);i++)
    {
        fprintf(fp,"%c",tx[i]);
    }
    fclose(fp);
    return 0 ;
    

}