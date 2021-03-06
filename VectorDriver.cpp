// VectorDriver.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Justin Blakeman
//Oct. 15th 2018
//Fun with vectors, sorting, indexing , and the like!

#include "pch.h"
#include "VectorDriver.h"
#include <algorithm>

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	vector<short> my_Vec;				//Made a new vector to store my ten random shorts in
	cout << "my_Vec 10 Random : ";	
	add_numbers(my_Vec);				//adds ten random number to a vector
	print(my_Vec);						//prints out the vector of ten random short elements
	cout << endl;

	cout << "my_Vec print_evens : ";
	print_even(my_Vec);					//This calls my function in the header file and prints out the even indexes of the vector we just made with 10 random shorts in it
	cout << endl;


	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl << endl;

	short value;							//A variable to sore the users response
	cout << "check for value" << endl;
	cout << "enter a short value to find in sample_vector" << endl;
	std::cin >> value;						//Storing the users input in value to find in the vector
	is_present(sample_vector, value);		//Calls upon a function in my header file that looks for the given value, that the user provided, within the vector
	cout << endl;

	vector<short> my_Vec_5{ 55, 33, 22, 99, 77 };	//A vector, purposely not in acsending order to test the sort vector function
	cout << "I will sort in non-decrementing order the following vector: ";
	print(my_Vec_5);		//simply prints out the vector befor sorting it, for reference
	cout << endl;
	cout << "Here it is sorted: ";
	sort(my_Vec_5);			//calling upon a function nanmed sort that is in my header file ***was going to do it all in main but the instructions in the .h file got me confused.
	print(my_Vec_5);		//prints out the newly sorted vector.
	cout << endl << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");
	return 0;
}


