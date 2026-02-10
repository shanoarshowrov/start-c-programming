//1.Write a C program to check whether a character is alphabet or not.
#include <stdio.h>

int main() {
    char alphabet;
    printf("Enter a Character: ");
    scanf("%c",&alphabet);
    int x;
    x=alphabet;
    if (x>64 && x<123)
    printf("Character is Alphabet");
    else
    printf("Character is not a alphabet");

    return 0;
}




//2.Write a C program to check whether a year is leap year or not.

#include <stdio.h>

int main() {
    int yr;
    printf("Enter a Year: ");
    scanf("%d",&yr);
    if(yr%400==0 || yr%4==0 && yr%100!=0)
    printf("The Year is a Leap Year");
    else
    printf("The Year is not Leap Year");
    


    return 0;
}




//3.Write a C program to check whether a number is divisible by 5 and 11 or not

#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    printf("Yes");
    else
    printf("NO");
    


    return 0;
}



//4.Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>

int main() {
    char alpha;
    printf("Enter a Alphabet: ");
    scanf("%c",&alpha);
    if(alpha=='a' || alpha=='e' || alpha =='i' || alpha == 'o' || alpha =='u' ||alpha=='A' || alpha=='E' || alpha =='I' || alpha == 'O'|| alpha =='U')
    printf("The Alphabet is Vowel");
    else
    printf("The Alphabet is Consonant");
    


    return 0;
}



//5.Write a C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>

int main() {
    char alpha;
    int x;
    printf("Enter a character: ");
    scanf("%c",&alpha);
    x=alpha;
    
    if(x>64 && x<123)
    printf("Your Enter Character is a Alphabet ");
    else if (x>=48 && x<=58)
    printf("Your Enter character is a DIgit ");
    else 
    printf("Your Enter character is a Special Character");
    

    return 0;
}



//6.Write a C program to find all roots of a quadratic equation

#include <stdio.h>
#include<math.h>

int main() {
    int a,b,c;
    float D,x1,x2;
    printf("::Quadratic Equation ax^2+bx+c::\n");
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    D=b*b-4*a*c;
    if (D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }
    else if (D==0)
    {
        x1=-b/(2*a);
        printf("x1=x2= %.2f",x1);
    }
    else 
    {
        x1=-b/(2*a);
        x2=sqrt(-D)/(2*a);
        printf("x1= %.2f + i%.2f\n",x1,x2);
        printf("x2= %.2f - i%.2f",x1,x2);
        
    }
    
    return 0;
}




//7.Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>

int main() {
    char alpha;
    int x;
    printf("Enter a Alphabet: ");
    scanf("%c",&alpha);
    x=alpha;
   
    if(x>64 && x<97)
    printf("Your Enter  Alphabet is a Uppercase");
    else if (x>96 && x<123)
    printf("Your Enter  Alphabet is a Lowercase");
    else if (x>=48 && x<=58)
    printf("Your Enter character is a DIgit ");
    else 
    printf("Your Enter character is a Special Character");
    

    return 0;
}



// 8.write a c programme to count total number of notes in given number


#include <stdio.h>

int main() {
    
    int x,notes=0;
    printf("Enter a Number: ");
    scanf("%d",&x);

    if (x>=1000)
    {
    notes =notes +(x/1000);
    x=x%1000;
    }
    if(x>=500)
    {
        notes=notes+(x/500);
        x=x%500;
        
    }
    if (x>=100)
    {
        notes = notes + (x/100);
        x=x%100;
    }
    if (x>=50)
    {
        notes=notes+(x/50);
        x=x%50;
    }
    if (x>=20)
    {
        notes=notes+(x/20);
        x=x%20;
    }
    if (x>=10)
    {
        notes=notes+(x/10);
        x=x%10;
    }
    if (x>=5)
    {
        notes=notes+(x/5);
        x=x%5;
    }
    if (x>=1)
    {
    notes = notes+(x/1);
    }
   
    printf("All notes = %d",notes);
   
    

    return 0;
}


