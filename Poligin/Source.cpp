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



	 ////������������ ������: ���� ������ � ����������.


	 float money;

	 cout << "������� ������"; cin >> money;
	 int rubl = money;
	 int copeyka = (money - rubl) * 100;
	 cout << money << " ��� " << rubl << " ��� " << copeyka << " ��� ";

	 //double price_tetradi;
	 //int koll_tetadi;
	 //double price_karandash;
	 //int koll_karandash;
	 //cout << "������� ��������� �������: "; cin >> price_tetradi;
	 //cout << "������� ���������� ��������: "; cin >> koll_tetadi;
	 //double all_tetradi = price_tetradi * koll_tetadi;
	 //cout << "������� �������� ���������: "; cin >> price_karandash;
	 //cout << "������� ���������� ����������: "; cin >> koll_karandash
	 //double all_karandash = price_karandash * koll_karandash;
	 //double itogo = all_tetradi + all_karandash;
	 //cout << "� ���: " << itogo << "���" << endl;

	 double price_tetradi;
	 double price_obloshki;
	 int number;
	 cout << "������� ���� �������: "; cin >> price_tetradi;
	 cout << "������� ���� �������: "; cin >> price_obloshki;
	 cout << "������� ���������� ����������: "; cin >> number;
	 double total_price = (price_tetradi + price_obloshki) * number;
	 cout << "� ���: " << total_price << "���" << endl;

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

/*1. ������� ��� ������ : ���� ������, ��������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*
2. �������� ���������, ������� �� ����������� ������� ����������, �� ����� �����, ��� �������.
	����������� �������, ������������ ������ � ����������;

3. ������������ ������ ����� � ����������.
	���� ��� ����� ����� � ���������� �� 0 �� 10,
	�� ��������� ������� : "���� ��������", � ��������� ������ - "�� ������������ (Firefox)".

4. �������� ��������� ��� ������������, ������� ������ ����������� 5 ��������,
	�� 4 �������� ������� �� ������, �������� ������� ���������� ������� ABCD.
	������������ ������ �����, �������������� ����������� �� ��� ������ ��������,
	����� ����, ��������� ������� ����� ����������, ��� ���.� �����, ��������� ������� ���������� ���������� �������.*/




	//����������� �������

/*int temperatura;
cout << "������� ����������� :"; cin>> temperatura;
if (temperatura >= 100)
{
	cout << "�� ����� ����������� :";
}
else if (temperatura >= 30)
{
	cout << "�� ����� ����� :";

}
else if (temperatura >= 20)
{
	cout << "�� ����� ����� :";
}
else if (temperatura >= 14)
{
	cout << "�� ����� ��������� :";
}
else
{
	cout << "�� ����� ������� :";
}*/


//����� � ���������� �� 0 �� 10


/*int chislo;
cout << "������� ����� :"; cin >> chislo;

if (chislo >=0 && chislo <=10)
{
	cout << "�� ������";
}
else
{
	cout << "�� ������������;";
}*/


// �������� ��������� ��� ������������, ������� ������ ����������� 5 ��������,


//int Coll_Otvetov=0;
//char otvet;

//cout << "��� ������������ ��������� ������������ �� ���� league of legends:" << endl;
//system("pause");
//system("CLS");

//cout << "1) ������ ����� �������� �������������� ���� ?" << endl; 
//cout << "A-����" << endl;
//cout << "B-���" << endl;
//cout << "C-�������� �����" << endl;
//cout << "D-�������" << endl;
//cout << "��� �����: " << endl; cin >> otvet;

//system("CLS");

//if (otvet == 'C' || otvet=='c')
//{
   // Coll_Otvetov++;
   //cout << "���������!: ���������� ���������� �������:= " << Coll_Otvetov <<endl;
   //

//}
//else
//{
   //cout << "����� �� ������((" << endl;
//}
// system("pause");
// system("CLS");


//cout << "2) ������ ����� ����� ������ ������� � ���� ?" << endl;
//cout << "A-���" << endl;
//cout << "B-����" << endl;
//cout << "C-�������" << endl;
//cout << "D-�����" << endl;

//cout << "��� �����: " << endl; cin >> otvet;

//
//system("CLS");

//if (otvet == 'D' || otvet == 'd')
//{
   // Coll_Otvetov++;
   // cout << "���������!: ���������� ���������� �������:= " << Coll_Otvetov << endl;
   //
//}
//else
//{
   // cout << "����� �� ������((" << endl;
