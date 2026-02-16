//Create array for user input and output the array
#include <stdio.h>

int main() {
	int n;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[1000];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
	    printf(" %d",a[j]);
	}

}



  
  
  //1.Write a C program to check whether a character is alphabet or not.
#include <stdio.h>

int main() {
	char ch ;
	scanf("%c",&ch);
	if (ch>='A'&& ch<='Z')
	{
	    ch=ch+32;
	}
	switch(ch)
	{
	    case 'a':
		case 'b':
		case 'c': 
		case 'd': 
		case 'e':
        case 'f': 
		case 'g':
		case 'h': 
		case 'i':
		case 'j':
        case 'k': 
		case 'l':
		case 'm': 
		case 'n':
		case 'o':
        case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
        case 'u': 
		case 'v':
		case 'w':
		case 'x':
		case 'y':
        case 'z':
        printf("The character is an Alphabet.");
        break;
        
        default :
        printf("The character is NOT an Alphabet.");
	}
	

}



//4.Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>

int main() {
	char ch ;
	scanf("%c",&ch);
	if (ch>='A'&& ch<='Z')
	{
	    ch=ch+32;
	}
	if (ch>='a' && ch<='z')
	{
	switch(ch)
	{
	    case 'a':
	    case 'e': 
	    case 'i': 
	    case 'o':
	    case 'u':
	    printf("It is a Vowel.");
	    break;
	    default :
	    printf("It is a consonent.");
	}
	}
	else
	printf("Bohot tej ho rahaho");

	

}

/5.Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
int main() {
    char alpha;
    int x;
    printf("Enter a character: ");
    scanf("%c",&alpha);
    
    
    if(alpha>='A' && alpha<='Z' ||  alpha>='a' && alpha<='z')
    x=3;
    else if (alpha>='0' && x<='9')
    x=2;
    else 
    x=1;
    switch(x)
    {
        case 1:
        printf("Your Enter character is a Special Character");
        break;
        case 2:
        printf("Your Enter character is a DIgit ");
        break;
        case 3:
        printf("Your Enter Character is a Alphabet ");
        break;
        default :
        printf("Your are gineus bro");
        
        
        
    }
    
   
    
    

    return 0;
}

//6.Write a C program to find all roots of a quadratic equation

#include <stdio.h>
#include<math.h>

int main() {
    int a,b,c,x;
    float D,x1,x2;
    printf("::Quadratic Equation ax^2+bx+c::\n");
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    D=b*b-4*a*c;
    
    if(D>0)
    x=1;
    else if(D==0)
    x=2;
    else 
    x=3;
    switch(x)
    {
        case 1:
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
        break;
        case 2:
         x1=-b/(2*a);
        printf("x1=x2= %.2f",x1);
        break;
        case 3:
        x1=-b/(2*a);
        x2=sqrt(-D)/(2*a);
        printf("x1= %.2f + i%.2f\n",x1,x2);
        printf("x2= %.2f - i%.2f",x1,x2);
        break;
    }
    }


