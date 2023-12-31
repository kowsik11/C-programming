#include <stdio.h>

int main() {
    int n, i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements
    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }

    int max=numbers[0], min=numbers[0];
    
    for(i=1; i < n; ++i) {
        if(max<numbers[i]){
            max = numbers[i];
        }

        if(min>numbers[i]){
            min = numbers[i];
        }
    }

    printf("Range is %d", max-min);

    return 0;
}