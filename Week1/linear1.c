#include<stdio.h>
int linear_search(int n,int a[50],int target)
{
	int i,pos =-1;
	for(i=0;i<n;i++)
	{
		if(a[i] == target)
		{
			pos=i;
			break;
		}
	}
	return pos;
}
int main()
{
	int i,pos, n,target,a[50];
	scanf("%d",&n);
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	pos =linear_search(n,a,target);
	if(pos == -1)
	printf("element not present");
	else
	printf("element present at %d location",pos+1);
}
	