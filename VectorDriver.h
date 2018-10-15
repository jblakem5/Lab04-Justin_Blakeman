#pragma once
/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
 //Justin Blakeman
 //Oct. 15th 2018
 //Fun with vectors, sorting, indexing , and the like!
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i < data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i < data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

///////////////////////////////////////////////////////////////////////////////////WHAT I MADE BEGINS HERE

// TODO: implement add_numbers
void add_numbers(vector<short> &data) {
	for (int i = 0; i < 10; i++) {					//will iterate 10 times
		short b = rand() % 101;						//sets b equal to a random short between 0-100
		data.push_back(b);							//adds the random value
	}

}


// TODO: implement print_even
void print_even(vector<short> &data) {
	if (data.empty()) {								//if the vector is empty then there is nothing to print out.
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);						//begin by printing out the 0th index, so we can get this nice bracket and format in
		for (ulong i = 2; i < data.size(); i=i+2) {	//indexes every even valued index of the vector by incrementing by +2 each iteration
			cout << ", " << data.at(i);				//prints out the even indexes from the vector
		}
		cout << ">";								//print out closing bracket for the format
	}
}

// TODO: implement is_present
bool is_present(const vector<short> &data, short value) {
	std::vector<short>::const_iterator iter = data.begin();	//sets the iterator to the beining of the vector

	while (iter != data.end()) {						//while the index of the vector is not at the end of the vector, do this
		if (*iter == value) {							//compares the value supplied by the user to a pointer pointing to a particular value of an index inside a vector.
			cout << "Found the Value!" << endl;			//Return true if the value was found then exits function
			return true;
		}
		iter++;								//iterates to the next index in the vector 
	}
	cout << "Could Not Find the Value..." << endl;		//Returns false if the value was not found in the vector
	return false;
}

// TODO: implement std::sort function
std::vector<short> sort(vector<short> &data) {
	sort(data.begin(), data.end());					//simply uses STL sort function for vectors. Starts sorting at the begining begin() and ends sorting at the end end()
	return data;
}
