/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)*/
#include<stdio.h>

int main(){
    int n;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter The Elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("\n Enter The Element To Search : ");
    scanf("%d",&key);

    int com=0;
    int found=0;
    for (int i = 0; i < n; i++)
    {
        com++;
        if (arr[i] == key)
        {
            printf("\nFound at index %d",i);
            found=1;
            break;


        }
        
    }

    if (found=0)
    {
        printf("\nNOt Found At Any Index");
    }
    
    printf("\nThe Total Comparisons Are : %d",com);


    return 0;
    
}