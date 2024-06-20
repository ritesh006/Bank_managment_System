#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int uintll;
char option;

typedef struct bank_data
{
    char name[120]; /*user name*/
    uintll mobile_no;
    uintll accout_no;   /*unique identity fot account number combination of number*/
    uintll aadhar_no;   /*unique identity combination of number*/
    char user_name[20]; /*for user name which is a uniqe for every user combination int char*/
    char email[20];
    uintll password;
    struct bank_data *next_user;

} accout;

accout *head = NULL;

void create_new_account(void)
{
    accout *new_user = malloc(sizeof(accout));
    printf("Enter you name: ");
    scanf("%[^\n]", new_user->name);

    new_user = *head;
    head = new_user;

}

// void log_in();
// void deposite_money(void);
// void withdraw_money(void);
// void check_bank_balance(void);

int main(int argc, char const *argv[])
{
    

    while (1)
    {
        printf("Welcome To Our larning Bank\n");
        printf("Selct a Service;");
        printf("1: Creat New Account.\n");
        printf("2: Log in.\n");
        printf("3. Deposite Money.\n");
        printf("4. Withdraw Money.\n");
        printf("5. Check Bank Balance.\n");
        printf("6. Exit\n");

        scanf("%c", &option);

        switch (option)
        {
        case '1':
            create_new_account();
            break;

        // case '2':
        //     log_in();
        //     break;

        // case '3':
        //     deposite_money();
        //     break;
        // case '4':
        //     withdraw_money();
        //     break;
        // case '5':
        //     check_bank_balance();
            break;
        case '6':
            exit(1);

        default:
            printf("Wrong Option Selected try again");
            break;
        }
    }

    return 0;
}
