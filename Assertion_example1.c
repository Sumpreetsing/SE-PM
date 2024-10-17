#include <stdio.h>
#include <assert.h>
int main()
{
    int a,b; //declare two int variables
    printf("Enter the values of 'a' and 'b' : \n"); //read the values from user
    scanf("%d%d",&a,&b);
    assert(b!=0); //check the condition b not equals to zero
    float res=(a/b);
    printf("Result of division is : %f",res); //if assertion successfull print the result
}