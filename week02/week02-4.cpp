
#include <stdio.h>
#include <string.h>
char line[200];
int pa()
{
	int N =strlen(line);
	for(int i;i<N;i++)
	{
		if(line[i]!= line[N-1-i]) return 0;
		}
		return 1;
		}
int main()
{
	while(scanf("%s",line)==1)
	{
		int p=pa();
		if(p==1) printf("%s -- is a regular palindrome\n",line);
		if(p==0) printf("%s -- is not a palindrome\n",line);
		}
				}
