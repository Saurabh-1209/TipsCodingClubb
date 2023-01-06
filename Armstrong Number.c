#include<stdio.h>
#include<math.h>
int main(){
    int num,dig,cnum,arm=0,ct=3;
    printf("Input: ");
    scanf("%d",&num);
    cnum=num;
    while(cnum!=0){
        dig=cnum%10;
        arm=arm+pow(dig,ct);
        cnum/=10;
    }
    if(arm=num){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    return 0;
}