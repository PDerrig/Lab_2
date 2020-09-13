/*
Preston Derrig
C++ Fall 2020
Due: September 13 2020
Lab #2
Exploring Outputs
*/

#include <iostream> // including all the libraries I will need for the program
#include <string>
#include <iomanip>
using namespace std;

const string day1 = "Monday";  // making and naming all variables needed to print my schedule
const string time1 = "8:00"; 
const string subject1 = "Japanese Culture";
const string day2 = "Tuesday";
const string day3 = "Wednesday"; 
const string day4 = "Thursday"; 
const string time2 = "1:30"; 
const string time3 = "11:00"; 
const string time4 = "1:00";
const string subject2 = "C++"; 
const string subject3 = "Public Speaking"; 
const string subject4 = "Developmental Psychology";


const string row1 = "   *    *    *    * "; // making and naming all variables needed to make the checkerboard
const string row2 = "*    *    *    *   ";


int main()
{
	cout << day1 << setw(10) << time1 << setw(20) << subject1 << endl;  // using known commands to get my schedule typed put on the console in grid form
	cout << day1 << setw(10) << time2 << setw(7) << subject2 << endl;
	cout << day2 << setw(10) << time3 << setw(18) << subject3 << endl;
	cout << day2 << setw(9) << time4 << setw(7) << subject2 << endl;
	cout << day3 << setw(7) << time1 << setw(20) << subject1 << endl;
	cout << day4 << setw(8) << time1 << setw(28) << subject4 << endl;
	cout << day4 << setw(9) << time3 << setw(18) <<subject3 << endl << endl;


	cout << row1 << endl << row2 << endl; // calling the variables to create the checkerboard pattern
	cout << row1 << endl << row2 << endl;
	cout << row1 << endl << row2 << endl; 
	cout << row1 << endl << row2 << endl;
	return 0;
}