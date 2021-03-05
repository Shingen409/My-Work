#include<iostream>
#include<ctime>
using std::cout;
using std::cin;
#define delimeter "\n--------------------------------------------------------------------------------------------------\n"
 using namespace std;
  /*#define MAGAZIN*/
  /*#define PRIMER*/
  /*#define IFELSE*/
  /*#define KALKULATOR*/
  /*#define PALINDROM*/
 /* #define ARRAYS*/
  #define FOR
  /*#define DECIMAL*/
  /*#define MATRIX*/
 /* #define SIRIUS*/

 void main()
 {
	 setlocale(LC_ALL, "Russian");


#ifdef MAGAZIN



	 ////Практическая работа: типы данных и переменные.


	 float money;

	 cout << "Введите валюту"; cin >> money;
	 int rubl = money;
	 int copeyka = (money - rubl) * 100;
	 cout << money << " это " << rubl << " руб " << copeyka << " коп ";

	 //double price_tetradi;
	 //int koll_tetadi;
	 //double price_karandash;
	 //int koll_karandash;
	 //cout << "Введите стоимость тетради: "; cin >> price_tetradi;
	 //cout << "Введите количество тетрадей: "; cin >> koll_tetadi;
	 //double all_tetradi = price_tetradi * koll_tetadi;
	 //cout << "Введите стоиость карандаша: "; cin >> price_karandash;
	 //cout << "Введите количество карандашей: "; cin >> koll_karandash
	 //double all_karandash = price_karandash * koll_karandash;
	 //double itogo = all_tetradi + all_karandash;
	 //cout << "С вас: " << itogo << "Руб" << endl;

	 double price_tetradi;
	 double price_obloshki;
	 int number;
	 cout << "Введите цену тетради: "; cin >> price_tetradi;
	 cout << "Введите цену обложки: "; cin >> price_obloshki;
	 cout << "Введите количество комплектов: "; cin >> number;
	 double total_price = (price_tetradi + price_obloshki) * number;
	 cout << "С вас: " << total_price << "Руб" << endl;

#endif MAGAZIN

#ifdef PRIMER
	 int i = 3;
	 i = ++i + ++i;
	 cout << i << endl;//=10


	 int i = 3;
	 i = i++ + ++i;
	 cout << i << endl;//=9

	 int i = 3;
	 i = i++ + 1 + ++i * 2;
	 cout << i << endl;//=14

	 int i = 3;
	 i = i++ + 1 + (++i *= 2);
	 cout << i << endl;//=18


	 int i = 3;
	 i += i++ + 1 + (++i *= 2);
	 cout << i << endl;//26

#endif  PRIMER

#ifdef  IFELSE

/*1. ВЫУЧИТЬ ВСЮ ТЕОРИЮ : типы данных, операторы !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*
2. Написать программу, которая по температуре воздуха определяет, на улице тепло, или холодно.
	Температуру воздуха, пользователь вводит с клавиатуры;

3. Пользователь вводит число с клавиатуры.
	Если это число лежит в промежутке от 0 до 10,
	то программа говорит : "Цель поражена", в противном случае - "Вы промахнулись (Firefox)".

4. Написать программу для тестирования, которая задает ползователю 5 вопросов,
	по 4 варианта ответов на каждый, варианты ответов обозначены буквами ABCD.
	Пользователь вводит букву, соответсвующую правильному на его взгляд варианту,
	после чего, программа говорит ответ правильный, или нет.В конце, программа выводит количество правильных ответов.*/




	//Температура воздуха

/*int temperatura;
cout << "Введите температуру :"; cin>> temperatura;
if (temperatura >= 100)
{
	cout << "На улице апокалипсис :";
}
else if (temperatura >= 30)
{
	cout << "На улице жарко :";

}
else if (temperatura >= 20)
{
	cout << "На улице тепло :";
}
else if (temperatura >= 14)
{
	cout << "На улице прохладно :";
}
else
{
	cout << "На улице холодно :";
}*/


//Число в промежутке от 0 до 10


/*int chislo;
cout << "Введите число :"; cin >> chislo;

if (chislo >=0 && chislo <=10)
{
	cout << "Вы попали";
}
else
{
	cout << "Вы промохнулись;";
}*/


// Написать программу для тестирования, которая задает ползователю 5 вопросов,


//int Coll_Otvetov=0;
//char otvet;

//cout << "Вас приветствует программа тестирования по игре league of legends:" << endl;
//system("pause");
//system("CLS");

//cout << "1) ВОПРОС Какая основная характеристика ясуо ?" << endl; 
//cout << "A-Сила" << endl;
//cout << "B-фид" << endl;
//cout << "C-Скорость атаки" << endl;
//cout << "D-Беблейд" << endl;
//cout << "Ваш ответ: " << endl; cin >> otvet;

//system("CLS");

//if (otvet == 'C' || otvet=='c')
//{
   // Coll_Otvetov++;
   //cout << "Правильно!: Количество правельных ответов:= " << Coll_Otvetov <<endl;
   //

//}
//else
//{
   //cout << "Ответ не верный((" << endl;
//}
// system("pause");
// system("CLS");


//cout << "2) ВОПРОС Какой самый лучший саппорт в лиге ?" << endl;
//cout << "A-Ёне" << endl;
//cout << "B-Нами" << endl;
//cout << "C-Моргана" << endl;
//cout << "D-Жанна" << endl;

//cout << "Ваш ответ: " << endl; cin >> otvet;

//
//system("CLS");

//if (otvet == 'D' || otvet == 'd')
//{
   // Coll_Otvetov++;
   // cout << "Правильно!: Количество правельных ответов:= " << Coll_Otvetov << endl;
   //
//}
//else
//{
   // cout << "Ответ не верный((" << endl;
//}
// system("pause");
// system("CLS");
// cout << "3) ВОПРОС какой самый противный мидер ?" << endl;
// cout << "A-Физз" << endl;
// cout << "B-Орианна" << endl;
// cout << "C-Моргана" << endl;
// cout << "D-Талон" << endl;

// cout << "Ваш ответ: " << endl; cin >> otvet;

// system("CLS");

// if (otvet == 'A' || otvet == 'a')
// {
   //  Coll_Otvetov++;
   //  cout << "Правильно!: Количество правельных ответов:= " << Coll_Otvetov << endl;
// }
// else
// {
   //  cout << "Ответ не верный((" << endl;
// }
// system("pause");
// system("CLS");
// cout << "4) ВОПРОС Какой предмет контрит Зеда ?" << endl;
// cout << "A-Призвание палача" << endl;
// cout << "B-Песочные часы Жони" << endl;
// cout << "C-Буря Людена" << endl;
// cout << "D-Грань бесконечности" << endl;

// cout << "Ваш ответ: " << endl; cin >> otvet;

// system("CLS");

// if (otvet == 'B' || otvet == 'b')
// {
   //  Coll_Otvetov++;
   //  cout << "Правильно!: Количество правельных ответов:= " << Coll_Otvetov << endl;
// }
// else
// {
   //  cout << "Ответ не верный((" << endl;
// }
// system("pause");
// system("CLS");
// cout << "5) ВОПРОС Что делать если проигрываешь линию ?" << endl;
// cout << "A-Репортить Лес" << endl;
// cout << "B-Написать в чат ff15" << endl;
// cout << "C-поджаться и играть аккуратнее" << endl;
// cout << "D-Ливнуть" << endl;

// cout << "Ваш ответ: " << endl; cin >> otvet;

// system("CLS");

// if (otvet == 'C' || otvet == 'c')
// {
   //  Coll_Otvetov++;
   //  cout << "Правильно!: Количество правельных ответов:= " << Coll_Otvetov << endl;
// }
// else
// {
   //  cout << "Ответ не верный((" << endl;
// }
// system("pause");
// system("CLS");

// cout << "Тестирование завершено" << endl;


// if (Coll_Otvetov == 5)
// {
   //  cout << "Вы гений игры, Челенджер 1000 птс игрок" << endl;
// }
// else if (Coll_Otvetov == 4)
// {
   //  cout << "Вы хорошо разбираетесть в игре" << endl;
// }
// else if (Coll_Otvetov == 3)
// {
   //  cout << "Вы средне разбираетесь в игре " << endl;
// }
// else if (Coll_Otvetov == 2)
// {
   //  cout << "Нужно очень сильно подтянуть нывыки игры" << endl;
// }
// else if (Coll_Otvetov == 1)
// {
   //  cout << "Понимание игры очень плохое" << endl;
// }
// else if (Coll_Otvetov == 0)
// {
   //  cout << "Рак xD" << endl;
// }
#endif  IFELSE

#ifdef KALKULATOR

										  ////   Калькулятор

	 cout << "Калькулятор" << endl;
	 double a, b;
	 char s;
	 cout << "Введите числа:"; cin >> a >> s >> b;
	 switch (s)
	 {
	 case '+': cout << a << s << b << " =" << a + b; break;
	 case '-': cout << a << s << b << " =" << a - b; break;
	 case '/': cout << a << s << b << " =" << a / b; break;
	 case '*': cout << a << s << b << " =" << a * b; break;
	 default: cout << "Ошибка ввода:" << endl;
	 }
#endif KALKULATOR

#ifdef PALINDROM





	 /*Пользователь вводит число, а программа говорит, введенное число Палиндром, или нет.
	 12321
	 1221
	 223353322

	 и счастливыйй билет
	 5*/


	 ///*Полиндром*/

//int number;
//int reverse=0;
//cout << "Введите число;" << endl;

//int buffer = number;

//while (buffer==0)
//{
//	reverse *=10
//}

#endif  PALINDROM

#ifdef FOR




	/* 1. Используя цикл for, написать программу, которая вычисляет факториал числа, введенного с клавиатуры

		 5!= 1 * 2 * 3 * 4 * 5 = 120;

	 2. Используя цикл for возвести указанное число, в указанную степень.Оснвание и показатель степени вводятся с клавиатуры;

	 3. Используя цикл for, вывести на экран таблицу ASCII символов, разделенных пробелами, по 16 символов в строке;

    */

	 
	                              //Факториал числа

	 /*double factorial = 1;
	 int n;
	 cout << "Введите число"; cin >> n;

	 for (int i = 1; i <= n; i++)
	 {
		 cout << i << "! = ";
		 factorial = factorial * i;
		 cout << factorial << endl;
	 }
	 cout << "Факториал числа " << n << " = " << factorial << endl;
	 */

	                            //Возводим число в степень

	 //double a;    //Основание степени
	 //int n;    //Показатель степени
	 //double N = 1;//Степень
	 //cout << "Введите основание степени"; cin >> a;
	 //cout << "Введите показатель степени"; cin >> n;

	 //if (n < 0)
	 //{
		// a = 1 / a;
		// n = -n;
	 //}

	 //for (int i = 0; i < n; i++)
	 //{
		// N *= a;
	 //}
	 //cout << a << " ^ " << n << " = ";
	 //cout << N << endl;

	                                //256 аски символов

	/* for (int i = 0; i < 256; i++)
	 {
		 if (i % 16 == 0)cout << endl;
		 cout << (char)i << " ";
	 }*/
	
#endif // FOR
	






















#ifdef ARRAYS



	 //1. Массив, заполненный случайными числами, отсортировать в порядке возрастания;


	const int n = 10;
	int arr[n];

	
	int minRand = 100;
	int maxRand = 100;
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
	} while (minRand == maxRand);
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//////////////////////////сортировка////////////////////////
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; i++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Привет";//??????????????????????????????????????????????????????
	}
	cout << endl;




	/*2. Массив из 10ти элементов заполнить уникальными случайными числами, от 0 до 10;*/


	 /*const int n = 10;
	 int arr[n];
	 for (int i = 0; i < n; i++)
	 {
		 bool unique;
		 do
		 {
			 arr[i] = rand() % n;
			 unique = true;
			 for (int j = 0; j < i; j++)
			 {
				 if (arr[i]==arr[j])
				 {
					 unique = false;
					 break;
				 }
			 }
		 } while (!unique);
	 }
	 for (int i = 0; i < n; i++)
	 {
		 cout << arr[i] << "\t"; 
	 }
	 cout << endl;*/
