#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

class Sort
{
public: 

	void swap(int *a,int *b)	
	{
		int t;
		t=*a;
		*a=*b;
		*b=t;
	
	}
	
	void print_array(int a[],int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	} 
	
	virtual void sort(int a[],int n)=0;
	
	void time(int a[],int n)
	{
		auto start = high_resolution_clock::now();
		sort(a,n);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);	
	    	cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
	}
	
	void initializeRandoms(int a[],int lower, int upper, int n)
	{
   		 int i;
    		 for (i = 0; i < n; i++) 
    		 {
        		a[i] = (rand() %(upper - lower + 1)) + lower;
       		
   		 }
	}
	
};

class Selection_sort : public Sort
{
public:

	void sort(int a[],int n)
	{
		int i,j;
		for(i=0;i<n-1;i++)					//n
		{
			int sel=i;					//n-1	
			for(j=i+1;j<n;j++)				//n-1*n or n-1*n-1
			{
				if(a[j]<a[sel])			//n-1*n-1
				{
					sel=j;				//n-1
				}
			}
			swap(&a[i],&a[sel]);				//n-1
		}
		cout<<"Selection_sort"<<endl;
	}
};

class Insertion_sort : public Sort
{
public:
	void sort(int a[],int n)
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
};

class Quick_sort : public Sort
{
	int partition(int a[8],int l,int h)
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

	void quicksort(int a[],int l, int h)
	{
		int j;
		if(l<h)
		{
			j=partition(a,l,h);
			quicksort(a,l,j);
			quicksort(a,j+1,h);
		}
	}
public:
	void sort(int a[],int n)
	{
		quicksort(a,0,n);
		cout<<"Quick_sort"<<endl;
	}
		
		
};

class Merge_sort : public Sort
{
	void merge(int a[],int l,int mid,int h)
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
	void mergesort(int a[],int l,int h)
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
public:
	void sort(int a[],int n)
	{
		mergesort(a,0,n);
		cout<<"Merge_sort"<<endl;
	}
		
};	
int main()
{
	int a[8],i;
	Selection_sort s1;
//	int a[]={14,33,27,10,35,19,42,44};
	int n=sizeof(a)/(sizeof(a[0]));
/*	for(int i = 0; i < 8; i++)
	{
        	a[i]=rand();
        	cout<<a[i]<<" ";
        }
        	cout<<endl;
*/
        s1.initializeRandoms(a,0,50,10);
	s1.time(a,n);
 	s1.print_array(a,n);
 	
 	Insertion_sort I1;
 	I1.initializeRandoms(a,0,50,10);
	I1.time(a,n);
	I1.print_array(a,n);
	
	Quick_sort Q1;
	Q1.initializeRandoms(a,0,50,10);
	Q1.time(a,n);
	Q1.print_array(a,n);
	
	Merge_sort M1;
	M1.initializeRandoms(a,0,50,10);
	M1.time(a,n);
	M1.print_array(a,n);
	
return 0;
}

	
	
