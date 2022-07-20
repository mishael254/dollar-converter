#include "dollarconv.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Enter the dollar you wanna convert to ksh.Start with $ sign first to get full results..\n";
	double constexpr ksh = 118.35;
	char d_sign;
	double dollar = 0.0;
	double result_two = 0.0;
	
	
	while (cin >> d_sign >> dollar) {
		double result_one = 0.0;
		switch (d_sign) {
		case '$':
			cout << d_sign << dollar << " is .... " << dollar * ksh << " kshs\n";
			break;
		default:
			cout << "Check your inputs and try again \n";
			break;

		}
		result_one = dollar * ksh;
		result_two = result_one;
		if (result_one != result_two) {
			double total_result = result_one + result_two;
			cout << "The total result is == " << total_result << endl;
		}
		else {
			cout << "Result one is -- " << result_one << endl << "result two is ---" << result_two << endl;
		}
		
		


		
	}
	
}