#include <stdio.h>
#define MAX_SIZE 5
void init_arr(int a[], int size)
{
    int i = 0;
    printf("Enter an integer: ");
    while(scanf("%d", &a[i]) == 1 && i < size-1)
    {
        i++;
        printf("Enter an integer: ");
    }
    
}
int Max_in_arr(int *a, int size)
{
    int i = 0, max = a[0];
    while(i < size)
    {
        if(a[i] > max)
            max = a[i];
        i++;
    }
    return max;
}
int MaxIndex_in_arr(int *a, int size)
{
    int i = 0, max = a[0];
    while(i < size)
    {
        if(a[i] > max)
            max = i;
        i++;
    }
    return max;
}
int Diff_Max_Min(int *a, int size)
{
    int max = Max_in_arr(a, size);
    int min = a[0];
    int i = 0;
    while(i < size)
    {
        if(a[i] < min)
            min = a[i];
        i++;
    }
    return max - min;
}
int main()
{
    int a[MAX_SIZE];
    init_arr(a, MAX_SIZE);
    int max = Max_in_arr(a, MAX_SIZE);
    int max_index = MaxIndex_in_arr(a, MAX_SIZE);
    int diff = Diff_Max_Min(a, MAX_SIZE);
    printf("The maximum value in the array is: %d\n", max);
    printf("The index of the maximum value in the array is: %d\n", max_index);
    printf("The difference between the maximum and minimum value in the array is: %d\n", diff);
    
    return 0;
}