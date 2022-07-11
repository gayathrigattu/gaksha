#include "quick_sort.hpp"

int Quick_sort:: partition(int a[8],int l,int h)
{
	float pivot=a[l];
	int i=l,j=h;
	while(i<j)
	{
		do{i++;}while(a[i]<=pivot);
		do{j--;}while(a[j]>pivot);

		if(i<j)swap(&a[i],&a[j]);
	};
		swap(&a[l],&a[j]);
		return j;
}

void Quick_sort:: quicksort(int a[],int l, int h)
{
	int j;
	if(l<h)
	{
		j=partition(a,l,h);
		quicksort(a,l,j);
		quicksort(a,j+1,h);
	}
}

void Quick_sort:: sort(int a[],int n)
{
	quicksort(a,0,n);
	cout<<"Quick_sort"<<endl;
}
		
		

