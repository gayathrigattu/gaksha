#ifndef __SORTINGS_HPP__
#define __SORTINGS_HPP__
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

class Sort
{
public:
	void swap(int *a,int *b);
	void print_array(int a[],int n);
	virtual void sort(int a[],int n)=0;
	void time(int a[],int n);
	void initializeRandoms(int a[],int lower, int upper, int n);

};


#endif
