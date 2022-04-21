#include <stdio.h>
int grade[10]={9,8,1,2,3,7,6,5,4,0};
int main()
{
    int N=10;
    for(int i=0;i<10;i++)
    {
        int change=0;
            for(int k=0;k<N-1;k++)
            {
        if(grade[k] < grade[k+1])
        {
            int temp=grade[k];
            grade[k]=grade[k+1];
            grade[k+1]=temp;
            change++;
            }
            }
            if(change==0) break;
            for(int i=0;i<N;i++) printf("%d ",grade[i]);
            printf("\n");
            }
            }
