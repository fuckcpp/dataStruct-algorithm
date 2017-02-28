#pragma once
#include"macro.h"
#include"time.h"
#include"print.h"
#include"swap.h"
#include"insert_sort.h"
void qsort(int arr[], int low, int high);
void quick_sort(int arr[], int low, int high);
void qsort_with_insert_sort(int arr[], int low, int high, int key);
void quick_sort_with_insert_sort(int arr[], int low, int size);