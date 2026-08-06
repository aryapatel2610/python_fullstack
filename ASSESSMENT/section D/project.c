
#include <stdio.h>
#include <conio.h>

int main() {
    int arr[10];
    int i, j, temp;
    int min, max;
    int sum = 0;
    float mean;

    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
     
    min = max = arr[0];

    for(i = 1; i < 10; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    mean = sum / 10;   
    printf("\nMinimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("Mean = %.2f\n", mean);

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    if((mean - min) < (max - mean))
        printf("Mean is closer to the minimum.\n");
    else if((mean - min) > (max - mean))
        printf("Mean is closer to the maximum.\n");
    else
        printf("Mean is exactly midway between minimum and maximum.\n");

    return 0;
}