#endif  ARRAYS

#ifdef DECIMAL





	/* 1. Десятичное число, введенное с клавиатуры перевести в двоичную систему счисления;*/

	 /*int decimal;
	 cout << "Введите десятичное число"; cin >> decimal;
	 const int n = 32;
	 int bin[n] = {};
	 int i = 0;

	 while (decimal)
	 {
		 bin[i++] = decimal % 2;
		 decimal /= 2;
	 }
	 for (--i; i >= 0; i--)
	 {
		 cout << bin[i];
		 if (i % 8 == 0)cout << " ";
		 if (i % 4 == 0)cout << " ";
	 }
	 cout << endl;*/


	 /*2. Десятичное число, введенное с клавиатуры перевести в шестнадцатеричную систему счисления;*/

	 /*int decimal;
	 cout << "Введите десятичное число:"; cin >> decimal;
	 const int n = 8;
	 int hex[n] = {};
	 int i = 0;
	 while (decimal)
	 {
		 hex[i++] = decimal % 16;
		 decimal /= 16;
	 }
	 for(int i = n - 1; i >= 0;i--)
	 {
		 if (hex[i] == 10)
			 cout << "A";
		 else if (hex[i] == 11)
			 cout << "B";
		 else if (hex[i] == 12)
			 cout << "C";
		 else if (hex[i] == 13)
			 cout << "D";
		 else if (hex[i] == 14)
			 cout << "E";
		 else if (hex[i] == 15)
			 cout << "F";
		 else
			 cout << hex[i];








	 }
	 cout << endl;*/

