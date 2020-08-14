#include<stdio.h>
int binary_search(int first,int last,int a[50],int target)
{
	int pos =-1,mid;
	while(first <= last)
	{
		mid = first+last/2;
		if(a[mid] == target)
		{
			pos=mid;
			break;
		}
		else if(target<a[mid])
			last = mid-1;
		else
			first = mid+1;
	}
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
	pos =binary_search(0,n-1,a,target);
	if(pos == -1)
	printf("element not present");
	else
	printf("element present at %d location",pos+1);
}
	