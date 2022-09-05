#include<stdio.h>
int main()
{
	char a[]="aehhhhlef";
	char b[]="hhl";
	int i=0,j=0,k;
	while(a[i]!='\0')
	{
		if(a[i]!=b[j])
		{
			i++;
		}
		else
		{
			k=i+1;
			while(b[j]!='\0')
      {
				if(a[i]!=b[j])
				{
					break;
				}
				i++;
				j++;
			}
			if(b[j]=='\0')
			{
				break;
			}
			else
			{
				i=k;
				j=0;
			}
		}
	}
	if(b[j]=='\0')
		printf("sub string is present:\n");
	else
		printf("sub string is not present:\n");
}

