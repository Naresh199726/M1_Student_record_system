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
/**
 * @brief 
 * 
 * @param rollnumber 
 * @param name 
 * @param phone 
 * @param percentage 
 */
void insert(int rollnumber, char* name, char* phone, float percentage);///insert function declaration
/**
 * @brief add student into the data base
 * 
 * @param rollnumber 
 */
void search(int rollnumber);///search function declaration
/**
 * @brief serche for the student
 * 
 * @param rollnumber 
 */
void update(int rollnumber);///update function declaration*/
/**
 * @brief upadte student detiles
 * 
 * @param rollnumber 
 */
void Delete(int rollnumber);///delete function declaration
/**
 * @brief displaying the student infremation
 * 
 */
void display();/// display function declaration
#endif ///ending #endif