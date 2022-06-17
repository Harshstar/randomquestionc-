// c (cooking) e(eat) s(sleep).. Check the possible connections
#include <stdio.h>
#include <string.h>
int main()
{
    char N[100001];
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",N);
        int found=0;
        for(i=0;i<strlen(N)-1;i++)
        {
            if(N[i]=='C'){
                if(N[i+1]=='E'||N[i+1]=='S'||N[i+1]=='C')
                found++;
            }
            else if(N[i]=='E')
            {
                if(N[i+1]=='S'||N[i+1]=='E')
                found++;
            }
            else if(N[i]=='S')
            {
                if(N[i+1]=='S')
                found++;
            }
        }
        if(found==strlen(N)-1)
        printf("yes\n");
        else
        printf("no\n");
    }
	return 0;
}