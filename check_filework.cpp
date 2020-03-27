#include "func.h"
#include <fstream>
#include <sstream> 

bool check_console_input(long double x, long double e)
{
    bool flag = 0;
    if (e >= 1) flag = 1;
    return flag;
}

bool check_console_input(double x, double e)
{
    bool flag = 0;
    if (e >= 1) flag = 1;
    return flag;
}

bool check_console_input(float x, float e)
{
    bool flag = 0;
    if (e >= 1) flag = 1;
    return flag;
}


bool check_file_input(std::string file_name)
{
    bool flag = 0;
    std::ifstream ifs;
    ifs.open(file_name, std::ios::in);
    long double x, e;
    ifs >> x;
    ifs >> e;
    flag = check_console_input(x, e);
    ifs.close();
    return flag;
}

void load_report(int flag_fail)
{
    std::ofstream ofs;
    ofs.open("report.txt", std::ios::trunc);
    if (flag_fail != 1)
        ofs << "Input correct, task finished successfuly";
    else
        ofs << "Input incorrect, task fail";
}

void task_write(int num)
{
    std::ofstream ofs;
    std::ostringstream ostr;
    ostr << num;
    std::string str_num = ostr.str();
    std::string part_output = "output_";
    std::string part_input = "input_";
    std::string part_2 = ".txt";
    std::string output_name;
    output_name += part_output;
    output_name += str_num;
    output_name += part_2;
    std::string input_name;
    input_name += part_input;
    input_name += str_num;
    input_name += part_2;
    if (check_file_input(input_name) != 1)
    {
        long double x, e;
        std::ifstream ifs;
        ifs.open(input_name, std::ios::in);
        ifs >> x;
        ifs >> e;
        ifs.close();
        ofs.open(output_name, std::ios::trunc);
        long double* vallues = exp_func(x, e);
        ofs << "Approximate value: " << vallues[0] << std::endl << "Exact value: " << vallues[1] << std::endl << "Absolute error: " << vallues[2] << std::endl << "Relative error: " << vallues[3];
        ofs.close();
    }
    else
    {
        ofs.open(output_name, std::ios::trunc);
        ofs << "Incorrect input";
        ofs.close();
    }

}
