/*Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/
#include<stdio.h>

int main(){
    int a;
    printf("\n");
    printf("Enter The size of Array you want to create : ");
    scanf("%d",&a);
    printf("\n");
    int arr[a+1];
    for (int i = 0; i < a; i++)
    {
        printf("enter element :");
        scanf("%d",&arr[i]);
    }
    arr[a+1]=0;
    printf("\n");
    printf("Your Array Has Following Elements : ");
    for (int i = 0; i < a; i++)
    {
        
        printf("%d ",arr[i]);
    }
    int n;
    printf("\n Enter Element you want to add : ");
    scanf("%d",&n);
    int index;
    printf("\nEnter on which index you want to put %d on : ",n);
    scanf("%d",&index);

    for (int i = a; i >=index ; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[index-1]=n;
    printf("Your Updated Array Has Following Elements : ");
    for (int i = 0; i < a+1; i++)
    {
        
        printf("%d ",arr[i]);
    }


    return 0;
}