#include<stdio.h>

void largest_element(int arr[],int n)

{

        int l=arr[0],i;

        for(int i=1;i<n;i++)

        {

                if(arr[i]>l)

                        l=arr[i];

        }

        printf("largest element in array :%d\n",l);

}

void smallest_element(int arr[],int n)

{

        int small=arr[0],i;

        for(i=1;i<n;i++)

        {

                if(arr[i]<small)

                        small=arr[i];

        }

        printf("smallest elemnt in array is :%d\n",small);

}

