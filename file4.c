#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int array[10], element, c, n, pos;
    int found = 0; 
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);

    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nThe input array is: ");
    for(c = 0; c < n; c++)
    printf("%d", array[c]);

    printf("\n\nEnter the element to be deleted: ");
    scanf("%d", &element);

        for(c = 0; c < n; c++)
    {
        if(array[c] == element)
        {
            found = 1;
            pos = c;
            break; 
        }
    }
    if(found == 1)
    {
        for(c = pos; c < n-1; c++)
            array[c] = array[c+1];
    }
    else
        printf("\n\nElement %d is not found in the array\n\n", element);

    printf("\n\nResultant array is: ");
         for(c = 0; c < n-1; c++) 
        printf("%d  ",array[c]);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
