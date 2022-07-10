import os

class Sort:
	def __init__(self,a):
		self.a=a
	def swap(self,i,j):
		temp=self.a[i]
		self.a[i]=self.a[j]
		self.a[j]=temp
	    	
	def sort(self):
		pass
	def print_arr(self):
		print(self.a)  
    
class Bubble(Sort):
	def __init__(self,a):
		Sort.__init__(self,a)
	def sort(self):
		for i in range(len(self.a)-1):
	       	 for j in range(i+1,len(self.a)):
	       	 	if self.a[i]>self.a[j]:
                			self.swap(i,j)
	

class Quick_sort(Sort):
	def partition(a,l,h):
		i=l
		j=h
		pivot=a[l]
		while(i<j):
			while(i<=h and a[i]<=pivot):
				i=i+1
			while(j>l and a[j]>pivot):
				j=j-1
			if(i<j):
				a=swap(a,i,j)
		a=swap(a,j,l)
		return j
	def __init__(self,a):
		Sort.__init__(self,a)
	def quick(self):
		if(l<h):
			j=partition(a,l,h)
			a=quick(a,l,j)
			a=quick(a,j+1,h)
		return a


class Merge_sort(Sort):
	def mergesort(a,l,mid,h):
		i=l
		k=l
		j=mid+1
		b=[0]*100 
		while(i<=mid and j<=h):
			if(a[i]<a[j]):
				#for i in range(len(a))
				b[k]=a[i]
				k=k+1
				i=i+1
			else:
			#for j in range(len(a))
				b[k]=a[j]
				k=k+1
				j=j+1

		for i in range(i,mid+1):
			b[k]=a[i]
			k=k+1
		for j in range(j,h+1):
			b[k]=a[j]
			k=k+1
	#  k=0
		for i in range(l,h+1):
			a[i]=b[i]
		#  k=k+1
		def __init__(self,a):
			Sort.__init__(self,a)
		if(l<h):
			mid=(l+h)//2
			merge(a,l,mid)
			merge(a,mid+1,h)
			mergesort(a,l,mid,h)
		return a


class Insertion_sort(Sort):
	def __init__(self,a):
		Sort.__init__(self,a)
	def sort(self):
		for i in range(1,len(self.a)):
			j=i-1
			key=a[i]
			while(j>=0 and key<a[j]):
				a[j+1]=a[j]
				j=j-1
		a[j+1]=key
			
		return a 

a=[1,2,4,3]
"""n=len(a)
#a=quick(a,0,3)
#a=merge(a,0,3)
a=insertion(a,n)
print(a)
"""
b1=Bubble(a)
b1.sort() 
b1.print_arr()

q1=Quick_sort(a)
q1.sort()
q1.print_arr()

m1=Merge_sort(a)
m1.sort()
m1.print_arr()

I1=Insertion_sort(a)
I1.sort() 
I1.print_arr()

