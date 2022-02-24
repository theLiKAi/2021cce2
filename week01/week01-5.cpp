#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int a=0;
	while( scanf("%s",line)==1)
	{
	int ans=0;
	int N= strlen(line);
	for(int i=0;i<N;i++)
	{
		if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		a= a+ans;
		}
		printf("Total: %d\n",a);
		return 0;
		}
