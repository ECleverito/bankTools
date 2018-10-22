#ifndef BANKTOOLS_HPP
#define BANKTOOLS_HPP

const float napiers = 2.71828; //Define 'e' constant for compounding interest calculation

class loan
{
	
	float rate, monthlyPayment, principal;
	int months;
	
	bool monthsFlag, rateFlag, princFlag; //Flags for indicating if these variables have been obtained

public:
	
	loan(): monthsFlag(0), rateFlag(0), princFlag(0){}
	
	void getMonths();
	
	void getRate();
	
	void getPrincipal();
	
	void dispPayment();

private:
	
	int calcPayment();

};

#endif
