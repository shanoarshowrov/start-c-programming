#include <stdio.h>
int mat[10][10],row,columns,sum=0;

int main() {
    while(1)
    {
        printf("Enter Number of row and columns : ");
	    scanf("%d %d",&row,&columns);
	    if(row!=columns)
	    {
	        printf("Error: Principal diagonal sum is defined only for square matrices!\n");
	        printf("<<Row or columns must be equal>>\n");
            printf("Enter 9 to stop the program\n");
            printf("Enter 1 to run again\nEnter: ");
            int n;
            scanf("%d",&n);
            if (n==9)
            break;
            else if (n==1)
            continue;
            else
            {
            printf("Bohot thej horahaho \n");
            break;
            }
	
	    }
	    printf("Enter the elements of the Matrix\n");
	    for(int i=0;i<row;i++)
	    {
	        for(int j=0;j<columns;j++)
	        {
	            printf("Element[%d][%d]=",i+1,j+1);
	            scanf("%d",&mat[i][j]);
	        }
	    }
	    for(int i=0;i<row;i++)
	    {
	        sum=sum+mat[i][i];
	    }
	    printf("Sum of principal diagram element = ");
	    printf("%d\n\n",sum);
	    
	    printf("Enter 9 to stop the program\n");
        printf("Enter 1 to  try another matrix again\nEnter: ");
	    int n;
        scanf("%d",&n);
        if (n==9)
        break;
        else if (n==1)
        continue;
        else
        {
        printf("Bohot thej horahaho \n");
        break;
        }
	    

        
        
    }

	

}
