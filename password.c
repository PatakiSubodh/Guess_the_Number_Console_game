#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define PASS_LEN 16

// function to generate a random character
char randomChar () {
    char charset [ ] = "qwertyuioplkjhgfdsazxcvbnmASDFGHJKLMNBVCXZQWERTYUIOP1234567890!@#$^&*";
    int size = strlen(charset);
    int index = rand( ) % size;
    return charset[index];
}

// strong password generator
// function to generate a strontg password
char * generatePassword () {
    static char password [PASS_LEN + 1];
    int i;
    for (i=0; i<PASS_LEN; i++) {
        password[i] = randomChar ();
    }
    password[PASS_LEN] = '\0';
    return password;
} 

// one special symbol, one upper case letter, one lower case letter
// function to generate a strontg password
char * generateSTRONGPassword () {
    static char password1[PASS_LEN + 1];
    int i;
    // set the first character to a lowercaseletter
    password1[0] = 'a' + (rand() % 26);
    // set the second character to a upper case letter
    password1[1] = 'A' + (rand() % 26);
    // set third character to a number password
    password1[2] = '0' + (rand() %10);
    // set the fourth character to a special symbol
    char special[ ] = "!@#$^&*";
    int specialSize = strlen(special);
    int specialIndex = rand() % specialSize;
    password1[3] = special[specialIndex];
    // fill the rest of thepassword with random characters
    for (i=4; i<PASS_LEN; i++) {
        password1[i] = randomChar();
    }  
    password1[PASS_LEN] = '\0';
    return password1;
}

int main () {
    srand(time(0));
    char * password = generatePassword();
    char * password1 = generateSTRONGPassword();
    printf("\n");
    printf("|------------------password generator------------------|\n");
    printf("|------------------------------------------------------|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|         your password is: %s           |\n", password);
    printf("|      your STRONG password is: %s       |\n", password1);
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|------------------------------------------------------|\n");
    printf("\n");
    return 0;
}