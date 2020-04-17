#include "bankTools.hpp"
#include <iostream>
#include <math.h>

using namespace std;

void loan::getMonths(){
		
	cout << "What is the loan's term (number of months)?\n";
	cin >> months; //Lets see if 'months' is within the scope of this method
	
	monthsFlag = true;
		
}
	
void loan::getRate(){
		
	cout << "What is the interest rate (APR as decimal, not percent)?\n";
	cin >> rate; //Lets see if 'months' is within the scope of this method
	
	rate/=12;
	
	cout << "The monthly interest rate is: " << rate << endl;
		
	rateFlag = true;	
}

void loan::getPrincipal(){
		
	cout << "What is the loan's principal?\n";
	cin >> principal; //Lets see if 'months' is within the scope of this method
		
	princFlag = true;	
}

void loan::dispPayment(){
	
	//Check return int from calcPayment(). Indicates if necessary data has been obtained.
	if(calcPayment()){
		cout << "The monthly payment amount is $" << monthlyPayment << endl;
		cout << "You will be paying " << (monthlyPayment*months-principal) << " on top of the principal overall." << endl;
	}
	else
		cout << "The required information has not been obtained yet.\n";
		
}

int loan::calcPayment(){
	
	if(monthsFlag&&rateFlag&&princFlag){
		monthlyPayment = (rate*principal)/(1 - pow(1+rate,-months));
		return 1;
	}
	else
		return 0;
	
}
