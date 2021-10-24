#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdio>
#include <time.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	//Задание 1
	/*const int N = 2303;
	const char* path1 = "F:\\File1.txt";
	const char* path2 = "F:\\File2.txt";
	FILE* out1 = fopen(path1, "rt");
	FILE* out2 = fopen(path2, "rt");
	if ((fopen_s(&out1, path1, "r")) != NULL && (fopen_s(&out2, path2, "r")) != NULL)
		cout << "Не удалось создать файл\n";
	else
	{
		char* str1 = new char[N];
		char* str2 = new char[N];
		while (!feof(out1) || !feof(out2))
		{
			fgets(str1, N, out1);			
			fgets(str2, N, out2);
			if (strcmp(str1, str2))
			{
				cout << "Несовпадающие строки " << str1 << "\n";
				cout << "Несовпадающие строки " << str2 << "\n";
			}
		}
		if (fclose(out1) == EOF || fclose(out2) == EOF)
		{
			cout << "Файл не закрыт" << "\n";
		}
		else
		{
			cout << "Файл закрыт" << "\n";
		}
	}*/

	//Задание 2
	/*const char* path1 = "F:\\fstr1.txt";
	const char* path2 = "F:\\fstr2.txt";
	int c;
	int count = 0;
	int count2 = 0;
	int num = 0;
	int len = 0, cnt = 0;
	FILE* out1 = fopen(path1, "rt");
	FILE* out2 = fopen(path1, "rt");
	if (fopen_s(&out1, path1, "r") != NULL)
		cout << "The file cannot be opened";
	else
	{
		if ((fopen_s(&out2, path2, "w")) != NULL)
			cout << "The file could not be created";
		else
		{

			while (!feof(out1))
			{
				c = fgetc(out1);
				if (c == '\n')
				{
					cnt++;
				}
				else
				{
					len++;
				}
				if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
				{
					count++;
				}
				if (c == 'B' || c == 'C' || c == 'D' || c == 'F' || c == 'G' || c == 'H' || c == 'J' || c == 'L' || c == 'K' || c == 'M' || c == 'N' || c == 'P' || c == 'Q' || c == 'R' || c == 'S' || c == 'T' || c == 'V' || c == 'W' || c == 'X' || c == 'Z' || c == 'b' || c == 'c' || c == 'd' || c == 'f' || c == 'g' || c == 'h' || c == 'j' || c == 'l' || c == 'k' || c == 'm' || c == 'n' || c == 'p' || c == 'q' || c == 'r' || c == 's' || c == 't' || c == 'v' || c == 'w' || c == 'x' || c == 'z')
				{
					count2++;
				}
				if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
				{
					num++;
				}
			}


			fprintf(out2, "%s", "Кол-во строк ");
			fprintf(out2, "%1d", cnt + 1);
			fprintf(out2, "%s", "\n");

			if (len)
			{
				fprintf(out2, "%s", "Кол-во символов ");
				fprintf(out2, "%1d", len - 1);

			}

			fprintf(out2, "%s", "\n");
			fprintf(out2, "%s", "Кол-во согласных ");
			fprintf(out2, "%1d", count2);
			fprintf(out2, "%s", "\n");

			fprintf(out2, "%s", "Кол-во гласных ");
			fprintf(out2, "%1d", count);
			fprintf(out2, "%s", "\n");

			fprintf(out2, "%s", "Кол-во цыфр ");
			fprintf(out2, "%1d", num);
			fprintf(out2, "%s", "\n");

			if (fclose(out1) == EOF || fclose(out2) == EOF)
			{
				cout << "Файл не закрыт" << "\n";
			}
			else
			{
				cout << "Файл закрыт" << "\n";
			}
		}
	}*/

	//Задание 3
	/*const char* path1 = "F:\\File.txt";
	const char* path2 = "F:\\Shifr.txt";
	char c;
	char t;
	FILE* out1 = fopen(path1, "rt");
	FILE* out2 = fopen(path2, "w");
	if (fopen_s(&out1, path1, "r") != NULL && fopen_s(&out2, path2, "w") != NULL)
		cout << "The file cannot be opened";
	else
	{
		while (!feof(out1))
		{
			c = fgetc(out1);
			if (c == 'A')
			{
				t = 'D';
			}

			if (c == 'B')
			{
				t = 'E';
			}

			if (c == 'C')
			{
				t = 'F';
			}

			if (c == 'D')
			{
				t = 'G';
			}

			if (c == 'E')
			{
				t = 'H';
			}

			if (c == 'F')
			{
				t = 'I';
			}

			if (c == 'G')
			{
				t = 'J';
			}

			if (c == 'H')
			{
				t = 'K';
			}

			if (c == 'I')
			{
				t = 'L';
			}

			if (c == 'J')
			{
				t = 'M';
			}

			if (c == 'K')
			{
				t = 'N';
			}

			if (c == 'L')
			{
				t = 'O';
			}

			if (c == 'M')
			{
				t = 'P';
			}

			if (c == 'N')
			{
				t = 'Q';
			}

			if (c == 'O')
			{
				t = 'R';
			}

			if (c == 'P')
			{
				t = 'S';
			}

			if (c == 'Q')
			{
				t = 'T';
			}

			if (c == 'R')
			{
				t = 'U';
			}

			if (c == 'S')
			{
				t = 'V';
			}

			if (c == 'T')
			{
				t = 'W';
			}

			if (c == 'U')
			{
				t = 'X';
			}

			if (c == 'V')
			{
				t = 'Y';
			}

			if (c == 'W')
			{
				t = 'Z';
			}

			if (c == 'X')
			{
				t = 'A';
			}

			if (c == 'Y')
			{
				t = 'B';
			}

			if (c == 'Z')
			{
				t = 'C';
			}
			fprintf(out2, "%c", t);
		}

	}*/

	return 0;
}