#endif  DECIMAL

#ifdef MATRIX




	//1. В проекте TheMatrix изменить вывод так, чтобы матрицы выводились в строку;
	//2. В проект TheMatrix добавить код, который перемножает матрицы;
	//3. Вычислить определитель матрицы 3 - го порядка методом Саррюса;

	 const int n = 3;
	 const int m = 3;
	 int A[m][n];

	 int B[m][n];
	 int C[m][n];

	 /*заполняем случайными числами*/
	 for (int i = 0; i < m; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 A[i][j] = rand() % 10;
		 }
	 }

	 for (int i = 0; i < m; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 B[i][j] = rand() % 10;
		 }
	 }
	 //Сложение матриц
	 for (int i = 0; i < m; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 C[i][j] = A[i][j] + B[i][j];
		 }
	 }

	 // Умножение матриц
	 int D[m][n]{};
	 for (int i = 0; i < m; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 for (int k = 0; k < n; k++)
			 {
				 D[i][j] += A[i][k] * B[k][j];
			 }
		 }
	 }

	 /*выводим матрицы на экран*/
	 //for (int i = 0; i < m; i++)
	 //{
		// for (int j = 0; j < n; j++)
		// {
		//	 cout << A[i][j] << "\t";
		// }
		// cout << endl;
		// 
	 //}
	 //cout << endl;

	 //for (int i = 0; i < m; i++)
	 //{
		// for (int j = 0; j < n; j++)
		// {
		//	 cout << B[i][j] << "\t";
		// }
		// cout << endl;
		//
	 //}
	 //cout << endl;

	 //for (int i = 0; i < m; i++)
	 //{
		// for (int j = 0; j < n; j++)
		// {
		//	 cout << C[i][j] << "\t";
		// }
		// cout << endl;

	 //}
	 //cout << endl;

	
	cout << "Сложение матриц:"<<endl;
	
	 for (int i = 0; i < m; i++)
	 {
		 
		 cout << "\t|";
		 for (int j = 0; j < n; j++)
		 {
			 cout << A[i][j];
			 if (j != n - 1)cout << "\t";
		 }
	     cout << "|\t +\t";
	     cout << "|";

		 
	     for (int j = 0; j < n; j++)
	     {
		    cout << B[i][j];
		    if (j != n - 1)cout << "\t";
	     }
		 cout << "|\t =\t";
		 cout << "|";

		 
		 for (int j = 0; j < n; j++)
		 {
			 cout << C[i][j];
			 if (j != n - 1)cout << "\t";
		 }
		 cout << "|\n";
		

		 
		 
	 }
	 cout << delimeter;
	 cout << "Умножение матриц:" << endl;
	 for (int i = 0; i < m; i++)
	 {
		 
		 cout << "\t|";
		 for (int j = 0; j < n; j++)
		 {
			 cout << A[i][j];
			 if (j != n - 1)cout << "\t";
		 }
		 cout << "|\t *\t";
		 cout << "|";

		 
		 for (int j = 0; j < n; j++)
		 {
			 cout << B[i][j];
			 if (j != n - 1)cout << "\t";
		 }
		 cout << "|\t =\t";
		 cout << "|";

		 
		 for (int j = 0; j < n; j++)
		 {
			 cout << D[i][j];
			 if (j != n - 1)cout << "\t";
		 }
		 cout << "|\n";




	 }
