#include <stdio.h>
#include <string.h> // Needed for string comparison and copying

// 1. Function to calculate the average age
// Takes the array of ages and the number of students (size)
float calculate_average(int ages[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ages[i];
    }
    return (float)sum / size; // Cast to float to get decimal places
}

// 2. Function to find the youngest age
int find_youngest(int ages[], int size) {
    int youngest = ages[0]; // Assume the first student is the youngest
    for (int i = 1; i < size; i++) {
        if (ages[i] < youngest) {
            youngest = ages[i]; // Found someone younger!
        }
    }
    return youngest;
}

// 3. Function to find the oldest age
int find_oldest(int ages[], int size) {
    int oldest = ages[0]; // Assume the first student is the oldest
    for (int i = 1; i < size; i++) {
        if (ages[i] > oldest) {
            oldest = ages[i]; // Found someone older!
        }
    }
    return oldest;
}

// 4. Function to sort students (names and ages) using Bubble Sort
// names[][50] means an array of strings, where each string can be up to 50 characters
void sort_students(char names[][50], int ages[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            
            // strcmp compares strings alphabetically. 
            // If it returns > 0, it means the left string comes AFTER the right string alphabetically
            if (strcmp(names[j], names[j+1]) > 0) {
                
                // --- SWAP NAMES ---
                char temp_name[50];
                strcpy(temp_name, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp_name);
                
                // --- SWAP AGES ---
                // We MUST swap ages at the exact same time so they don't lose their owner!
                int temp_age = ages[j];
                ages[j] = ages[j+1];
                ages[j+1] = temp_age;
            }
        }
    }
}

int main(void) {
    // 10 students: Parallel arrays
    char names[10][50] = {
        "Zack", "Alice", "Charlie", "Bob", "Eve", 
        "David", "Frank", "Grace", "Heidi", "Ivan"
    };
    int ages[10] = {25, 22, 21, 23, 19, 20, 24, 21, 22, 20};
    int size = 10;
    
    // Call the sorting function
    sort_students(names, ages, size);
    
    // Print sorted students
    printf("--- Students (Sorted Alphabetically) ---\n");
    for (int i = 0; i < size; i++) {
        printf("%s is %d years old.\n", names[i], ages[i]);
    }
    
    // Call the math functions and print results
    printf("\n--- Statistics ---\n");
    printf("Average Age: %.2f\n", calculate_average(ages, size));
    printf("Youngest Age: %d\n", find_youngest(ages, size));
    printf("Oldest Age: %d\n", find_oldest(ages, size));
    
    return 0;
}
