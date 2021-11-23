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
/**
 * @brief 
 * 
 * insert function declaration
 */
void search(int rollnumber);
/**
 * @brief search function declaration
 * 
 */
void update(int rollnumber);
/**
 * @brief update function declaration
 *  
 */
void Delete(int rollnumber);
/**
 * @brief delete function declaration
 * 
 */
void display();
/**
 * @brief display function declaration
 * 
 */
#endif 
/**
 * @brief ending #endif
 * 
 */