#include "merge_sort.hpp"

void Merge_sort::merge(int a[],int l,int mid,int h)
	{
		int i=l,j=mid+1,k=l;
		int b[100];
		while(i<=mid && j<=h)
		{
			if(a[i]<a[j])
				b[k++]=a[i++];
			else
				b[k++]=a[j++];
		}
		for(;i<=mid;i++)
			b[k++]=a[i];
		for(;j<=h;j++)
			b[k++]=a[j];

		for(int i=l;i<=h;i++)
			a[i]=b[i];
	}
void Merge_sort:: mergesort(int a[],int l,int h)
	{
		int mid;
		if(l<h)
		{
			mid=(l+h)/2;
			mergesort(a,l,mid);
			mergesort(a,mid+1,h);
			merge(a,l,mid,h);
		}
	}

void Merge_sort:: sort(int a[],int n)
	{
		mergesort(a,0,n);
		cout<<"Merge_sort"<<endl;
	}
		

