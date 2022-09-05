#include<stdio.h>
int main()
{
        char a[]="welcome";
        int i=0,j=0;
        while(a[j]!='\0')
        {
                j++;
        }
        j=j-1;
        while(i<j)
        {
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                i++;
                j--;
        }
        printf("reverse string:%s",a);
}
