
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][40];
int compare(const void *p1,const void *p2)
{
	char * s1 =(char*) p1;
	char * s2 =(char*) p2;
	return strcmp(s1,s2);
	}
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
		qsort(tree,N,40,compare);
		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);
		}

		}
		return 0;
		}
