#include<stdio.h>
void activities(int s[1000],int f[1000],int n){
int i,j;
printf("after activity selection:");
i=1;
printf("A[%d]=[%d,%d]\n",i,s[i],f[i]);
for (j = 1; j<=n; j++)

	{

		if (s[j] >= f[i] && f[j]>=f[i])

		{
			printf ("A[%d]=[%d,%d]\n",j,s[j],f[j]);

			i = j;

		}

	}
	printf("\n");

}
int main()

{
    int i,n,s[1000],f[1000];
    printf("Enter 1st & 2nd array limit:\n");
    scanf("%d",&n);

    printf("1st array Element are:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&s[i]);
    }


    printf("2nd array Element are:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&f[i]);
    }
        for(i=1;i<=n;i++)


    printf("\nBefore Selection Activities are:");{
    for(i=1;i<=n;i++)
            {

                printf("\nA[%d]= [%d,%d]",i,s[i],f[i]);
            }
    }
    activities(s, f, n);
}
