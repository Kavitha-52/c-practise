#include<stdio.h>
int main()
{
       char a[]="WELCOME";
        int i=0;
        while(a[i]!='\0')
        {
        if(a[i]>='A' && a[i]<='Z')
        {
                a[i]=a[i]+32;
        }
        i++;
        }
        printf("string lower:%s",a);
}

                                                                                                                              
