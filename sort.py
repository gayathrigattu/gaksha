import os

class Sort:
	def __init__(self,a):
		self.a=a
	def swap(self,i,j):
		temp=self.a[i]
		self.a[i]=self.a[j]
		self.a[j]=temp
		return self.a
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
	def partition(self,l,h):
		i=l
		j=h-1
		pivot=self.a[l]
		while(i<j):
			while(i<=h and self.a[i]<=pivot):
				i=i+1
			while(j>l and self.a[j]>pivot):
				j=j-1
			if(i<j):
				self.a=self.swap(i,j)
		self.a=self.swap(j,l)
		return j
	def __init__(self,a):
		Sort.__init__(self,a)
	def quick(self,l,h):
		if(l<h):
			j=self.partition(l,h)
			self.a=self.quick(l,j)
			self.a=self.quick(j+1,h)
		return a
	def sort(self):
		self.quick(0,len(self.a))

class Merge_sort(Sort):
	def mergesort(self,l,mid,h):
		i=l
		k=l
		j=mid+1
		b=[0]*100 
		while(i<=mid and j<=h-1):
			if(self.a[i]<self.a[j]):
				#for i in range(len(a))
				b[k]=self.a[i]
				k=k+1
				i=i+1
			else:
			#for j in range(len(a))
				b[k]=self.a[j]
				k=k+1
				j=j+1

		for i in range(i,mid+1):
			b[k]=self.a[i]
			k=k+1
		for j in range(j,h):
			b[k]=self.a[j]
			k=k+1
	
		for i in range(l,h):
			self.a[i]=b[i]
		
	def __init__(self,a):
		Sort.__init__(self,a)
	def merge(self,l,h):
			if(l<h):
				mid=(l+h)//2
				self.merge(l,mid)
				self.merge(mid+1,h)
				self.mergesort(l,mid,h)
			return a
	def sort(self):
			self.merge(0,len(self.a))

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

