// 5. Reverse the Elements of an Array

#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int reversed[4];
    // Reversing manually
    reversed[0] = arr[3];
    reversed[1] = arr[2];
    reversed[2] = arr[1];
    reversed[3] = arr[0];
    printf("Reversed array:\n");
    printf("%d %d %d %d\n", 
    reversed[0], reversed[1],
    reversed[2], reversed[3]
    );
    return 0;
}
