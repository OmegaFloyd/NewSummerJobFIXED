// New_Summer_Job.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double TAX_PERCENT = .15;


int main()
{
    //variable

    double shopping;
    double entertainment;
    double savings;
    double remainder;
    double net_income;
    double gross_income;
    double hourly_wage;
    double hours_worked;
    double tax_percent_total;
    double savings_percent;
    double entertainment_percent;
    double shopping_percent;
    string name;


    //Program intial output

    cout << "Spending calculator" << endl;
    cout << endl;
    cout << "Calculates the weekly wage based on an hourly payrate, and then subtracts spending habits from the total" << endl;
    cout << endl;

    //User input

    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << "How many hours have you worked?" << endl;
    cin >> hours_worked;
    cout << endl;
    cout << "What is your hourly wage?" << endl;
    cin >> hourly_wage;
    cout << endl;

    //intital money output
    gross_income = hours_worked * hourly_wage;
    tax_percent_total = gross_income * TAX_PERCENT;
    net_income = gross_income - tax_percent_total;

    cout << endl;

    cout << "please insert all values in decimal form" << endl;
    cout << endl;
    cout << "What percent do you spend on shopping/groceries? " << endl;
    cin >> shopping_percent;
    cout << endl;
    cout << "What percent do you spent on entertainment?" << endl;
    cin >> entertainment_percent;
    cout << endl;
    cout << "How much have you deposited into your savings account?" << endl;
    cin >> savings_percent;
    cout << endl;


    //calculations

    shopping = shopping_percent * gross_income;
    entertainment = entertainment_percent * gross_income;
    savings = savings_percent * gross_income;
    remainder = gross_income - shopping - savings - entertainment - tax_percent_total;

    //Output to screen

    system("cls");

    /* cout.setf(ios::fixed);
     cout.setf(ios::showpoint);
     cout.precision(2);*/

    cout << fixed << setprecision(2) << endl;

    cout << setw(15) << left << "Name:" << setw(6) << right << name << endl;
    cout << setw(15) << left << "Wages:" << setw(6) << right << "$ " << setw(6) << right << gross_income << endl;
    cout << setw(15) << left << "Taxes:" << setw(6) << right << "$ " << setw(6) << right << tax_percent_total << endl;
    cout << setw(15) << left << "Shopping:" << setw(6) << right << "$ " << setw(6) << right << shopping << endl;
    cout << setw(15) << left << "Entertainment:" << setw(6) << right << "$ " << entertainment << endl;
    cout << setw(15) << left << "Savings:" << setw(6) << right << "$ " << setw(6) << right << savings << endl;
    cout << setw(15) << left << "Remainder" << setw(6) << right << "$ " << setw(6) << right << remainder << endl;


    return 0;




}

