
/**
 * @file student.c
 * @author naresh (you@domain.com)
 * @brief included header files
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "student.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * @brief 
 * 
 */
struct Student
{
    int rollnumber; 
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;
    
    
}* head;
/**
 * @brief 
 * 
 * @param rollnumber 
 * @param name 
 * @param phone 
 * @param percentage 
 */

void insert(int rollnumber, char* name, char* phone, float percentage)///function to insert students
{   
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));///instalising memory using malloc function
    student->rollnumber = rollnumber;
    strcpy(student->name, name);///strcpy copies name of a student to user name variable
    
    strcpy(student->phone, phone);///strcpy copies phone of a student to user phone variable
    student->percentage = percentage;
    student->next = NULL;
    /**one object of student is created. 
     * Create new if needed.
     * 
     */
    if(head==NULL){
        /**if head is NULL
        set student as the new head*/
        head = student;
    }
    else{
        ///if list is not empty insert student in beginning of head
        student->next = head;
        head = student;///assigning student to head variabel
    }
    
}
/**
 * @brief 
 * 
 * @param rollnumber 
 */
void search(int rollnumber)///function to search student
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->rollnumber==rollnumber){
            printf("Roll Number: %d\n", temp->rollnumber);
            printf("Name: %s\n", temp->name);
            printf("Phone: %s\n", temp->phone);
            printf("Percentage: %0.4f\n", temp->percentage);
            return;
        }
        temp = temp->next;
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
}
/**
 * @brief 
 * 
 * @param rollnumber 
 */
void update(int rollnumber)///function to update student
{
    
    struct Student * temp = head;///while temp not equal to null
    while(temp!=NULL){///if temp rollnumber==rollnumber
        if(temp->rollnumber==rollnumber){
            printf("Record with roll number %d Found !!!\n", rollnumber);
            printf("Enter new name: ");
            scanf("%s", temp->name);
            printf("Enter new phone number: ");
            scanf("%s", temp->phone);
            printf("Enter new percentage: ");
            scanf("%f",&temp->percentage);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
    
}
/**
 * @brief 
 * 
 * @param rollnumber 
 */
void Delete(int rollnumber)///function to delete student
{
    struct Student * temp1 = head;
    struct Student * temp2 = head; 
    while(temp1!=NULL){
        
        if(temp1->rollnumber==rollnumber){
            
            printf("Record with roll number %d Found !!!\n", rollnumber);
            
            if(temp1==temp2){
                /**this condition will run if
                 *the record that we need to delete is the first node
                 *of the linked list
                 */
                head = head->next;
                free(temp1);
            }
            else{
                /** temp1 is the node we need to delete
                 * temp2 is the node previous to temp1*/
                temp2->next = temp1->next;
                free(temp1); 
            } 
            
            printf("Record Successfully Deleted !!!\n");
            return;
            
        }
        temp2 = temp1;
        temp1 = temp1->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
    
}
/**
 * @brief 
 * 
 */
void display()///function to display students
{
    struct Student * temp = head;
    while(temp!=NULL){
        
        printf("Roll Number: %d\n", temp->rollnumber);
        printf("Name: %s\n", temp->name);
        printf("Phone: %s\n", temp->phone);
        printf("Percentage: %0.4f\n\n", temp->percentage);
        temp = temp->next;
        
    }
}