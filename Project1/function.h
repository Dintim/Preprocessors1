#include <ctime>
#include <iostream>
#include <cstdlib>

#define MY_INTEGER
#define MY_DOUBLE
#define MY_CHAR


using namespace std;
#ifndef _MY_FUNCTION_
#define _MY_FUNCTION_


#ifdef MY_INTEGER
void fill_array(int* arr, int n);
void print_array(int* arr, int n);
void min_array(int* arr, int n);
void max_array(int* arr, int n);
void sort_array(int* arr, int n);
void edit_array(int* arr, int n, int id);
#define printInt print_array
#define fillInt fill_array
#endif

#ifdef MY_DOUBLE
void fill_array(double* arr, int n);
void print_array(double* arr, int n);
void min_array(double* arr, int n);
void max_array(double* arr, int n);
void sort_array(double* arr, int n);
void edit_array(double* arr, int n, int id);
#define printDouble print_array
#define fillDouble fill_array 
#endif

#ifdef MY_CHAR
void fill_array(char* arr, int n);
void print_array(char* arr, int n);
void min_array(char* arr, int n);
void max_array(char* arr, int n);
void sort_array(char* arr, int n);
void edit_array(char* arr, int n, int id);
#define printChar print_array 
#define fillChar fill_array 
#endif

#endif
#pragma once
