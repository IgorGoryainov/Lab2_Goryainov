#include <fstream>
#include <sstream> 
#include "matrix.h"

bool check_matric_input(int m, int n, int k)
{
    bool flag = 0;
    if ((m < 1) || (n < 1) || (k < 1)) flag = 1;
    return flag;
}

bool check_matric_file_input(std::string file_name)
{
    bool flag = 0;
    std::ifstream ifs;
    ifs.open(file_name, std::ios::in);
    int m, n, k;
    ifs >> m;
    ifs >> n;
    ifs >> k;
    flag = check_matric_input(m, n, k);
    ifs.close();
    return flag;
}

void load_matric_report(int flag_fail)
{
    std::ofstream ofs;
    ofs.open("matric_report.txt", std::ios::trunc);
    if (flag_fail != 1)
        ofs << "Input correct, task finished successfuly";
    else
        ofs << "Input incorrect, task fail";
}

void task_matric_write(int num)
{
    std::ofstream ofs;
    std::ostringstream ostr;
    ostr << num;
    std::string str_num = ostr.str();
    std::string part_output = "matric_output_";
    std::string part_input = "matric_input_";
    std::string part_2 = ".txt";
    std::string output_name;
    output_name += part_output;
    output_name += str_num;
    output_name += part_2;
    std::string input_name;
    input_name += part_input;
    input_name += str_num;
    input_name += part_2;
    if (check_matric_file_input(input_name) != 1)
    {
        int m, n, k;
        std::ifstream ifs;
        ifs.open(input_name, std::ios::in);
        ifs >> m >> n >> k;
        int** matric1 = new int* [m];
        for (int i = 0; i < m; i++)
            matric1[i] = new int[n];
        int** matric2 = new int* [n];
        for (int i = 0; i < n; i++)
            matric2[i] = new int[k];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ifs >> matric1[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                ifs >> matric2[i][j];
            }
        }
        ifs.close();
        ofs.open(output_name, std::ios::trunc);
        int** matric3 = get_matric(m, n, k, matric1, matric2);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < k; j++)
            {
                ofs << matric3[i][j] << " ";
            }
            ofs << std::endl;
        }
        ofs.close();
    }
    else
    {
        ofs.open(output_name, std::ios::trunc);
        ofs << "Incorrect input";
        ofs.close();
    }

}