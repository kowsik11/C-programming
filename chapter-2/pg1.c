#include <stdio.h>

int main(){
    int n, sum  = 0;
    int i=0;
    printf("enter the five digit number ");
    scanf("%d",&n);

    while(n>0){
        sum += n%10;
        n /= 10;
        
    }

    printf("sum of the five digit number %d\n",sum);
    
}