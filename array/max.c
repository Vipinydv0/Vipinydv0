#include<stdio.h>
int main(){
  int arr[9] = {1,2,8,44,5,6,7,8,9};
  int max = 0;
  for(int i = 0;i<=8;i++){
    if( max <= arr[i]){
      max = arr[i];
    }}
    
 printf("%d",max);
}
