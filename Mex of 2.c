#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter two non-negative integers: ");
    scanf("%d %d",&a,&b);
    if(a==0 && b==0){
        printf("%d",++c);
    }
    if(a>0 && b>0){
        printf("%d",c);
    }
    if(a==0 || b==0){
        if(a==1 || b==1){
            printf("%d",c+2);
        }
        if(a==2 || b==2){
            printf("%d",++c);
        }
    }

    return 0;
}