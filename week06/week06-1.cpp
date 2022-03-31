
#include <stdio.h>
char tree[1000000][40];
int main()
{
	int t;
	scanf("%d\n\n",&t);
	for(int T=1;T<=t;T++)
	{
		int N=0;
		while (gets(tree[N]))
		{
		if(tree[N][0]==0) break;
		N++;
		}
		if(T>1) printf("\n");
		printf("Test Case %d: %d lines\n",T,N);
		}
		return 0;
		}
