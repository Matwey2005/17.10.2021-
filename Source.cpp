//Апарович Матвей 
#include <iostream>
using  namespace std;
int main() {
	/*Boolean4◦
. Даны два целых числа: A, B. Проверить истинность высказывания:«Справедливы неравенства A > 2 и B ≤ 3».*/
/*	int a, b; 
	cin >> a >> b; 
	bool  C; 
	C = a > 2 && b <= 3;
	cout << boolalpha << C << endl; */ 
	/*Boolean6◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C»..*/
	/*int a, b, c; 
	cin >> a >> b >> c; 
	bool  res;	
	res = a < b&& b < c && a < c;
	cout << boolalpha << res << endl; */
	/*Boolean7◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Число B находится между числами A и C»*/
/*int a,b,c 
	bool d;
	cin >> a >> b >> c; 
	d = (a < b&& b < c) || (c < b&& b < a); 
	cout << boolalpha << d << endl;*/
	/*Boolean8◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Каждое из чисел A и B нечетное».*/
/* int a,b; 
	bool d; 
	cin >> a >> b; 
	d = (a % 2 != 0) && (b % 2 != 0); 
		cout << boolalpha << d << endl; */ 
	/*Boolean9◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Хотя бы одно из чисел A и B нечетное».*/
/*	int a, b;
	bool d;
	cin >> a >> b;
	d = (a % 2 != 0) || (b % 2 != 0);
	cout << boolalpha << d << endl; */
	/*Boolean10◦
. Даны два целых числа: A, B. Проверить истинность высказывания: «Ровно одно из чисел A и B нечетное».*/
/*	int a, b; 
	bool d; 
	cin >> a >> b;
	d = (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0);
	cout << boolalpha << d << endl; */
/*	int a, b;
	bool d;
	cin >> a >> b;
	d = a % 2 == b % 2; 
	cout << boolalpha << d << endl;*/ 
	/*Boolean12◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Каждое из чисел A, B, C положительное».*/
/*	int a, b, c; 
	bool d; 
	cin >> a >> b >> c; 
	d = (a > 0) && (b > 0) && (c > 0);
	cout << boolalpha << d << endl; */ 
/*Boolean13◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Хотя бы одно из чисел A, B, C положительное»*/
/*	int a, b, c;
	bool d;
	cin >> a >> b >> c;
	d = a > 0 || b > 0 || c > 0; 
	cout << boolalpha << d << endl; */
	/*Boolean14◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно одно из чисел A, B, C положительное».*/
	int a, b, c;
	bool d;
	cin >> a >> b >> c;
	d = (a > 0 && b < 0 && c < 0) || (a < 0 && b>0 && c < 0) || (a < 0 && b < 0 && c>0); 
	cout << boolalpha << d << endl;
	return 0; 

}