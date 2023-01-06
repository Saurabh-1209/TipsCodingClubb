#include<stdio.h>
int main(){
    int num,pal=0,cnum,x,y;
    printf("Enter a number that is to be checked for a palindrome: ");
    scanf("%d",&num);
    cnum=num;           // Original num is assigned to a variable so that we can later check if it is a palindrome
    while(cnum!=0){     // Reversing the number             
        x=cnum%10;                
        pal=pal*10+x;
        cnum/=10;
    }
    if(pal==num){       // Checking if it is a palindrome
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    } 
    return 0;
}