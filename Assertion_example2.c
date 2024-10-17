#include <stdio.h>
#include <assert.h>

int factorial(int n){
    assert(n>=0);  //assertion to check non negative number
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int num;
    printf("Enter the number for which you want to calculate factorial :\n");
    scanf("%d",&num);
    int res=factorial(num);
    printf("factorial of given number %d is : %d",num,res);
}