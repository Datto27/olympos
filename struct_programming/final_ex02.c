#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findElement(int* arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

void task_1() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to find: ");
    scanf("%d", &target);

    // Find the target element in the array
    int index = findElement(arr, size, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    // Free the dynamically allocated memory
    free(arr);
}

void task_2() {
    FILE* file = fopen("test.txt", "w");
    int min_string_length;
    char strings[256][256];
    
    printf("Enter string (q for quit): \n");
    int i = 0;
    for(;;) {
        scanf("%s", strings[i]);
        if(strcmp(strings[i], "q") == 0) {
            break;
        }
        
        if(i == 0) {
            min_string_length = strlen(strings[i]);
        } else if(min_string_length > strlen(strings[i])) {
            min_string_length = strlen(strings[i]);
        }
        
        fprintf(file, "%s", strings[i]);
        i++;
    }
    
    printf("size %d, shortest strings: \n", min_string_length);
    for(int j=0; j<i; j++) {
        if(strlen(strings[j]) == min_string_length) {
            printf("%s \n", strings[j]);
        }
    }
    
    fclose(file);
}

int main() {
    // task_1();
    task_2();

    return 0;
}