#endif MATRIX

#ifdef SIRIUS



	 const int n = 3;
	 int A[n][n] =
	 {

	  {1, 2 ,3},
	  {4, 5, 6},
	  {7, 8, 9}
	 };
	 for (int i = 0; i < n; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 A[i][j] = rand() % 10;
		 }
	 }
	 cout << "Исходная матрица\n";
	 for (int i = 0; i < n; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 cout << A[i][j] << "\t";

		 }
		 cout << endl;

	 } 

	 int B[n][n * 2];
	 for (int i = 0; i < n; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 B[i][j] = B[i][j + n] = A[i][j];
		 }
	 }
	 cout << "Расширенная матрица\n";
     for (int i = 0; i < n; i++)
	 {
		 for (int j = 0; j < n * 2; j++)
		 {
			cout << B[i][j] << "\t";
		 }
		 cout << endl;
	 }

	 int summ_main_diag = 0;
	 int multiplay;
	 for (int i = 0; i < n; i++)
	 {
		 multiplay = 1;
		 for (int j = 0; j < n; j++)
		 {
			 multiplay *= B[j][i + j];
		 }
		 summ_main_diag += multiplay;
	 }
	 cout << "Сумма произведений элементов главной диагонали  " << summ_main_diag << endl;

	 //Вспомогательная диагональ
	 int summ_aux_diag = 0;
	 for (int i = 0; i < n; i++)
	 {
		 multiplay = 1;
		 for (int j = 0; j < n; j++)
		 {
			 multiplay *= B[n - 1 - j][j + i];
		 }
		 summ_aux_diag += multiplay;
	 }
	 cout << "Сумма произведений элементов главной диагонали  " << summ_aux_diag << endl;
	 int determinant = summ_main_diag - summ_aux_diag;
	 cout << "Определитель матрицы :" << determinant << endl;
	

