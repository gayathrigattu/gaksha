#include"insertion_sort.hpp"

void Insertion_sort:: sort(int a[],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
		j=i-1;
		x=a[i];
		while(j>=0 && a[j]>x)
		{
			a[j+1]=a[j];
			j--;	
		}
		a[j+1]=x;
	}
	cout<<"Insertion_sort"<<endl;
}

