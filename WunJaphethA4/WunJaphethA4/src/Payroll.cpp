//============================================================================
// Name        : Payroll.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class payroll
{
public:
    void setnumHrs(float x){
    	numHrs = x;
    }
    void sethrRate(float x){
    	hrRate = x;
    }

    float getnumHrs(){
    	float x = numHrs;
       	return x;
    }
    float gethrRate(){
    	float x = hrRate;
    	return x;
    }
    float getotPay(){
    	float x = 0;
    	if(numHrs>40){					//If the number of hrs worked is over 40 it will return the number of overtime pay
    		x = ((numHrs-40)*1.5) * hrRate;
    	}
    	return x;
    }
    float getregPay(){
    	float x = numHrs * hrRate;
        return x;
    }

    payroll()
    {
    	numHrs = 0;
        hrRate = 0;
        otPay = 0;
        regPay = 0;
    }

private:
    float numHrs;
    float hrRate;
    float regPay;
    float otPay;
};
