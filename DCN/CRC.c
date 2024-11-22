#include <stdio.h>
#include <string.h>

void calculate_crc(char data[], char generator[], char crc[]) {
    int data_len = strlen(data);
    int gen_len = strlen(generator);
    char temp[100];

    // Copy data to temp and add 0s for division 
    strcpy(temp, data);
    for (int i = 0; i < gen_len - 1; i++) {
        temp[data_len + i] = '0';
    }
    temp[data_len + gen_len - 1] = '\0';  // Null-terminate the string
    for (int i = 0; i <= data_len - 1; i++) {
        if (temp[i] == '1') {  // Only divide when there's a '1'
            for (int j = 0; j < gen_len; j++) {
                temp[i + j] = temp[i + j] == generator[j] ? '0' : '1';  // XOR operation
            }
        }
    }

    // Copy the remainder from temp to crc
    strncpy(crc, temp + data_len, gen_len - 1);
    crc[gen_len - 1] = '\0';  // Null-terminate the remainder
}

int main() {
    char data[] = "1101011011";     
    char generator[] = "10011";           
    char crc[100];

    calculate_crc(data, generator, crc);

    printf("CRC Remainder: %s\n", crc);
    return 0;
}
