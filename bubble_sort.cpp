#include"bubble_sort.hpp"

void Bubble_sort:: sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				swap(&a[i],&a[j]);
		}
	}
	cout<<"Bubble_sort"<<endl;
}
