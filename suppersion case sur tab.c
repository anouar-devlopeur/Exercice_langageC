#include <stdio.h>
//FUNCTION Remove supp
/* start fun*/
int removeValue(int T[], int n, int valueToRemove) {
    int i, j;

    for (i = 0, j = 0; i < n; i++) {
        if (T[i] != valueToRemove) {
            T[j] = T[i];
            j++;
        }
    }

    n = j; // Update the size of the modified array
    return j;   // Return the new size
}
/* End fun*/

/*-------------------------------------------------------*/
int main() {
    int T[100], n, i, j, valueToRemove;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

   
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Enter T[%d]: ", i);
        scanf("%d", &T[i]);
    }
// Search for the value to remove and shift the elements accordingly

    printf("Enter the value you want to remove: ");
    scanf("%d", &valueToRemove);

    
 // Update the number of elements in the array
          n = removeValue(T, n, valueToRemove);
		  // fun return number Arry sans supperimer
    
    // Print the modified array
    printf("Modified array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", T[i]);
    }

    return 0;
}

