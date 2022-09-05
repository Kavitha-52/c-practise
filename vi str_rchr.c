#include<stdio.h>
int main()
{
    char a[]="helloworld";
        char b='l';
        int i=0,j,flag=0;
        while(a[i]!='\0')
        {
                if(a[i]==b)
                {
                        flag=1;
                        j=1;
                }
                i++;
        }
        if(flag==1)
                printf("last occurance at %d",j);
        else
                printf("the character not found"
}
