// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here
int myCalc(int*, int*);

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	int x;			// placeholder for user input
	int y;			// ""
	int calculation;

	int* xptr;		// declare pointer
	xptr = &x;		// set pointer to address of x
	int* yptr;		// declare pointer
	yptr = &y;		// set pointer to address of y

	// Inform user what program does


	// Prompt user to enter data needed by the program
	cout << "Please enter the value of x: ";
	cin >> x;
	cout << "Please enter the value of y: ";
	cin >> y;
	cout << endl;

	cout << "Before myCalc:\nx = " << x << " y = " << y << "\n" << endl; // prints variables before function call

	//myCalc(&x, &y); // calls myCalc
	calculation = myCalc(&x, &y); // assigned return of myCalc to calculation


	cout << "After myCalc:\nx = " << *xptr << " y = " << *yptr << "\n"; // prints variables after function call calculations
												
	cout << "Result: " << calculation << endl;							// displays calculation

	

	// A software algorithm would typically be executed after all data has been input


	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}

int myCalc(int* x, int* y)
{
	int temp = *x;

	*x = *y + 10;
	*y = temp * 20;


	return *x + *y;
}


// PROOF
// Program output copied into the below comment section
/*
Proof 1:
Please enter the value of x: 3
Please enter the value of y: 5

Before myCalc:
x = 3 y = 5

After myCalc:
x = 15 y = 60
Result: 75
Press any key to continue . . .

Proof 2:
Please enter the value of x: 10
Please enter the value of y: 6

Before myCalc:
x = 10 y = 6

After myCalc:
x = 16 y = 200
Result: 216
Press any key to continue . . .

*/