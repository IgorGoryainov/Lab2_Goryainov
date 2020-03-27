#pragma once
#include<string>
#ifndef MATRIX_CHECK_FILEWORK
#define MATRIX_CHECK_FILEWORK

bool check_matric_input(int m, int n, int k);
bool check_matric_file_input(std::string file_name);
void load_matric_report(int flag_fail);
void task_matric_write(int num);

#endif