#ifndef __MERGE_SORT_HPP__
#define __MERGE_SORT_HPP__
#include<iostream>
#include "sort.hpp"
class Merge_sort : public Sort
{
	void merge(int a[],int l,int mid,int h);
	void mergesort(int a[],int l,int h);
public:
	void sort(int a[],int n);
};
#endif
