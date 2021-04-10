/** @file mymath.h
* @brief The function prototypes.
* @author Vaibhav Gaur
* @bug No bugs in this file
*/


#ifndef MYMATH_H
#define MYMATH_H
#include<stdio.h>

/**
* @brief This displayscore function displays the high score of the user by reading the score from the file.
* This is detailed description of displayscore function.
* @return void is used as this file doesn't return anything.
*/
void displayscore();


///@brief This help function helps the user if he want to know about the application.
///This is detailed description of help function.
///@return void is used as this file doesn't return anything.
void help();

/**
* @brief This writescore function is used to write the highscore of a user in a text file which is then saved in the system.
* This is detailed description of writescore function.
* @param score is the first float of the function.
* @param plnm is the first character type array of the function.
* @return void is used as this file doesn't return anything.
*/
void writescore(float score, char plnm[20]);


#endif

