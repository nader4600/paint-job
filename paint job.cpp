#include<iostream>
using namespace std;
void displayfunction(double price_of_paint_per_gallon, double number_of_rooms_required, double total_square_feet);
void Getfunction()
{
	double  price_of_paint_per_gallon, square_Feet_each_wall, number_of_rooms_required, total_square = 0;
	cout << "Enter the Number of rooms to be Painted : " << endl;
	cin >> number_of_rooms_required;
	while (number_of_rooms_required < 1)
	{
		cout << "Entr a Valid number " << endl;
		cin >> number_of_rooms_required;
	} 
	cout << "Enter the Price of paint per Gallon : " << endl;
	cin >> price_of_paint_per_gallon;
	while (price_of_paint_per_gallon<10)
	{
		cout << "The price cant less than 10$ , Please re enter The price again " << endl;
		cin >> price_of_paint_per_gallon;
	}
	cout << "Enter The Square Feet of Wall Space in eacch Room " << endl;
	for (int i = 1; i <= number_of_rooms_required; i++)
	{
		cin >> square_Feet_each_wall;
		while (square_Feet_each_wall < 1)
		{
			cout << "You cant enter negative number " << endl;
			cin >> square_Feet_each_wall;
		}
		total_square = total_square + square_Feet_each_wall;
	}
	displayfunction(price_of_paint_per_gallon, number_of_rooms_required, total_square);
}
void displayfunction(double price_of_paint_per_gallon, double number_of_rooms_required, double total_square_feet)
{
	double labourshours, totalcostpaint, labourtotal, total, number_of_gallons_required;
	number_of_gallons_required = total_square_feet / 110;
	cout << "The numbers of Gallons of Paint are required : " << number_of_gallons_required << endl;
	labourshours = number_of_gallons_required * 8;
	cout << " the hours of Labour Required " << labourshours <<  " hrs " << endl;
	totalcostpaint =price_of_paint_per_gallon * number_of_gallons_required;
	cout << "The Total Cost of The Paint job : " << totalcostpaint << "$" << endl;
	labourtotal = 25 * labourshours;
	cout << "The Labour Charges are : " << labourtotal <<" $ "<< endl;
	total = labourtotal + totalcostpaint;
	cout << "The Total Price of Painting and Labour charges are : " << total <<" $ "<< endl;
}
int main()
{
	Getfunction();
	return 0;
}


