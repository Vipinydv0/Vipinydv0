#include <stdio.h>

int main() {
    int temp;
    int a[5];

    
    for(int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }

   
    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(a[j] > a[j + 1]) {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

   
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    

    return 0;
}

