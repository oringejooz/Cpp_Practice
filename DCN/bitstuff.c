#include <stdio.h>

void bitStuffing() {
    int data[30], stuff[30];
    int i, j = 0, count = 0, n;
    
    // Input size
    printf("Enter number of bits: ");
    scanf("%d", &n);
    
    // Input the bits
    printf("Enter bits: ");
    for(i = 0; i < n; i++)
        scanf("%d", &data[i]);
    
    // Bit stuffing process
    for(i = 0; i < n; i++) {
        // Copy current bit to stuffed array
        stuff[j] = data[i];
        
        // If bit is 1 count++
        if(data[i] == 1) {
            count++;
        } else {
            count = 0;
        }
        
        // If 5 consecutive ones, stuff a zero
        if(count == 5) {
            j++;
            stuff[j] = 0;
            count = 0;
        }
        j++;
    }
    
    // Print original data
    printf("\nOriginal data: ");
    for(i = 0; i < n; i++)
        printf("%d", data[i]);
        
    // Print stuffed data
    printf("\nStuffed data: ");
    for(i = 0; i < j; i++)
        printf("%d", stuff[i]);
}

void bitDestuffing() {
    int data[30], destuff[30];
    int i, j = 0, count = 0, n;
    
    // Input size
    printf("\nEnter number of bits: ");
    scanf("%d", &n);
    printf("Enter stuffed bits: ");
    for(i = 0; i < n; i++)
        scanf("%d", &data[i]);
    //destuff
    for(i = 0; i < n; i++) {
        destuff[j] = data[i];
        
        // If bit is 1, count++ to skip
        if(data[i] == 1) {
            count++;
        } else {
            count = 0;
        }
        
        // If 5 consecutive ones found, skip next bit (stuffed bit)
        if(count == 5) {
            i++;
            count = 0;
        }
        j++;
    }
    
    // Print stuffed data
    printf("\nStuffed data: ");
    for(i = 0; i < n; i++)
        printf("%d", data[i]);
        
    // Print destuffed data
    printf("\nDestuffed data: ");
    for(i = 0; i < j; i++)
        printf("%d", destuff[i]);
}

int main() {
    int choice;
    
    printf("1. Bit Stuffing\n2. Bit Destuffing\nEnter choice: ");
    scanf("%d", &choice);
    
    if(choice == 1)
        bitStuffing();
    else if(choice == 2)
        bitDestuffing();
    else
        printf("Invalid choice!");
        
    return 0;
}