#endif SIRIUS

 


 }















		 //const int n = 5;
		 //int arr[n];

		 //cout << "Введите значение элемента массива: " << endl;
		 //for (int i = 0; i < n; i++)
		 //{
		 //	cin >> arr[i];
		 //}
		 //cout << endl;

		 //cout << "Элементы в прямом порядке : ";
		 //for (int i = 0; i < n; i++)
		 //{
		 //	cout << arr[i] << " ";
		 //}
		 //cout << endl;

		 //cout << "Элементы в обратном порядке:";
		 //for (int i = n - 1; i >= 0; i--)
		 //{
		 //	cout << arr[i] << " ";
		 //}
		 //cout << endl;

		 //cout << "Сумма элементов массива: ";
		 //int summa = 0;
		 //for (int i = 0; i < n; i++)
		 //{
		 //	summa += arr[i];	
		 //}
		 //cout << summa;
		 //cout << endl;

		 //cout << "Среднее арифметическое массива: ";
		 //cout <<(double) summa / n << endl;
		 //

		 //int min,max;
		 ////min = max = arr[0];
		 //min = INT_MAX;
		 //max = INT_MIN;

		 //for (int i = 0; i < n; i++)
		 //{
		 //	if (arr[i] < min) min = arr[i];
		 //	if (arr[i] > max) max = arr[i];
		 //	
		 //}
		 //
		 //cout << "Минимальное: " << min << " максимальное: " << max << endl;




			 // 1 2 3 4 5 6 7 8 9 10
			 // 2 3 4 5 6 7 8 9 10 1
			 // 3 4 5 6 7 8 9 10 1 2
			 // 4 5 6 7 8 9 10 1 2 3 


		 //////const int n = 10;
		 ////int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
		 //////выводим на экран исходный массив
		 ////for (int i = 0; i < n; i++)
		 ////{
		 ////	cout << arr[i] << "\t";
		 ////}
		 ////cout << endl;

		 //int j;
		 //cout << "На сколько элементов сдвинуть массив: "; cin >> j;

		 //int a;
		 //cout << "Выбирете сдвиг " << endl;
		 //cout << "Влево:1 " << " Вправо:2 = "; cin >> a;

		 //                                
		 //
											 //switch  

		 /*switch (a)
		 {

		 case 1:
			 for (int i = 0; i < j; i++)
			 {
				 int buffer = arr[0];
				 for (int i = 0; i < n - 1; i++)
				 {
					 arr[i] = arr[i + 1];
				 }
				 arr[n - 1] = buffer;

				 for (int i = 0; i < n; i++)
				 {
					 cout << arr[i] << "\t";
				 }
				 cout << endl;
			 }
			 break;

		 case 2:
			 for (int i = 0; i < j; i++)
			 {
				 int buffer = arr[n - 1];
				 for (int i = n - 1; i >= 0; i--)
				 {
					 arr[i] = arr[i - 1];
				 }
				 arr[0] = buffer;


				 for (int i = 0; i < n; i++)
				 {
					 cout << arr[i] << "\t";
				 }
				 cout << endl;
			 }
			 break;

		  default:cout << "Error" << endl;
		 }*/

		 //if alse

		 /*if (a == 1)
		 {
			 for (int i = 0; i < j; i++)
			 {
				 int buffer = arr[0];
				 for (int i = 0; i < n - 1; i++)
				 {
					 arr[i] = arr[i + 1];
				 }
				 arr[n - 1] = buffer;

				 for (int i = 0; i < n; i++)
				 {
					 cout << arr[i] << "\t";
				 }
				 cout << endl;
			 }
		 }
		 else if (a == 2)
		 {

			 for (int i = 0; i < j; i++)
			 {
				 int buffer = arr[n - 1];
				 for (int i = n - 1; i >= 0; i--)
				 {
					 arr[i] = arr[i - 1];
				 }
				 arr[0] = buffer;


				 for (int i = 0; i < n; i++)
				 {
					 cout << arr[i] << "\t";
				 }
				 cout << endl;
			 }
		 }
		 else
		 {
			 cout << "error" << endl;
		 }*/









 