//}
// system("pause");
// system("CLS");
// cout << "3) ������ ����� ����� ��������� ����� ?" << endl;
// cout << "A-����" << endl;
// cout << "B-�������" << endl;
// cout << "C-�������" << endl;
// cout << "D-�����" << endl;

// cout << "��� �����: " << endl; cin >> otvet;

// system("CLS");

// if (otvet == 'A' || otvet == 'a')
// {
   //  Coll_Otvetov++;
   //  cout << "���������!: ���������� ���������� �������:= " << Coll_Otvetov << endl;
// }
// else
// {
   //  cout << "����� �� ������((" << endl;
// }
// system("pause");
// system("CLS");
// cout << "4) ������ ����� ������� ������� ���� ?" << endl;
// cout << "A-��������� ������" << endl;
// cout << "B-�������� ���� ����" << endl;
// cout << "C-���� ������" << endl;
// cout << "D-����� �������������" << endl;

// cout << "��� �����: " << endl; cin >> otvet;

// system("CLS");

// if (otvet == 'B' || otvet == 'b')
// {
   //  Coll_Otvetov++;
   //  cout << "���������!: ���������� ���������� �������:= " << Coll_Otvetov << endl;
// }
// else
// {
   //  cout << "����� �� ������((" << endl;
// }
// system("pause");
// system("CLS");
// cout << "5) ������ ��� ������ ���� ������������ ����� ?" << endl;
// cout << "A-��������� ���" << endl;
// cout << "B-�������� � ��� ff15" << endl;
// cout << "C-��������� � ������ ����������" << endl;
// cout << "D-�������" << endl;

// cout << "��� �����: " << endl; cin >> otvet;

// system("CLS");

// if (otvet == 'C' || otvet == 'c')
// {
   //  Coll_Otvetov++;
   //  cout << "���������!: ���������� ���������� �������:= " << Coll_Otvetov << endl;
// }
// else
// {
   //  cout << "����� �� ������((" << endl;
// }
// system("pause");
// system("CLS");

// cout << "������������ ���������" << endl;


// if (Coll_Otvetov == 5)
// {
   //  cout << "�� ����� ����, ��������� 1000 ��� �����" << endl;
// }
// else if (Coll_Otvetov == 4)
// {
   //  cout << "�� ������ ������������� � ����" << endl;
// }
// else if (Coll_Otvetov == 3)
// {
   //  cout << "�� ������ ������������ � ���� " << endl;
// }
// else if (Coll_Otvetov == 2)
// {
   //  cout << "����� ����� ������ ��������� ������ ����" << endl;
// }
// else if (Coll_Otvetov == 1)
// {
   //  cout << "��������� ���� ����� ������" << endl;
// }
// else if (Coll_Otvetov == 0)
// {
   //  cout << "��� xD" << endl;
// }
#endif  IFELSE

#ifdef KALKULATOR

										  ////   �����������

	 cout << "�����������" << endl;
	 double a, b;
	 char s;
	 cout << "������� �����:"; cin >> a >> s >> b;
	 switch (s)
	 {
	 case '+': cout << a << s << b << " =" << a + b; break;
	 case '-': cout << a << s << b << " =" << a - b; break;
	 case '/': cout << a << s << b << " =" << a / b; break;
	 case '*': cout << a << s << b << " =" << a * b; break;
	 default: cout << "������ �����:" << endl;
	 }
#endif KALKULATOR

#ifdef PALINDROM





	 /*������������ ������ �����, � ��������� �������, ��������� ����� ���������, ��� ���.
	 12321
	 1221
	 223353322

	 � ����������� �����
	 5*/


	 ///*���������*/

//int number;
//int reverse=0;
//cout << "������� �����;" << endl;

//int buffer = number;

//while (buffer==0)
//{
//	reverse *=10
//}

#endif  PALINDROM

#ifdef FOR




	/* 1. ��������� ���� for, �������� ���������, ������� ��������� ��������� �����, ���������� � ����������

		 5!= 1 * 2 * 3 * 4 * 5 = 120;

	 2. ��������� ���� for �������� ��������� �����, � ��������� �������.�������� � ���������� ������� �������� � ����������;

	 3. ��������� ���� for, ������� �� ����� ������� ASCII ��������, ����������� ���������, �� 16 �������� � ������;

    */

	 
	                              //��������� �����

	 /*double factorial = 1;
	 int n;
	 cout << "������� �����"; cin >> n;

	 for (int i = 1; i <= n; i++)
	 {
		 cout << i << "! = ";
		 factorial = factorial * i;
		 cout << factorial << endl;
	 }
	 cout << "��������� ����� " << n << " = " << factorial << endl;
	 */

	                            //�������� ����� � �������

	 //double a;    //��������� �������
	 //int n;    //���������� �������
	 //double N = 1;//�������
	 //cout << "������� ��������� �������"; cin >> a;
	 //cout << "������� ���������� �������"; cin >> n;

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

	                                //256 ���� ��������

	/* for (int i = 0; i < 256; i++)
	 {
		 if (i % 16 == 0)cout << endl;
		 cout << (char)i << " ";
	 }*/
	
