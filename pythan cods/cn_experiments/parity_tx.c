#include<stdio.h>
#include<string.h>
int main()
{
     FILE* fp;
    fp = fopen("G:/vbparity.txt","w");
   
    char org[50]={},flag[]="01111110",p_e[50]={},p_o[50]={};
    int i,count=0,parity;

    printf("Enter data stream :\n");
    scanf("%s",&org);

    for(i=0;i<strlen(org);i++)
    {
        if(org[i]=='1')
        {
            count++;
        }
    }
    printf("Choose parity : even=0 odd=1 : ");
    scanf("%d",&parity);
    if(parity==0)
    {
        p_e[0]='0';
        p_o[0]='1';
    }
    else
    {
        p_e[0]='1';
        p_o[0]='0';
    }
    if(count%2==0)
    {
        strcat(org,flag);
        strcat(p_e,org);
        strcat(flag,p_e);
        printf("The data stream with parity is :\n%s",flag);
    }
    else
    {
        strcat(org,flag);
        strcat(p_o,org);
        strcat(flag,p_o);
        printf("The data stream with parity is :\n%s",flag);
    }
    
    for(i=0; i<strlen(flag); i++)
    {
        fprintf(fp,"%c",flag[i]);
    }
    fclose(fp);
    return 0;
}
