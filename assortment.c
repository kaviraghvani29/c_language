#include <stdio.h>

int main() {
    int n;
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array's elements:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Negative elements from an Array: ");
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < 0)
            printf("%d ", a[i]);
    }
///////////////////////////////////////////////

  int rows, cols;
    printf("Enter row size: ");
    scanf("%d", &rows);
    printf("Enter column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter array's elements:\n");

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int largest = arr[0][0];

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (arr[i][j] > largest) 
            {
                largest = arr[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", largest);

///////////////////////////////////////////////

   int n;
    printf("Enter row & column size: ");
    scanf("%d", &n);

    int arr[n][n], transpose[n][n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("The transpose matrix of an array:\n");

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

///////////////////////////////////////////

  int rows, cols;
    printf("Enter row size: ");
    scanf("%d", &rows);
    printf("Enter column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int rowNum;
    printf("Enter row number: ");
    scanf("%d", &rowNum);

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for (int j = 0; j < cols; j++) 
    {
        printf("%d ", arr[rowNum][j]);
        rowSum += arr[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    int colNum;
    printf("Enter column number: ");
    scanf("%d", &colNum);

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for (int i = 0; i < rows; i++) 
    {
        printf("%d ", arr[i][colNum]);
        colSum += arr[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
