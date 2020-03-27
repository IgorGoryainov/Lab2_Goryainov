#include <iostream>
#include <cmath>
#include "func.h"
#include "check_filework.h"
#include "matrix_check_filework.h"
#include "matrix.h"
#include <fstream>
#include <sstream> 


int main()
{
	//Задача 1
	//Ввод данных с консоли, если нужно изменить тип данных, то заменяем все необходимые объвления
	long double e, x;
	std::cin >> x >> e;
    load_report(check_console_input(x, e)); //Создаем report о вводе данных с консоли
	long double* vallues;
	if (check_console_input(x, e) == 0)
	{
		vallues = exp_func(x, e);
		std::cout << "Approximate value: " << vallues[0] << std::endl << "Exact value: " << vallues[1] << std::endl;
		std::cout << "Absolute error: " << vallues[2] << std::endl << "Relative error: " << vallues[3];
	}
	else
		std::cout << "Incorrect input";

	std::cout << std::endl;

	//Работаем с файлами ("check_filework.h")
	for (int i = 1; i < 3; i++)
		task_write(i);

	//Задача 2
	//Ввод данных с консоли, если нужно изменить тип данных, то заменяем все необходимые объвления
	int m, n, k;
	std::cin >> m >> n >> k;
	load_matric_report(check_matric_input(m, n, k)); //Создаем report о вводе данных с консоли
	if (check_matric_input(m, n, k) != 1)
	{
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
				std::cin >> matric1[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < k; j++)
			{
				std::cin >> matric2[i][j];
			}
		}
		int** matric3 = get_matric(m, n, k, matric1, matric2);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < k; j++)
			{
				std::cout << matric3[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	else
		std::cout << "Incorrect input";

	//Работаем с файлами ("matrix_check_filework.h")
	for (int i = 1; i < 3; i++)
		task_matric_write(i);
	return 0;
}

