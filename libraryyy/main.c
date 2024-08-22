/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user
{
    char name[50];
    int age;
    char place[50];
    char username[50];
    int password;
};

struct book
{
    char name[50];
    char author[50];
    float price;
};

int main()
{
    struct user u[100];
    struct book b[100];

    int i, choice, n, j = 0, adminchoice, bookno, k, userChoice, user, d = 1, f1=0,found = 0, y, userindex, p;
    char arr[2][50] = {"admin", "0000"};
    char username[50];
    char password[50];
    int user_password; 

    do
    {
    x:
        printf("Main Menu:\n");
        printf("1. Admin\n");
        printf("2. User\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter username: ");
            scanf("%s", username);
            printf("Enter admin password: ");
            scanf("%s", password);
            if (strcmp(arr[0], username) == 0 && strcmp(arr[1], password) == 0)
            {
                printf("Login successful\n");
                int choice;
                char choice2[100];
                while (1)
                {
                y:
                    printf("Admin Menu:\n");
                    printf("1. Add Book\n");
                    printf("2. Display Books\n");
                    printf("3. Update Book\n");
                    printf("4. Delete Book\n");
                    printf("5. Exit\n");
                    printf("Enter your choice: \n");
                    scanf("%d", &choice);
                    switch (choice)
                    {
                    case 1:
                    z:
                        printf("Enter book name:\n ");
                        scanf("%s", b[j].name);
                        for (p = 0; p < j; p++)
                        {
                            if (strcmp(b[j].name, b[p].name) == 0)
                            {
                                printf("Book already exists. Enter another book details.\n");
                                goto z;
                            }
                        }
                        printf("Enter book author:\n ");
                        scanf("%s", b[j].author);
                        printf("Enter book price:\n ");
                        scanf("%f", &b[j].price);
                        j++;
                        printf("Book added successfully\n");
                        break;  

                    case 2:
                        printf("Books\n");
                        for (int i = 0; i < j; i++)
                        {
                            printf("Name: %s\n", b[i].name);
                            printf("Author: %s\n", b[i].author);
                            printf("Price: %.2f\n", b[i].price);
                        }
                        break;

                    case 3:
                    float amount;
                        printf("Enter the book to update: ");
                        scanf("%s", choice2);
                        printf("Enter the new price: ");
                        scanf("%f", &amount);
                        for (i = 0; i < j; i++)
                        {
                            if (strcmp(choice2, b[i].name) == 0)
                            {
                                b[i].price = amount;
                                printf("Updated successfully\n");
                                goto y;
                            }
                        }
                        break; 

                    case 4:
                        printf("Enter the book name to delete: \n");
                        scanf("%s", choice2);
                        for (i = 0; i < j; i++)
                        {
                            if (strcmp(choice2, b[i].name) == 0)
                            {
                                for (k = i; k < j - 1; k++)
                                {
                                    b[k] = b[k + 1];
                                }
                                j--;
                                printf("Deleted Successfully \n");
                                break;
                            }
                        }
                        break;

                    case 5:
                        goto x;

                    default:
                        printf("Invalid option!\n");
                    }
                }
            }
            else
            {
                printf("Invalid username or password!\n");
            }
            break;

        case 2:
        d:
            printf("\nUser Menu:\n");
            printf("1. Register\n");
            printf("2. Login\n");
            printf("3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &userChoice);

            switch (userChoice)
            {
            case 1:
                printf("Enter name: ");
                scanf("%s", u[d].name);
                printf("Enter age: ");
                scanf("%d", &u[d].age);
                printf("Enter place: ");
                scanf("%s", u[d].place);
                printf("Enter username: ");
                
                g:
                f1=0;
                scanf("%s", u[d].username);
                 for(int j=0;j<d;j++)
                 {
                 if (strcmp(u[d].username,u[j].username)==0)
                 {
                     f1=1;
                     
                 }
                 }
                 if(f1==1){
                  printf("Invalid\n");
                    printf("New name: ");
               goto g;
                 
                 }
        
                
                printf("Enter password: ");
                scanf("%d", &u[d].password);
                printf("User registered successfully!\n");

                d++;
                goto d;

            case 2:
                printf("Enter username: ");
                scanf("%s", username);
                printf("Enter password: ");
                scanf("%d", &user_password);

                for (int y = 1; y < d; y++)
                {
                    if (strcmp(u[y].username, username) == 0 && u[y].password == user_password)
                    {
                        int choice3;
                        while (1)
                        {
                            printf("User Menu\n");
                            printf("1. Display books\n");
                            printf("2. Search books\n");
                            printf("3. Exit\n");
                            printf("Enter a choice: ");
                            scanf("%d", &choice3);

                            switch (choice3)
                            {
                            case 1:
                                for (int l = 0; l < j; l++)
                                {
                                    printf("Book name: %s\n", b[l].name);
                                    printf("Author name: %s\n", b[l].author);
                                    printf("Price: %.2f\n", b[l].price);
                                }
                                break;

                            case 2:
                                {
                                    char choice4[100];
                                    printf("Enter the book name: ");
                                    scanf("%s", choice4);
                                    for (int y = 0; y < j; y++)
                                    {
                                        if (strcmp(choice4, b[y].name) == 0)
                                        {
                                            printf("Book name: %s\n", b[y].name);
                                            printf("Author name: %s\n", b[y].author);
                                            printf("Price: %.2f\n", b[y].price);
                                        }
                                    }
                                    break;
                                }

                            case 3:
                                goto d;

                            default:
                                printf("Invalid option\n");
                            }
                        }
                    }
                }
                printf("Invalid username or password!\n");
                goto d;

            case 3:
                goto x;

            default:
                printf("Invalid option\n");
            }
            break;

        case 3:
            printf("Exit\n");
            break;

        default:
            printf("Invalid option\n");
        }
    } while (choice != 3);

    return 0;
}