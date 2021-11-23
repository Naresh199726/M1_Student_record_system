/**
 * @file student.h
 * @author your name (you@domain.com)
 * @brief declration of all the functions
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef STUDENT_H 
#define STUDENT_H
void insert(int rollnumber, char* name, char* phone, float percentage);
/*insert function declaration*/
void search(int rollnumber);
/*search function declaration*/
void update(int rollnumber);
/*update function declaration*/
void Delete(int rollnumber);
/*delete function declaration*/
void display();
/* display function declaration*/
#endif 
/*ending #endif*/