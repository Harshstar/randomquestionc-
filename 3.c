//C program to calculate minimal and max. diff b/w to string 
#include <stdio.h>
#include <string.h>
int main()
{
    char S1[101],S2[101];
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",S1,S2);
        int max=0,min=0;
        for(i=0;i<strlen(S1);i++)
        {
            if(S1[i]=='?'||S1[i]!=S2[i])
            max++;
            if(S1[i]!='?'&&S2[i]!='?'&&S1[i]!=S2[i])
            min++;
            else if(1);
        }
        printf("%d %d\n",min,max);
    }
	return 0;
}