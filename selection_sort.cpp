#include "selection_sort.hpp"

void Selection_sort:: sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)					
	{
		int sel=i;						
		for(j=i+1;j<n;j++)				
		{
			if(a[j]<a[sel])			
			{
				sel=j;				
			}
		}
		swap(&a[i],&a[sel]);				
	}
	cout<<"Selection_sort"<<endl;
}




