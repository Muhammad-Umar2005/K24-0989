#include<stdio.h>
int main() {
    char character,encrypted_character,decrypted_character;
    int key;

    printf("Enter a character to encrypt/decrypt: ");
    scanf(" %c", &character);

    printf("Enter a key (integer value): ");
    scanf(" %d", &key);

    printf("\nEncryption:\n");

   encrypted_character = character ^ key;
    printf("Encrypted character: %c\n", encrypted_character);

    printf("\nDecryption:\n");

    decrypted_character = encrypted_character ^ key;
    printf("Decrypted character: %c\n", decrypted_character);

    return 0;
}