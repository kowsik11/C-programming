#include <stdio.h>

int factor(int n){
    if (n<=1)
        return 1;
    else 
        return n*factor(n-1);
}

int main(){
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);

    i = factor(n);
    printf("factor : %d\n",i);

    return 0;
}

