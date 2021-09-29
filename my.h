/*
** EPITECH PROJECT, 2021
** Test-Technique
** File description:
** my
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <cstring>

#ifndef MY_H_
#define MY_H_

void displayhelp();
int checknbpos(int nb, float nb2); // check nombr positif
int main (int ac, char ** arg);
int compartfloat(std::string Str); 
int checknbneg(int nb , float nb2); // check nombre négatif
int compartfloatneg(std::string Str);



#endif /* !MY_H_ */