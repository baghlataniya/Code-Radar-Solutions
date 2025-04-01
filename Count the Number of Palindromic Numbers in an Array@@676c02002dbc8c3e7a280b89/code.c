#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    // Negative numbers are not considered palindromes
    if (num < 0) {
        return 0;
    }
    
    int original = num, reversed = 0, remainder;
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    // Check if the original number is equal to its reverse
    return original == reversed;
}

int main() {
    int n;
    scanf("%d", &n);  // Input the number of elements
    
    int arr[n];
    int count = 0;
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Count how many numbers are palindromes
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    
    // Output the count of palindromes
    printf("%d\n", count);
    
    return 0;
}
