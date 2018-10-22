#include <iostream>
#include "bankTools.hpp"

using namespace std;

int main(){

	loan myLoan;
	
	myLoan.getMonths();
	myLoan.getRate();
	myLoan.getPrincipal();
	
	myLoan.dispPayment();

	return 0;
}
