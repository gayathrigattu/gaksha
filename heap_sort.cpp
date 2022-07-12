#include"heap_sort.hpp"

void Heap_sort :: Heapify(int a[],int n,int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && a[largest]<a[left])
		largest=left;
	if(right<n && a[largest]<a[right])
		largest=right;
	if(largest!=i){
		swap(&a[i],&a[largest]);
		Heapify(a,n,largest);

	}
}

void Heap_sort :: heapsort(int a[],int n)
{
	int i;
	for(int i=n/2-1;i>=0;i--)
		Heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(&a[0],&a[i]);
		Heapify(a,i,0);

	}
}
void Heap_sort :: sort(int a[],int n)
{
		heapsort(a,n);
		cout<<"Heap_sort"<<endl;
}
		
		
