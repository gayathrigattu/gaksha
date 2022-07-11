#include "sort.hpp"
#include "selection_sort.hpp" 
#include "insertion_sort.hpp"
#include "quick_sort.hpp"
#include "merge_sort.hpp"
#include "bubble_sort.hpp"
int main()
{
	int a[8],i;

//	int a[]={14,33,27,10,35,19,42,44};
	int n=sizeof(a)/(sizeof(a[0]));
/*	for(int i = 0; i < 8; i++)
	{
        	a[i]=rand();
        	cout<<a[i]<<" ";
        }
        	cout<<endl;
*/
	Selection_sort s1;
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
	
	Bubble_sort B1;
	B1.initializeRandoms(a,0,50,10);
	B1.time(a,n);
	B1.print_array(a,n);
	
return 0;
}
