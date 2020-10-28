#include<stdio.h>
#include<math.h>
void bubblesort();
void insertionsort();
void selectionsort();
void quicksort();
void mergesort();
void heapsort();
void radixsort();
void shellsort();
void countingsort();
void linearsearch();
void binarysearch();			
void exit();
void input();
void swap(int*, int*);
int partition(int* , int, int);
int a[50],b[50],i,j,k,n,choice,temp,lb,ub,mid,start,end,pivot,partitionIndex;
int main()
{
	while(1)
	{
		system("color A");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" *********************    SEARCHING AND SORTING OPERATION BY  *********************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.BUBBLE SORT\n");
		printf("2.INSERTION SORT\n");
		printf("3.SELECTION SORT\n");
		printf("4.QUICK SORT\n");
		printf("5.MERGE SORT\n");
		printf("6.HEAP SORT\n");
		printf("7.RADIX SORT\n");
		printf("8.SHELL SORT\n");
		printf("9.COUNTING SORT\n");
		printf("10.LINEAR SEARCH\n");
		printf("11.BINARY SEARCH\n");
		printf("0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					bubblesort();
					break;
				case 2:
					insertionsort();
					break;
				case 3:
					selectionsort();
					break;
				case 4:
					quicksort();
					break;
				case 5:
					mergesort();
					break;
				case 6:
					heapsort();
					break;
				case 7:
					radixsort();
					break;
				case 8:
					shellsort();
					break;
				case 9:
					countingsort();
					break;
				case 10:
					linearsearch();
					break;
				case 11:
					binarysearch();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
	return 0;
}
void input()
{
	printf("ENTER THE NUMBER OF ELEMENT: ");
	scanf("%d",&n);
	printf("PLEASE ENTER THE ELEMENT:\n");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("BEFORE SORTING: \n");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
}
void bubblesort()
{
	input();
	{
		for(i=0; i<n; i++)
		{
			for(j=0; j<n-1-i; j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("\nAFTER SORTING: \n");
		for(i=0; i<n; i++)
		printf("%d  ",a[i]);
	}
}
void selectionsort()
{
	input();
	{
		for(i=0; i<n-1; i++)
		{
			int min =i;
			for(j=i+1; j<n; j++)
			{
				if(a[j]<a[min])
				{
					min = j;
				}
			}
			if(min!=i)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	
	}
	printf("\nAFTER SORTING: \n");
	for(i=0; i<n; i++)
	printf("%d  ",a[i]);
}
void insertionsort()
{
 	input();
 	{
		for(i=1; i<n; i++)
		{
			temp=a[i];
			j=i-1;
			while(j>=0 && a[j]>temp)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
		}
		printf("\nAFTER SORTING: \n");
		for(i=0; i<n; i++)
		printf("%d  ",a[i]);
	}
}
void quicksort()
{	
	input();
	{
		partion(a,lb,ub);
		{
			pivot=lb;
			start=lb;
			end=ub;
			while(start<end)
			{
				while(a[start]<=pivot)
				{
					start++;
				}
				while(a[end]>pivot)
				{
					end--;
				}
				if(start<end)
				{
					swap(&a[start],&a[end]);
				}
			}
			swap(&a[lb], &a[end]);
			return end;
		}
		quicksorta(a,lb,ub);
		{
			if(lb<ub)
			{
				partitionIndex = partion(a,lb,ub);
				quicksorta(a,lb,partitionIndex-1);
				quicksorta(a,partitionIndex,ub-1);
			}
		}
	}
}
void mergesort()
{
	input();
	{
		merge(a[50],lb,ub);
		{
			i=lb;
			j=j+1;
			k=lb;
			while(i<=mid && j<=ub)
			{
				if(a[i]<=a[j])
				{
					b[k]=a[i];
					i++;
				}
				else
				{
					b[k]=a[j];
					j++;
				}
				k++;
			}
			if(i>mid)
			{
				while(j<=ub)
				{
					b[k]=a[j];
					j++;
					k++;
				}
			}
			else
			{
				while(i<=mid)
				{
					b[k]=a[i];
					i++;
					k++;
				}
			}
			for(k=lb; k<=ub; k++)
			{
				a[k]=b[k];
			}
		}
	}
}
void heapsort()
{
	input();
	{
		creatheap(A,n,value)
		{
			n=n+1;
			A[n]=value;
			i=n;
			while(i>1)
			{
				parent=[i/2];
				if(A[parent]<A[i])
				{
					swap(A[parent],A[i])
					i=parent
				}	
				else
				{	
					return 0;
				}
			}	
		}
	
	}
}
void radixsort(a,n)
{
	input();
	{
		int max=getmax(A,n);
		for(pos=1; max/pos>o; pos*10)
		{
			countsort(A,n,pos)
		}
	}	
	countsort(int A[],int n, int pos)
	{
		int count[10]={0};
		for(i=0; i<n; i++)
		{
			++count[(a[i]/pos)%10];
		}
		for(i=1; i<=k; i++)
		{
			count[i]=count[i]+count[i-1];
		}
		for(i=n-1; i>=0; i--)
		{
			b[--count[((a[i]/pos)%10)]]=a[i];
		}
		for(i=0; i<n; i++)
		{
			a[i]=b[i];
		}
	}
}
void shellsort()
{
	input();
	{
		for(gap=n/2; gap>=1; gap/2)
		{
			for(j=gap; j<n; j++)
			{
				for(i=j-gap; i>=0; i-gap)
				{
					if(a[i+gap]>a[i])
					{
						break;
					}
					else
					{
						swap(a[i+gap],a[i])
					}
				}
			}
		}
	}
}
void countingsort(a,n,k)
{
	input();
	{
		for(i=0; i<n; i++)
		{
			++count[a[i]];
		}
		for(i=1; i<=k; i++)
		{
			count[i]=count[i]+count[i-1];
		}
		for(i=n-1; i>=0; i--)
		{
			b[--count[a[i]]]=a[i];
		}
		for(i=0; i<n; i++)
		{
			a[i]=b[i];
		}
	}
}
void linearsearch()// time complexity of best case is O(1) and worst case is O(n) and average case = O(n+1)/2 or say sum of all case /al cases
{
	input();
	{
		for(i=0; i<n; i++)
		{
			if(a[i]==data)
			{
				printf("Data Found At Index: %d",i);
				break;
			}
		}
		if(i==n)
		{
			printf("Data Not Found: ");
		}
	}
}
void binarysearch(a,n,data)// time complexity best case O(1) and worst case O(Logn)
{
	input();
	{
		int l=0,r=n-1;
		while(l<r)
		{
			mid=(l+r)/2;
			if(data==a[mid])
			return mid;
			else if(data<a[mid])
			r=mid-1;
			else
			l=mid+1;
		}
		return -1;
	}
}
void swap(int *a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
