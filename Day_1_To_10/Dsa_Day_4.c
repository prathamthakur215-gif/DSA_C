/*Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays*/
#include<stdio.h>

int main(){
    int s;
    printf("Enter the size of array : ");
    scanf("%d",&s);
    int arr[s];
    printf("\n Enter the Elements :");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int last=s-1;
    for (int i = 0; i < s/2; i++)
    {
        arr[i]=arr[i]+arr[last];
        arr[last]=arr[i]-arr[last];
        arr[i]=arr[i]-arr[last];
        last--;
    }
    
    printf("Your Updated Array Has Following Elements : ");
    for (int i = 0; i < s; i++)
    {
        
        printf("%d ",arr[i]);
    }

    return 0;
}