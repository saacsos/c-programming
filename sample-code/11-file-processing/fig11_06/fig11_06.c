/*
 * Creating a sequential file
 * To compile:
 * $ gcc fig11_06.c -o fig11_06
*/
#include <stdio.h>

int main(void)
{
    FILE *cfPtr; // clients.txt file pointer

    // fopen opens file; exits program if file cannot be opened
    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
        puts("File could not be opened");
    } else { // read account, name and balance from file
        unsigned int account; // account number;
        char name[30]; // account name
        double balance; // account balance

        printf("%-10s|%-13s|%s\n", "Account", "Name", "Balance");

        // while not end of file
        while (!feof(cfPtr)) {
            if (fscanf(cfPtr, "%d%29s%lf", &account, name, &balance) != -1) {
                printf("%-10d|%-13s|%7.2lf\n", account, name, balance);
            }
        }

        fclose(cfPtr); // fclose closes the file
    }
}
