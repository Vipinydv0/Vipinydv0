// #include<stdio.h>
// int main(){
//   int a = 36;
//   int b = 38;
  
// }
// #include <stdio.h>


// // int temp = b;
//         b = a % b;  // Remainder
//         a = temp;   // Update a
//     }
//     return a;

//  {int result = gcd(a,b);

//     printf("GCD of %d and %d is %d\n", a, b, result);
    
//     return 0;}}
// // int main() {
// //     int num1, num2;

// //     printf("Enter two integers: ");
// //     scanf("%d %d", &num1, &num2);

// //     // Calculate GCD
// //     int result = gcd(num1, num2);

// //     printf("GCD ofint gcd(int a, int b) {
// //     while (b != 0) {
// //          %d and %d is %d\n", num1, num2, result);
    
// //     return 0;
// // }

#include<stdio.h>
int main(){
  int i;
  int arr[7] = {2,3,4,5,6,7,9};
  int n =7;
  for(int i = 0 ; i<=n/2;i++){
    
    int temp = arr[i];
    arr[i] = arr[6-i];
    arr[6-i]= temp;}
for(int i = 0 ; i<=6;i++)
   printf("%d",arr[i]);
}