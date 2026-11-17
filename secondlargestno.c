
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = a;

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    largest = *p;
    second = -999999;

    for(i = 1; i < n; i++)
    {
        if(*(p + i) > largest)
        {
            second = largest;
            largest = *(p + i);
        }
        else if(*(p + i) > second && *(p + i) != largest)
        {
            second = *(p + i);
        }
    }

    if(second == -999999)
    {
        printf("Second largest element does not exist");
    }
    else
    {
        printf("Largest = %d\n", largest);
        printf("Second largest = %d\n", second);
    }

    return 0;
}
