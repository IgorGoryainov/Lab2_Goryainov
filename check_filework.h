#pragma once
#include<string>
#ifndef CHECK_FILEWORK
#define CHECK_FILEWORK

bool check_console_input(long double x, long double e);
bool check_file_input(std::string file_name);
void load_report(int flag_fail);
void task_write(int num);

#endif