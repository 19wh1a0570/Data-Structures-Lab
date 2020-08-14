#include<stdio.h>
struct student
{
	char roll[15];
	char name[30];
	int m[5];
};
int main()
{
	struct student s[20];
	int n,i,j;
	float avg,sum=0;
	char grade;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i].roll);
		scanf("%s",s[i].name);
	        for(j=0;j<5;j++)
	        {
		        
		        scanf("%d",&s[i].m[j]);
		        sum = sum + s[i].m[j];
	        }
	        avg = sum/5.0;
	        if(avg>=50.0)
	        grade = 'A';
	        else
	        grade = 'B';
                printf("roll=%s\tname=%s\tgrade=%c\n",s[i].roll,s[i].name,grade);
	}
}