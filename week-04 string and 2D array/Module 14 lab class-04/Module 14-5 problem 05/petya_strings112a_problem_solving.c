#include<stdio.h>
#include<string.h>
int main()
{
    char s[102],t[102];
    int i;

    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);

    int len = strlen(s)-1;

    for(i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] += 32;

        }
        if(t[i]>='A' && t[i]<='Z')
        {
            t[i] += 32;

        }
    }

    for(i=0; i<len; i++)
    {
        //s[i] and t[i] compare korbo.

        if(s[i]<t[i])
        {
            printf("-1\n");
            return;
        }
        else if (s[i]>t[i])
        {
            printf("1\n");
            return;
        }

    }
    printf("0\n");

   return 0;
}
