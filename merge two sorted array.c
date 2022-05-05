
#include <stdio.h>
#define MAX_SIZE 100      

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], arr3[MAX_SIZE * 2];
    int n1, n2, n3;
    int i1, i2, i3;
    int i;
     
    printf("Enter the size of first array : ");
    scanf("%d", &n1);

    
    printf("Enter elements in first array : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the size of second array : ");
    scanf("%d", &n2);

    
    printf("Enter elements in second array : ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }


    n3 = n1 + n2;
    i1 = 0;
    i2 = 0;
    for(i3=0; i3 < n3; i3++)
    {
        
        if(i1 >= n1 || i2 >= n2)
        {
            break;
        }


        if(arr1[i1] < arr2[i2])
        {
            arr3[i3] = arr1[i1];
            i1++;
        }
        else
        {
            arr3[i3] = arr2[i2];
            i2++;
        }
    }
    while(i1 < n1)
    {
        arr3[i3] = arr1[i1];
        i3++;
        i1++;
    }
    while(i2 < n2)
    {
        arr3[i3] = arr2[i2];
        i3++;
        i2++;
    }


    printf("\nArray merged in ascending order : ");
    for(i=0; i<n3; i++)
    {
        printf("%d\t", arr3[i]);
    }

    return 0;
}

