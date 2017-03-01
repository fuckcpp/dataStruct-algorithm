#pragma once
#include"time.h"
#include"print.h"
#include"swap.h"
const int& compare(int arr[], int size, const int &i, const int &j);
void adjust_heap_recur(int arr[], int size, int i);
void adjust_heap_while(int arr[], int size, int i);
void create_heap(int arr[],int size);
void heap_sort(int arr[], int size);