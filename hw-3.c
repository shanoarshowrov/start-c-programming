//swap with temp variable
#include <stdio.h>

int main() {
int a,b;
	printf("Enter Value a: ");
	scanf("%d",&a);
	printf("Enter Value b: ");
	scanf("%d",&b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swap a = %d\n",a);
	printf("After swap b = %d\n",b);

    return 0;
}




// swap without tamp variable



#include <stdio.h>

int main() {
int a,b;
	printf("Enter Value a: ");
	scanf("%d",&a);
	printf("Enter Value b: ");
	scanf("%d",&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("After swap a = %d\n",a);
	printf("After swap b = %d\n",b);

    return 0;
}

//reverse array with temp arrray 
#include <stdio.h>

int main() {
	int n;
	printf("Input Array size : ");
	scanf("%d",&n);
	int a[100],b[100];
	printf("Input Array  : ");
	for (int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	
	for(int i=0,j=n-1;i<n,j>=0;i++,j--)
	{
	    b[i]=a[j];
	}
	printf(" Your Input Array is : ");
	for (int i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	
	printf("\nReverse Array is : ");
	for (int i=0;i<n;i++)
	{
	    printf("%d ",b[i]);
	}
}



//reverse array without temp arrray 



#include <stdio.h>

int main() {
    int n;
    printf("Input array size : ");
	scanf("%d",&n);
	int a[100];
	printf("Input array : ");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Your array array : ");
	for(int i=0;i<n;i++)
	printf(" %d",a[i]);
	
	int j=0,k=n-1,temp=0;
	while(j<k)
	{
	    temp=a[j];
	    a[j]=a[k];
	    a[k]=temp;
	    j++;
	    k--;
	    
	}
	printf("\nReverse  array : ");
	for(int i=0;i<n;i++)
	printf(" %d",a[i]);
}

