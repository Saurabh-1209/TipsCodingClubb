#include<stdio.h>
int main(){
    int g,s,a,b,val_gold,val_silver;
    printf("Enter how many coins per gram of gold: ");
    scanf("%d",&g);
    printf("Enter how many coins per gram of silver: ");
    scanf("%d",&s);
    printf("Enter how many grams of gold: ");
    scanf("%d",&a);
    printf("Enter how many grams of silver: ");
    scanf("%d",&b);

    val_gold=g*a;
    val_silver=s*b;
    if(val_silver>val_gold){
        printf("Silver");
    }
    else{
        printf("Gold");
    }
    return 0;
}