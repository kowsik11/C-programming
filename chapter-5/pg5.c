#include <stdio.h>
#include <string.h>

int main(){
    int i,rem,amstrong = 0,n,f; 
    printf("Enter a number: ");
    scanf("%d",&f);
    i = f;

    while(i != 0){
        rem = i%10;
        amstrong = amstrong + rem*rem*rem;
        i /= 10;
    }
    if(amstrong == f){
        printf("Amstrong");
    }else{
        printf("Its not amstrong");
    }

}