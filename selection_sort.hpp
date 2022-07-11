#ifndef __selection_sort_hpp__
#define __selection_sort_hpp__
#include<iostream>
#include"sort.hpp"
using namespace std;

class Selection_sort : public Sort
{
public:
	void sort(int a[],int n);
};
#endif
