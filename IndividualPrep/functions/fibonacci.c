#include <stdio.h>

// 1. Print the first 50 Fibonacci numbers
void print_first_50_fibonacci(void) {
    printf("--- First 50 Fibonacci Numbers ---\n");
    // We use unsigned long because Fibonacci numbers grow very large, very fast!
    unsigned long a = 1;
    unsigned long b = 2;
    unsigned long next;

    printf("%lu, %lu", a, b);

    // We already printed the first 2, so we loop 48 more times
    for (int i = 2; i < 50; i++) {
        next = a + b;
        printf(", %lu", next);
        
        // The Sliding Window!
        a = b;
        b = next;
    }
    printf("\n\n");
}

// 2. Sum of even Fibonacci numbers not exceeding 4,000,000
void sum_even_fibonacci(void) {
    printf("--- Sum of Even Fibonacci Numbers (Under 4M) ---\n");
    unsigned long a = 1;
    unsigned long b = 2;
    unsigned long next = 0;
    unsigned long sum = 2; // We start with 2 because 'b' is already even

    while (1) {
        next = a + b;
        
        if (next >= 4000000) {
            break; // Stop if the number hits 4 million
        }

        // If the number is even, add it to our sum
        if (next % 2 == 0) {
            sum += next;
        }

        // Slide the window forward
        a = b;
        b = next;
    }
    
    printf("Sum: %lu\n\n", sum);
}

// 3. Print the first 98 Fibonacci numbers
// Note: The 98th Fibonacci number is SO massive it breaks standard 64-bit integers.
// A common trick to prevent overflow is to split the number into two parts (halves).
void print_first_98_fibonacci(void) {
    printf("--- First 98 Fibonacci Numbers ---\n");
    
    unsigned long a1 = 0, a2 = 1; // 'a' split into high (a1) and low (a2) halves
    unsigned long b1 = 0, b2 = 2; // 'b' split into high (b1) and low (b2) halves
    unsigned long next1, next2;
    
    // Billion is used as the breaking point to carry over numbers to the high half
    unsigned long billion = 1000000000; 

    printf("%lu, %lu", a2, b2);

    for (int i = 2; i < 98; i++) {
        // Calculate the next number by adding the high and low halves separately
        next1 = a1 + b1;
        next2 = a2 + b2;

        // If the low half gets too big, carry a 1 over to the high half
        if (next2 >= billion) {
            next1 += 1;
            next2 -= billion;
        }

        // Print it (if high half exists, print it, then print low half padded with zeroes)
        if (next1 > 0) {
            printf(", %lu%09lu", next1, next2);
        } else {
            printf(", %lu", next2);
        }

        // Slide the window forward for both halves
        a1 = b1;
        a2 = b2;
        
        b1 = next1;
        b2 = next2;
    }
    printf("\n");
}

int main(void) {
    print_first_50_fibonacci();
    sum_even_fibonacci();
    print_first_98_fibonacci();
    
    return 0;
}
