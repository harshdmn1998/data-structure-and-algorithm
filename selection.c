#include <stdio.h>  
#include<conio.h> 
void selection(int arr[], int n)  
{  
    int i, j, min;  
      
    for (i = 0; i < n-1; i++)  
    {  
        min = i;   
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;  
  
    int temp = arr[min];  
    arr[min] = arr[i];  
    arr[i] = temp;  
    }  
}  
  
void printArr(int a[], int n)
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
void main()  
{  
    int a[] = { 7, 4, 5, 8, 3, 10 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("\nBeforer sorting array- \n");
    printArr(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array- \n");    
    printArr(a, n);  
      
}    