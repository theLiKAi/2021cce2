#include <stdio.h>
#include <vector>
#include <algorithm>
class student
{
	public:
	char name[30];
	int grade;
	};
	bool compare(student a, student b)
	{
		return a.grade>b.grade;
		}
		int main()
		{
			int N;
			scanf("%d",&N);
			std::vector<student> stu(N);
			for(int i=0;i<N;i++)
			{
				scanf("%s %d",stu[i].name,&stu[i].grade);
				}
				std::stable_sort(stu.begin(),stu.end(),compare);
				for(int i=0;i<N;i++)
				{
					printf("%s %d\n",stu[i].name,stu[i].grade);
					}
					}
