// String input lower to upper used ascii number

#include <stdio.h>
#include<string.h>

int main() {
    char str1[100];
    printf("Enter a String : ");
    gets(str1);
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]>96 && str1[i]<123)
        {
            str1[i]=str1[i]-32;
        }
    }
    printf("%s",str1);
    
    return 0;
}

// String input lowercase to  uppercase used ascii number

#include <stdio.h>
#include<string.h>

int main() {
    char str1[100];
    printf("Enter a String : ");
    gets(str1);
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]>=65 && str1[i]<=90)
        {
            str1[i]=str1[i]+32;
        }
    }
    printf("%s",str1);
    
    return 0;
}


//Capitalize first letter and make the rest lowercase

#include <stdio.h>
#include<string.h>

int main() {
    char str1[100];
    printf("Enter a String : ");
    gets(str1);
    if(str1[0]>=97&&str1[0]<=122)
    str1[0]=str1[0]-32;
    for(int i=1;i<strlen(str1);i++)
    {
        if(str1[i]==' ')
        {
            if(str1[i+1]>=97&&str1[i+1]<=122)
            str1[i+1]=str1[i+1]-32;
        }
    }
    printf("%s",str1);
    
    return 0;
}

