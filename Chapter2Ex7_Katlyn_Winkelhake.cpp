/*
Title: Chapter 2 Exercise 7
File Name: Chapter2Ex7_Katlyn_Winkelhake.cpp
Date: Aug 30 2024
Programmer: Katlyn Winkelhake
Requirements: Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

• The number of millimeters higher than the current level that the ocean’s level will be in 5 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so 

that the user can enter the number of the number of millimeters the ocean level rises per year..
*/

#include <iostream>

using namespace std;


int main()
{
	double levelRise;
		cout << "Enter the amount the ocean level rises per year:" << endl;
		cin >> levelRise;
	
	double FiveYearLevel = levelRise * 5;
	double SevenYearLevel = levelRise * 7;
	double TenYearLevel = levelRise * 10;
	cout << "After five years the ocean will have risen " << FiveYearLevel << " millimeters."<<endl;
	cout << "After seven years the ocean will have risen " << SevenYearLevel << " millimeters."<<endl;
	cout << "After ten years the ocean will have risen " << TenYearLevel << " millimeters."<<endl;



	return 0;
}