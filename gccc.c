#include <stdio.h> 
#include<stdlib.h>
int gcd(int a,int b) 

{ 
    
    if (a == 0) 
       return b; 
       
       else if(b == 0) 
       return a; 
   
    
    else if (a == b) 
        return a; 
   
    
    else if (a > b) 
        return gcd(a-b, b); 
        
   else return gcd(a, b-a); 
} 
int main() 
{ 
    int a = 98, b = 56; 
    printf("Enter the value of a and b:");
    scanf("%d\t %d",&a,&b);
    printf("GCD of %d and %d is %d", a, b, gcd(a,b)); 
    return 0; 
} 
   
