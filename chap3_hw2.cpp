//Thuong Mai 
//chap3_hw2
//The Harris-Benedict equation
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ 
double weight_in_pounds, height_in_inches, age_in_years, BMR, rate, finalBMR;
char choice, option;
cout<<"\nEnter your weight in lbs: ";cin>>weight_in_pounds;
cout<<"\nEnter your height in inches: ";cin>>height_in_inches; 
cout<<"\nEnter your age in year: ";cin>>age_in_years;
cout<<"\nPlease select your gender to continue.\n";
cout<<"\nM. Male";
cout<<"\nF. Female";
cout<<"\n\n Input your gender ";
cin>>choice;
choice=toupper(choice);
switch (choice)
{
	case 'M':
	cout<<"\nMale";
	BMR=66+(6.3*weight_in_pounds)+(12.9*height_in_inches)-(6.8*age_in_years);
	cout<<"\nYour male BMR is "<<BMR;
	break;
	case 'F':
	cout<<"\nFemale";
	BMR=655+(4.3*weight_in_pounds)+(4.7*height_in_inches)-(4.7*age_in_years);
	cout<<"\n\nYour female BMR is "<<BMR;
	break;	
}
cout<<"\n\n How are you usually staying within the day?\n";
cout<<"\na. Sedentary";
cout<<"\nb. Somewhat active (exercise occasionally)";
cout<<"\nc. Active (exercise 3-4 days per week)";
cout<<"\nd. Highly active (exercise everyday)\n\n";
cout<<"\nChoose one of the options above ";cin>>option;
switch (option)
{
	case 'a':
		rate=0.2;
		break;
	case 'b':
		rate=0.3;
		break;
	case 'c':
		rate=0.4;
		break;
	case 'd':
		rate=0.5;
		break;
	}
	cout<<"\nThe final BMR is ";
	finalBMR=BMR+BMR*rate;
	cout<<finalBMR;
	return 0;
}





