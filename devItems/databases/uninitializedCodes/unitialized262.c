#include <stdio.h>
#include <stdlib.h>
int catalan(int n)
{
	if (n == 0)
		return 1;
	return (catalan(n - 1))*((4 * n + 2) / (n + 2));
}
int main() {
	/*	int i,j=0,t,k;
		scanf("%d\n",&t);
		for(i=1;i<=t;i++)
		{
			j=0;
			scanf("%d\n",&k);
		  /* while(j>=-1)
		   {
			   if(catalan(j)==k)
			   {
			   printf("%d",catalan(j+1));
			   break;
			   }
		   j++;
		   }*/
		   /*   while(catalan(j)<=k)
			  j++;
			  printf("%d\n",catalan(j));
		   }
		   */int i;
int j;
for (i = 0; i < 20; i++)
{
	printf("%d\n", catalan(j));
}
return 0;
}