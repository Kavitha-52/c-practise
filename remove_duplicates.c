#include<stdio.h>

int main()

{

        char s[20]="hello radar";
        int i,j,k
/*      printf("enter the string:\n");
        scanf("%s",s); */
        for(i=0;s[i]!='\0';i++)
        {
                for(j=i+1;s[j]!='\0';j++)
                {
                        if(s[i]==s[j])
                        {
                                for(k=j;s[k]!='\0';k++
                                        s[k]=s[k+1];

                        }
                }
        }
        printf("after removing duplicates are :%s\n",s);
}
