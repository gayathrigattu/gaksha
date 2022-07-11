#ifndef __QUICK_SORT_HPP__
#define __QUICK_SORT_HPP__
#include<iostream>
#include "sort.hpp"
using namespace std;
class Quick_sort : public Sort
{
private:
	int partition(int a[8],int l,int h);
	void quicksort(int a[],int l, int h);
public:
	void sort(int a[],int n);
};
#endif
