// (f) Paper of size A0 has dimensions 1189 mm x 841 mm. Each
// subsequent size A(n) is defined as A(n-1) cut in half parallel to its
// shorter sides. Thus paper of size A1 would have dimensions 841
// mm x 594 mm. Write a program to calculate and print paper sizes
// A0, A1, A2, … A8.

#include<stdio.h>
#include<math.h>

int min(int a, int b){
    if(a>b)
        return b;
    return a;
}

int max(int a, int b){
    if(a>b)
        return a;
    return b;
}

int main(){
    int l = 1189;
    int b = 841;
    printf("A0 : %d x %d", l, b);
    for(int i=0; i<8; i++){
        int new_l = max(l, b);
        int new_b = min(l, b);
        l = new_l/2;
        b = new_b;

        printf("\nA%d : %d x %d", i+1, l, b);
    }
    return 0;
}
