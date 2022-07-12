#ifndef __HEAP_SORT_HPP__
#define __HEAP_SORT_HPP__
#include<iostream>
#include "sort.hpp"
class Heap_sort : public Sort
{
	void Heapify(int a[],int n,int i);
	void heapsort(int a[],int n);
public:
	void sort(int a[],int n);
};
#endif

