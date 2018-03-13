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
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			cout << "В заданной строке заменить каждый символ строки следующим \nпо коду символом. Букву «я» заменить пробелом.\n\n";
			char s[] = "привет, сейчас буква я исчезнет, и весь текст станет калякой-малякой\n\n";
			printf("%s\n", s);
			for (int i = 0; i < strlen(s); i++)
			{
				if (s[i] == 'я')
					s[i] = ' ';
				int code = (int)s[i];
				s[i] = (char)code + 1;
			}
			printf("%s\n\n", s);
		}break;

		case 2:
		{
			cout << "В заданной строке посчитать количество разных символов, \nвходящих в эту строку\n\n";
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
			printf("\nкол-во уникальных символов: %d\n\n", countGeneral);
		}break;

		case 3:
		{
			//''''''''''''''''''''''''''''''''''''''''''''
			cout << "не могу сдалать так, чтобы вышел из цикла, второй массив заполняет, но не может выйти из цикла\n\n";
			cout << "В заданной строке расположить в обратном порядке все слова. \nРазделителями слов считаются пробелы\n\n";
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
			cout << "В заданной строке посчитать количество слов, содержащих \nтолько строчные русские буквы. Разделителями слов считаются пробелы.\n\n";
			char str[] = "when you знаешь англ и want to показать это";
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
			printf("в заданной строке %d слов, которые содержат только строчные русские буквы\n\n", count);
		}break;

		case 5:
		{
			cout << "что-то вообще не поняла что надо сделать\n";
			cout << "По заданной строке получить массив слов, входящих в эту строку. \nРазделителями слов считаются пробелы.\n\n";
		}break;

		case 6:
		{
			cout << "Дан массив символов. Подсчитать, сколько различных символов \nвстречается в нем. Вывести их на экран\n\n";
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
			printf("\nкол-во уникальных символов: %d\n\n", countGeneral);
		}break;

		case 7:
		{
			cout << "Дан массив символов. Подсчитать самую длинную последовательность \nподряд идущих букв а.\n\n";
			char str[] = "рааааз дваа три...двааааадцать";
			printf("%s\n", str);
			int count = 0, countA = 0;
			for (int i = 0; i < strlen(str); i++)
			{
				if (str[i] == 'а')
					count++;
				if (str[i] != 'а')
				{
					if (countA < count)
					{
						countA = count;
					}
					count = 0;
				}
			}
			printf("самая длинная последовательность подряд идущих бук а составляет %d букв а\n\n", countA);

		}break;

		case 8:
		{
			cout << "Дан массив символов, среди которых есть открывающиеся и " << endl
				<< "закрывающиеся скобки. Вывести на экран массивы символов, " << endl
				<< "расположенные внутри этих скобок.\n\n";
			char str[] = "дан массив символов (какой-то текст) итд";
			printf("%s\n\n", str);
			int start, end;
			for (int i = 0; i <= strlen(str); i++)
			{
				if (str[i] == '(')
					start = i + 1;
				if (str[i] == ')')
					end = i - 1;
			}
			printf("текст внутри скобок: ");
			for (int i = start; i <= end; i++)
				printf("%c", str[i]);
			printf("\n\n");
		}break;

		case 9:
		{
			cout << "Дан массив символов, содержащий текст. Определить процентное" << endl
				<< "отношение строчных и прописных букв к общему числу символов в нем.\n\n";
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
			printf("Прописных - %d процентов, строчных - %d\n\n", percentA, 100 - percentA);
		}break;

		case 10:
		{
			cout << "Дан массив символов, среди которых есть одна открывающаяся и одна" << endl
				<< "закрывающаяся скобка. Вывести на экран все символы, расположенные " << endl
				<< "внутри этих скобок\n\n";
			char str[] = "дан массив символов (какой-то другой текст) итд";
			printf("%s\n\n", str);
			int start, end;
			for (int i = 0; i <= strlen(str); i++)
			{
				if (str[i] == '(')
					start = i + 1;
				if (str[i] == ')')
					end = i - 1;
			}
			printf("текст внутри скобок: ");
			for (int i = start; i <= end; i++)
				printf("%c", str[i]);
			printf("\n\n");
		}break;
		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}