 #include<iostream>
using std::cout;
using std::cin;
 using namespace std;
  //#define MAGAZIN
  //#define PRIMER
  //#define PROGRAMM IFELSE
  /*#define KALKULATOR*/

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

#ifdef PROGRAMM IFELSE

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
#endif PROGRAMM IFELSE

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






	 /*������������ ������ �����, � ��������� �������, ��������� ����� ���������, ��� ���.
	 12321
	 1221
	 223353322

	 � ����������� �����
	 5*/

	 int number;
	 int reverse=0;
	 cout << "������� �����"; cin >> number;


    int buffer = number;
    while (buffer>0)
    {
		reverse = buffer %10;
		buffer /=10;


    }

  

  







 


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









 


