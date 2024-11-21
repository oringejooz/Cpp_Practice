#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

// Function to calculate redundant bits
int calculateRedundantBits(int dataSize) {
    int r = 0;
    while ((1 << r) < (dataSize + r + 1)) {
        r++;
    }
    return r;
}

// Function to encode data
void encode(char *data, int dataSize) {
    // Calculate redundant bits needed
    int r = calculateRedundantBits(dataSize);
    int msgSize = dataSize + r;
    char msg[MAX_SIZE] = {0};
    
    // Put data bits into message array
    int dataBit = 0;
    for(int i = 1; i <= msgSize; i++) {
        // If position is not a power of 2, it's a data bit
        if(i & (i-1)) {
            msg[i] = data[dataBit++];
        }
    }
    
    // Calculate parity bits
    for(int i = 0; i < r; i++) {
        int parityPos = 1 << i;  // 2^i
        int count = 0;
        
        // Calculate parity
        for(int j = parityPos; j <= msgSize; j++) {
            if(j & parityPos) {
                if(msg[j] == '1') {
                    count++;
                }
            }
        }
        // Set parity bit
        msg[parityPos] = (count % 2) ? '1' : '0';
    }
    
    // Print encoded message
    printf("Encoded message: ");
    for(int i = msgSize; i >= 1; i--) {
        printf("%c ", msg[i]);
    }
    printf("\n");
    
    // Check for errors
    printf("\nEnter received message: ");
    char received[MAX_SIZE];
    for(int i = msgSize; i >= 1; i--) {
        scanf(" %c", &received[i]);
    }
    
    // Calculate error position
    int errorPos = 0;
    for(int i = 0; i < r; i++) {
        int parityPos = 1 << i;
        int count = 0;
        
        for(int j = parityPos; j <= msgSize; j++) {
            if(j & parityPos) {
                if(received[j] == '1') {
                    count++;
                }
            }
        }
        
        if(count % 2) {
            errorPos += parityPos;
        }
    }
    
    // Print error status
    if(errorPos) {
        printf("Error detected at position %d\n", errorPos);
        // Correct the error
        received[errorPos] = (received[errorPos] == '0') ? '1' : '0';
        printf("Corrected message: ");
        for(int i = msgSize; i >= 1; i--) {
            printf("%c ", received[i]);
        }
        printf("\n");
    } else {
        printf("No error detected!\n");
    }
}

int main() {
    char data[MAX_SIZE];
    int dataSize;
    
    printf("Enter data size: ");
    scanf("%d", &dataSize);
    
    printf("Enter data bits: ");
    scanf("%s", data);
    
    encode(data, dataSize);
    
    return 0;
}