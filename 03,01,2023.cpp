#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Задание 1";
	int first_number, i,  max = 500;
	float sum=0;
	cout << "\nВведите точку отчета :";
	cin >> first_number;
	i = first_number;
	if (first_number <= max) {

		while (i <= max) {
			sum += i;
			i++;
		}
		cout << "\nСумма всех чисел " << sum;
	}
	else if (first_number > max)
		cout << "\n Вы допустили ошибку !!!";
	cout << "\n";
	cout << "\nЗадание2";
	int x, y, res;
	cout << "\nВведите первое число :";
	cin >> x;
	cout << "\nВведите второе число :";
	cin >> y;
	res =  pow(x, y);;
	cout << "\nВаш результат  : " << res;
	cout << "\n";
	cout << "\nЗадание 3\n";
	int min1 = 1, max1 = 1000, summa = 0, ix;
	ix = min1;
	while (ix <= max1) {
		summa += ix;
		ix++;
	}
	int resu = summa / 1001;
	cout << "\nСреднеее арефметическое :  " << resu;
	cout << "\n";
	cout << "\nЗадание 4";
	int num1, num2 = 20, dob = 1;
	cout << "\nВведите первое число : ";
	cin >> num1;
	if (1 <= num1 <= num2) {
		while (num1 <= num2) {
			dob *= num1;
			num1++;
		}
		cout << "\nДобуток всех чисел :" << dob;
	}
	else
		cout << "\nВы допустили ошибку :(";
	cout << "\n";
	cout << "\nЗадание5 ";
	char far;
	cout << "\n1-таблица умножения на 1";
	cout << "\n2-таблица умножения на 2";
	cout << "\n3-таблица умножения на 3";
	cout << "\n4-таблица умножения на 4";
	cout << "\n5-таблица умножения на 5";
	cout << "\n6-таблица умножения на 6";
	cout << "\n7-таблица умножения на 7";
	cout << "\n8-таблица умножения на 8";
	cout << "\n9-таблица умножения на 9";
	cout << "\n10-таблица умножения на 10";
	cout << "\nСделайте выбор :";
	cin >> far;
	switch (far)
	{
	case '1': {
		cout << "\n1*1=1";
		cout << "\n1*2=2";
		cout << "\n1*3=3";
		cout << "\n1*4=4";
		cout << "\n1*5=5";
		cout << "\n1*6=6";
		cout << "\n1*7=7";
		cout << "\n1*8=8";
		cout << "\n1*9=9";
		cout << "\n1*10=10";
		break;
	}
	case '2': {
		cout << "\n2*1=2";
		cout << "\n2*2=4";
		cout << "\n2*3=6";
		cout << "\n2*4=8";
		cout << "\n2*5=10";
		cout << "\n2*6=12";
		cout << "\n2*7=14";
		cout << "\n2*8=16";
		cout << "\n2*9=18";
		cout << "\n2*10=20";
		break;
	}
	case'3': {
		cout << "\n3*1=3";
		cout << "\n3*2=6";
		cout << "\n3*3=9";
		cout << "\n3*4=12";
		cout << "\n3*5=15";
		cout << "\n3*6=18";
		cout << "\n3*7=21";
		cout << "\n3*8=24";
		cout << "\n3*9=27";
		cout << "\n3*10=30";
		break;
	}
	case '4': {
		cout << "\n4*1=4";
		cout << "\n4*2=8";
		cout << "\n4*3=12";
		cout << "\n4*4=16";
		cout << "\n4*5=20";
		cout << "\n4*6=24";
		cout << "\n4*7=28";
		cout << "\n4*8=32";
		cout << "\n4*9=36";
		cout << "\n4*10=40";
		break;
	}
	case '5': {
		cout << "\n5*1=5";
		cout << "\n5*2=10";
		cout << "\n5*3=15";
		cout << "\n5*4=20";
		cout << "\n5*5=25";
		cout << "\n5*6=30";
		cout << "\n5*7=35";
		cout << "\n5*8=40";
		cout << "\n5*9=45";
		cout << "\n5*10=50";
		break;
	}
	case '6': {
		cout << "\n6*1=6";
		cout << "\n6*2=12";
		cout << "\n6*3=18";
		cout << "\n6*4=24";
		cout << "\n6*5=30";
		cout << "\n6*6=36";
		cout << "\n6*7=42";
		cout << "\n6*8=48";
		cout << "\n6*9=54";
		cout << "\n6*10=60";
		break;

	}
	case ' 7': {
		cout << "\n7*1=7";
		cout << "\n7*2=14";
		cout << "\n7*3=21";
		cout << "\n7*4=28";
		cout << "\n7*5=35";
		cout << "\n7*6=42";
		cout << "\n7*7=49";
		cout << "\n7*8=56";
		cout << "\n7*9=63";
		cout << "\n7*10=70";
		break;
	}
	case ' 8': {
		cout << "\n8*1=8";
		cout << "\n8*2=16";
		cout << "\n8*3=24";
		cout << "\n8*4=32";
		cout << "\n8*5=40";
		cout << "\n8*6=48";
		cout << "\n8*7=56";
		cout << "\n8*8=64";
		cout << "\n8*9=72";
		cout << "\n8*10=80";
		break;
	}
	case '9': {
		cout << "\n9*1=9";
		cout << "\n9*2=18";
		cout << "\n9*3=27";
		cout << "\n9*4=36";
		cout << "\n9*5=45";
		cout << "\n9*6=54";
		cout << "\n9*7=63";
		cout << "\n9*8=72";
		cout << "\n9*9=81";
		cout << "\n9*10=90";
		break;
	}
	case '10': {
		cout << "\n10*1=10";
		cout << "\n10*2=20";
		cout << "\n10*3=30";
		cout << "\n10*4=40";
		cout << "\n10*5=50";
		cout << "\n10*6=60";
		cout << "\n10*7=70";
		cout << "\n10*8=80";
		cout << "\n10*9=90";
		cout << "\n10*10=100";
		break;
	}
	default:
		cout << "\nВы допустили ошибку :(";

		break;

	}
	cout << "\n";
	cout << "\nЗадание6";
	int minimal = 100, maximum = 999, kol = 0;
	for (minimal; minimal < maximum; minimal++) {

		if (minimal / 100 == minimal / 10 % 10 || minimal / 100 == minimal % 10 || minimal / 10 % 10 == minimal % 10)

			kol++;

	}
	cout << "\nКоличество чисел :" << kol;
	cout << "\n";
	cout << "\nЗадание 7";
	minimal = 100;
	maximum = 999;
	int kol1 = 0;
	for (minimal; minimal < maximum; minimal++) {
		if (minimal / 100 != minimal / 10 % 10 || minimal / 100 != minimal / 10 || minimal / 10 % 10 != minimal % 10)
			kol1++;

	}
	cout << "\nКоличество чисел :" << kol1;
	cout << "\n";
	cout << "\nЗадание 8";
	int number_console;
	cout << "\nВведите число : ";
	cin >> number_console;
	while (number_console > 0 && (number_console % 10 == 3 || number_console % 10 == 6))
		number_console /= 10;
	int with36 = number_console % 10;
	int im = 10;
	while (number_console > 0) {
		number_console /= 10;
		if (number_console % 10 != 3 && number_console % 10 != 6) {
			with36 += (number_console % 10) * im;
			im *= 10;
		}

	}
	cout << with36 << endl;
	 
	cout << "\n";
	cout << "\nЗадание9";
	int numberkat,ik=1;
	cout << "\nВведите число : ";
	cin >> numberkat;
	for (ik; ik <= numberkat; ik++) {
		if (numberkat % (ik * ik) == 0 && numberkat % (ik * ik * ik) != 0) {
			numberkat /= ik;
			cout << "\nЧисла которые делятся без остатка :" << ik;

		}
		else {

			cout << "\nК сожелению число не подходит";
			break;
		}
	}
	
	 
	cout << "\n";
	cout << "\nЗадание 10 ";
	int A , su=0;
	cout << "\nВведите первое число :";
	cin >> A;
	for (A; A > 0; A / 10)
	{
		su += A % 10;
		A--;
	}
	if (su * su * su == A * A)
		cout << "\nЗа условием подходит !!!";
	else
		cout << "\nЗа условием не подходит :(";

	cout << "\n";
	cout << "\nЗадание 11";
	int dilene , ind=1;
	cout << "\nВведите  дилитель :";
	cin >> dilene;
	for (ind; ind <= dilene; ind++) {
		if (dilene % ind == 0) {
			cout << "\nЧисла на которые \t" << dilene << "\tможет делится без остачи   "<< ind ;
		}
		
	}
	//Пользователь водит два числа необходимо вывести все числа на которые два введены  числа делятся без остачи 
	cout << "\n";
	cout << "\nЗадание 12 ";
	int number_ex12, number_ex13, imd=1;
	cout << "\nВведите первое число :";
	cin >> number_ex12;
	cout << "\nВведите второе число :";
	cin >> number_ex13;
	for (imd; imd <= number_ex12; imd++) {
		for (imd; imd <= number_ex13; imd++) {
			if(number_ex12%imd==0 && number_ex13%imd==0)
				cout << "\nЧисла на которые \t" << number_ex12<<"   и   "<<  number_ex13  << "\tмогут  делится без остачи   " << imd;
		}
	}
	return 0;
}
