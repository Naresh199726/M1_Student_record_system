/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief included header files
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include "student.h"
#include "student.c"

int main()
{
    head = NULL;
    int choice;
    char name[100];
    char phone[100];
    int rollnumber;
    float percentage;
    printf("1 to insert student details\n2 to search for student details\n3 to delete student details\n4 to update student details\n5 to display all student details\n6 exit");
    do
    { 
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice) /*enter your choise for the reqired task */
        {
            
            case 1:
                printf("Enter roll number: ");
                scanf("%d", &rollnumber);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone number: ");
                scanf("%s", phone);
                printf("Enter percentage: ");
                scanf("%f", &percentage);
                insert(rollnumber, name, phone, percentage);
                break;
            case 2:
                printf("Enter roll number to search: ");
                scanf("%d", &rollnumber);
                search(rollnumber);
                break;
            case 3:
                printf("Enter roll number to delete: ");
                scanf("%d", &rollnumber);
                Delete(rollnumber);
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &rollnumber);
                update(rollnumber);
                break;
            case 5:
                display();
                break;
            case 6:
                printf("exit");
                exit(0);
                break;
        }
        
    } while (choice != 0); /*when choise is not equal to zero*/
}