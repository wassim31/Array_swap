#include <stdlib.h>
#include <stdio.h>

void change(int array0[], int array1[], int same_size);
int main(void)
{
    // declare variables / arrays
    int i, len;
    do
    {
        // ask user for the arrays's size
        printf("Enter the arrays's size ; 1 <= len <= 10 : ");
        scanf("%d", &len);
    } while(len <= 0);

    int array0[len];
    int array1[len];
    // Ask the user of the values of the two arrays
    // array 1
    printf("Array 1 values : \n");
    for(i = 0 ; i < len ; i++)
    {
        scanf("%d", &array0[i]);
    }
    // array 2
    printf("Array 2 values : \n");
    for(i = 0 ; i < len ; i++)
    {
        scanf("%d", &array1[i]);
    }
    // show the actual values of 1 / 2 array
    printf("Array 1 is : \n");
    for(i = 0 ; i < len ; i++)
    {
        printf("%d ", array0[i]);
    }
    // first array values ended
    printf("\nArray 2 is : \n");
    for(i = 0 ; i < len ; i++)
    {
        printf("%d ", array1[i]);
    }
    // second array values ended
    printf("\n\t\tWe switch their values\n");
    // pass argument to function change();
    change(array0, array1, len);
    // first array new values ended
    printf("New Array 1 is : \n");
    for(i = 0 ; i < len  ; i++)
    {
        printf("%d ", array0[i]);
    }
    // second array new values ended
    printf("\nNew Array 2 is : \n");
    for(i = 0 ; i < len ; i++)
    {
        printf("%d ", array1[i]);
    }


    return 0;
}
void change(int array0[], int array1[], int same_size)
{
    int new_variable, j;
    for(j = 0 ; j < same_size ; j++)
    {
        new_variable = array1[j];
        array1[j] = array0[j];
        array0[j] = new_variable;
    }

}
