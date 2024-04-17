#pragma once
#include"stdafx.h"
#include"Constants.h"

int maxValue(const int arr[], const int n);
double maxValue(const double arr[], const int n);
char maxValue(const char arr[], const int n);

int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS);
