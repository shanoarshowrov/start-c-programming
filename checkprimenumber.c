// //Check a Number Prime or not prime 
#include <stdio.h>

void checkprime(int n)
{
    int i,pi=0;
    if (n<=1)
    printf("Number is not a prime number");
    else
    {
        if(n%2!=0)
        {
            for (i=3;i*i<=n;i=i+2)
            {
                if (n%i==0)
				{
					pi=1;
					break;
				}
                
            }
            if (pi==1)
            printf("Number is not a prime number");
            else
            printf("Number is a prime number");
            
            
            
        }
        
        else if(n==2)
        printf("Number is a prime number");
        else
        printf("Number is not a prime number");
        
        
        
    }
    
}

int main() {
    int n;
	printf("Enter A Number :");
    scanf("%d",&n);
    checkprime(n);
}




// // How many prime number  or not primenumber roll stduents in the classroom

#include <stdio.h>

int checkprime(int n)
{
    int i,pi=0;
    if (n<=1)
    return 0;
    else
    {
        if(n%2!=0)
        {
            for (i=3;i*i<=n;i=i+2)
            {
                if (n%i==0)
                {
                    pi=1;
                    break;
                }
            
                
            }
            if (pi==1)
            return 0;
            else
            return 1;
            
            
            
        }
        
        else if(n==2)
        return 1;
        else
        return 0;
        
        
        
    }
    
}

int main() {
    int s,e,primesum=0,notprimesum=0;
    printf("Enter Starting class roll: ");
    scanf("%d",&s);
    printf("Enter Ending Classroll: ");
    scanf("%d",&e);
    for (int i=s;i<=e;i++)
    {
        if(checkprime(i))
        {
            primesum++;
        }
        else
        notprimesum++;
    }
    printf("All Prime Roll Available = %d\n",primesum);
    printf("All  Not Prime Roll Available = %d",notprimesum);
    
}




