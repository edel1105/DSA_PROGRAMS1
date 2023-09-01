#include <stdio.h>

// Function to insert an element into the array
void insert(int arr[], int *size, int element) {
    if (*size < 100) {
        arr[(*size)++] = element;
        printf("Element %d inserted successfully.\n", element);
    } else {
        printf("Array is full. Cannot insert more elements.\n");
    }
}

// Function to delete an element from the array
void deleteElement(int arr[], int *size, int element) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            found = 1;
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            printf("Element %d deleted successfully.\n", element);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }
}

// Function to traverse and display the array elements
void traverse(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to search for an element in the array
void search(int arr[], int size, int element) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;
            printf("Element %d found at index %d.\n", element, i);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }
}

int main() {
    int arr[100];
    int size = 0;
    int choice, element;

    while (1) {
        printf("\nMenu:\n");
        printf("1. INSERT\n");
        printf("2. DELETE\n");
        printf("3. TRAVERSE\n");
        printf("4. SEARCH\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                insert(arr, &size, element);
                break;
            case 2:
                printf("Enter the element to delete: ");
                scanf("%d", &element);
                deleteElement(arr, &size, element);
                break;
            case 3:
                traverse(arr, size);
                break;
            case 4:
                printf("Enter the element to search: ");
                scanf("%d", &element);
                search(arr, size, element);
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
