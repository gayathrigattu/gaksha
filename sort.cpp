 #include "sort.hpp"
 
void Sort:: swap(int *a,int *b)	
{
	int t;
	t=*a;
	*a=*b;
	*b=t;

}
	
void Sort:: print_array(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
} 
	
		
void Sort:: time(int a[],int n)
{
	auto start = high_resolution_clock::now();
	sort(a,n);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);	
    	cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
}
	
void Sort:: initializeRandoms(int a[],int lower, int upper, int n)
{
  		 int i;
   		 for (i = 0; i < n; i++) 
   		 {
       		a[i] = (rand() %(upper - lower + 1)) + lower;
      		
  		 }
}	
	