#endif // FOR
	






















#ifdef ARRAYS



	 //1. ������, ����������� ���������� �������, ������������� � ������� �����������;


	const int n = 10;
	int arr[n];

	
	int minRand = 100;
	int maxRand = 100;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
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
	//////////////////////////����������////////////////////////
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
		cout << "������";//??????????????????????????????????????????????????????
	}
	cout << endl;




	/*2. ������ �� 10�� ��������� ��������� ����������� ���������� �������, �� 0 �� 10;*/


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





	/* 1. ���������� �����, ��������� � ���������� ��������� � �������� ������� ���������;*/

	 /*int decimal;
	 cout << "������� ���������� �����"; cin >> decimal;
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


	 /*2. ���������� �����, ��������� � ���������� ��������� � ����������������� ������� ���������;*/

	 /*int decimal;
	 cout << "������� ���������� �����:"; cin >> decimal;
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




	//1. � ������� TheMatrix �������� ����� ���, ����� ������� ���������� � ������;
	//2. � ������ TheMatrix �������� ���, ������� ����������� �������;
	//3. ��������� ������������ ������� 3 - �� ������� ������� �������;

	 const int n = 3;
	 const int m = 3;
	 int A[m][n];

	 int B[m][n];
	 int C[m][n];

	 /*��������� ���������� �������*/
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
	 //�������� ������
	 for (int i = 0; i < m; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 C[i][j] = A[i][j] + B[i][j];
		 }
	 }

	 // ��������� ������
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

	 /*������� ������� �� �����*/
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

	
	cout << "�������� ������:"<<endl;
	
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
	 cout << "��������� ������:" << endl;
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
	 cout << "�������� �������\n";
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
	 cout << "����������� �������\n";
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
	 cout << "����� ������������ ��������� ������� ���������  " << summ_main_diag << endl;

	 //��������������� ���������
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
	 cout << "����� ������������ ��������� ������� ���������  " << summ_aux_diag << endl;
	 int determinant = summ_main_diag - summ_aux_diag;
	 cout << "������������ ������� :" << determinant << endl;
	

#endif SIRIUS

 


 }















		 //const int n = 5;
		 //int arr[n];

		 //cout << "������� �������� �������� �������: " << endl;
		 //for (int i = 0; i < n; i++)
		 //{
		 //	cin >> arr[i];
		 //}
		 //cout << endl;

		 //cout << "�������� � ������ ������� : ";
		 //for (int i = 0; i < n; i++)
		 //{
		 //	cout << arr[i] << " ";
		 //}
		 //cout << endl;

		 //cout << "�������� � �������� �������:";
		 //for (int i = n - 1; i >= 0; i--)
		 //{
		 //	cout << arr[i] << " ";
		 //}
		 //cout << endl;

		 //cout << "����� ��������� �������: ";
		 //int summa = 0;
		 //for (int i = 0; i < n; i++)
		 //{
		 //	summa += arr[i];	
		 //}
		 //cout << summa;
		 //cout << endl;

		 //cout << "������� �������������� �������: ";
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
		 //cout << "�����������: " << min << " ������������: " << max << endl;




			 // 1 2 3 4 5 6 7 8 9 10
			 // 2 3 4 5 6 7 8 9 10 1
			 // 3 4 5 6 7 8 9 10 1 2
			 // 4 5 6 7 8 9 10 1 2 3 


		 //////const int n = 10;
		 ////int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
		 //////������� �� ����� �������� ������
		 ////for (int i = 0; i < n; i++)
		 ////{
		 ////	cout << arr[i] << "\t";
		 ////}
		 ////cout << endl;

		 //int j;
		 //cout << "�� ������� ��������� �������� ������: "; cin >> j;

		 //int a;
		 //cout << "�������� ����� " << endl;
		 //cout << "�����:1 " << " ������:2 = "; cin >> a;

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









 


