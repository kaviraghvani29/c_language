#include <stdio.h>

//function
void findCubes(int arr[10][10], int size) {
    int i, j;
    printf("Cubes of all elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            int val = arr[i][j];
            printf("%d ", val * val * val);   // cube
        }
        printf("\n");
    }
}

int main() {
    char str[100];
    char *p;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    p = str;

    while (*p != '\0') 
    {  
        length++;
        p++;
    }

    printf("Length of the string is: %d\n", length);

/////////////////////////////////////////

    int size, i, j;
    int arr[10][10];

    printf("Question 2: Cubes Generator\n");
    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(arr, size);

    return 0;
}
