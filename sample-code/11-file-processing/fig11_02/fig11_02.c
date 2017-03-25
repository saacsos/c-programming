/*
 * Creating a sequential file
 * To compile:
 * $ gcc fig11_02.c -o fig11_02
*/
#include <stdio.h>

int main(void)
{
    FILE *cfPtr; // cfPtr is clients.txt file pointer

    // fopen opens file. Exit program if unable to create file
    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("File could not be opened");
    } else {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end intput.");

        unsigned int account; // account number
        char name[30]; // account name
        double balance; // account balance

        printf("%s", "? ");
        scanf("%d%29s%lf", &account, name, &balance);

        // write account, name and balance into file with fprintf
        while (!feof(stdin)) {
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("%s", "? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr); // fclose closes file
    }
}

/* Input Example 
100 Jones 24.98
200 Doe 345.67
300 White 0.00
400 Stone -42.16
500 Rich 224.62
^Z
*/
