#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>

using namespace std;

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			cout << "� �������� ������ �������� ������ ������ ������ ��������� \n�� ���� ��������. ����� ��� �������� ��������.\n\n";
			char s[] = "������, ������ ����� � ��������, � ���� ����� ������ �������-�������\n\n";
			printf("%s\n", s);
			for (int i = 0; i < strlen(s); i++)
			{
				if (s[i] == '�')
					s[i] = ' ';
				int code = (int)s[i];
				s[i] = (char)code + 1;
			}
			printf("%s\n\n", s);
		}break;

		case 2:
		{
			cout << "� �������� ������ ��������� ���������� ������ ��������, \n�������� � ��� ������\n\n";
			char str[] = "It starts with one thing";
			printf("%s\n\n", str);
			int count = 0, countGeneral = 0;
			for (int i = 0; i < strlen(str); i++)
			{
				count = 0;
				for (int j = 0; j < strlen(str); j++)
				{
					if (str[i] == str[j] && j != i)
						count++;
				}
				if (count == 0)
				{
					countGeneral++;
					//printf("%c ", str[i]);
				}
			}
			printf("\n���-�� ���������� ��������: %d\n\n", countGeneral);
		}break;

		case 3:
		{
			//''''''''''''''''''''''''''''''''''''''''''''
			cout << "�� ���� ������� ���, ����� ����� �� �����, ������ ������ ���������, �� �� ����� ����� �� �����\n\n";
			cout << "� �������� ������ ����������� � �������� ������� ��� �����. \n������������� ���� ��������� �������\n\n";
			char str[] = "Was the one thing";
			printf("%s\n", str);
			int mas[10], j = 0;

			int lenght = strlen(str);
			char str2[50] = " ";
			for (int i = 0; i <= lenght; i++)
			{
				if (str[i] == ' ')
				{
					mas[j] = i;
					j++;
				}
			}
			int a = mas[j - 1];
			int b = 0;
			for (int i = 0; i <= lenght; i++)
			{
				while (str[a + 1] != '\0'&&str[a + 1] != ' ')
				{
					str2[b] = str[a + 1];
					a++;
					b++;

					//if (a == 3)break;
				}
				
				/*if (b == 17)
				{
					str2[b] = '\0';
				}
				break;*/
				str2[b] = ' ';
				b++;
				if (i == 0)
					j = 1;
				else
					j= j-1;

				a = mas[j];

				if (j < 0)
				{
					a = -1;
					/*str2[b] == str[a];
					b++;
					a++;*/
				}
			}
			printf("%s\n", str2);
		}break;

		case 4:
		{
			cout << "� �������� ������ ��������� ���������� ����, ���������� \n������ �������� ������� �����. ������������� ���� ��������� �������.\n\n";
			char str[] = "when you ������ ���� � want to �������� ���";
			printf("%s\n\n", str);
			int count = 0;
			for (int i = 0; i <= strlen(str); i++)
			{
				if (str[i] == ' ')
				{
					int code = (int)str[i + 1];
					if (code >= -32 && code <= -1)
						count++;
				}
				if (i == 0)
				{
					int code = (int)str[0];
					if (code >= -32 && code <= -1)
						count++;
				}
			}
			printf("� �������� ������ %d ����, ������� �������� ������ �������� ������� �����\n\n", count);
		}break;

		case 5:
		{
			cout << "���-�� ������ �� ������ ��� ���� �������\n";
			cout << "�� �������� ������ �������� ������ ����, �������� � ��� ������. \n������������� ���� ��������� �������.\n\n";
		}break;

		case 6:
		{
			cout << "��� ������ ��������. ����������, ������� ��������� �������� \n����������� � ���. ������� �� �� �����\n\n";
			char str[] = "It starts with one thing";
			printf("%s\n\n", str);
			int count = 0, countGeneral = 0;
			for (int i = 0; i < strlen(str); i++)
			{
				count = 0;
				for (int j = 0; j < strlen(str); j++)
				{
					if (str[i] == str[j] && j != i)
						count++;
				}
				if (count == 0)
				{
					countGeneral++;
					printf("%c ", str[i]);
				}
			}
			printf("\n���-�� ���������� ��������: %d\n\n", countGeneral);
		}break;

		case 7:
		{
			cout << "��� ������ ��������. ���������� ����� ������� ������������������ \n������ ������ ���� �.\n\n";
			char str[] = "������ ���� ���...������������";
			printf("%s\n", str);
			int count = 0, countA = 0;
			for (int i = 0; i < strlen(str); i++)
			{
				if (str[i] == '�')
					count++;
				if (str[i] != '�')
				{
					if (countA < count)
					{
						countA = count;
					}
					count = 0;
				}
			}
			printf("����� ������� ������������������ ������ ������ ��� � ���������� %d ���� �\n\n", countA);

		}break;

		case 8:
		{
			cout << "��� ������ ��������, ����� ������� ���� ������������� � " << endl
				<< "������������� ������. ������� �� ����� ������� ��������, " << endl
				<< "������������� ������ ���� ������.\n\n";
			char str[] = "��� ������ �������� (�����-�� �����) ���";
			printf("%s\n\n", str);
			int start, end;
			for (int i = 0; i <= strlen(str); i++)
			{
				if (str[i] == '(')
					start = i + 1;
				if (str[i] == ')')
					end = i - 1;
			}
			printf("����� ������ ������: ");
			for (int i = start; i <= end; i++)
				printf("%c", str[i]);
			printf("\n\n");
		}break;

		case 9:
		{
			cout << "��� ������ ��������, ���������� �����. ���������� ����������" << endl
				<< "��������� �������� � ��������� ���� � ������ ����� �������� � ���.\n\n";
			char str[] = "The Colors Conflicted, As The Flames Climbed Into The Clouds";
			printf("%s\n", str);
			int countA = 0, countSpace = 0;
			int lenght = strlen(str);
			for (int i = 0; i < strlen(str); i++)
			{
				int code = (int)str[i];
				if (code >= 65 && code <= 90)
					countA++;
				if (str[i] == ' ')
					countSpace++;
			}
			int percentA = 100 * countA / (lenght - countSpace);
			printf("��������� - %d ���������, �������� - %d\n\n", percentA, 100 - percentA);
		}break;

		case 10:
		{
			cout << "��� ������ ��������, ����� ������� ���� ���� ������������� � ����" << endl
				<< "������������� ������. ������� �� ����� ��� �������, ������������� " << endl
				<< "������ ���� ������\n\n";
			char str[] = "��� ������ �������� (�����-�� ������ �����) ���";
			printf("%s\n\n", str);
			int start, end;
			for (int i = 0; i <= strlen(str); i++)
			{
				if (str[i] == '(')
					start = i + 1;
				if (str[i] == ')')
					end = i - 1;
			}
			printf("����� ������ ������: ");
			for (int i = start; i <= end; i++)
				printf("%c", str[i]);
			printf("\n\n");
		}break;
		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}