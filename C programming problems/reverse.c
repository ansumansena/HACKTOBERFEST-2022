#include <stdio.h>
#include <stdlib.h>
#define n 6
int main(){
    int arr[n] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}


//Solved By PartThaker007


#include<stdio.h>
 
int main() 
{
   int a[100], i, j, Size, Temp;
 
   printf("\nPlease Enter the size : ");
   scanf("%d",&Size);
 
   //Inserting elements in to it
   for (i = 0; i < Size; i++) 
   {
      scanf("%d", &a[i]);
   }
 
   j = i - 1;   // Assigning j to Last element
   i = 0;       // Assigning i to first element
 
   while (i < j) 
   {
      Temp = a[i];
      a[i] = a[j];
      a[j] = Temp;
      i++;             
      j--;         
   }
 
   printf("\nResult is: ");
   for (i = 0; i < Size; i++) 
   {
      printf("%d \t", a[i]);
   }
 
   return 0;
}
