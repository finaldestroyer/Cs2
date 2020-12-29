//============================================================================
// Name        : Payroll.hpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef	PAYROLL_HPP_
#define PAYROLL_HPP_

#include <iostream>
using namespace std;

class Payroll
{
	private:
    float numHrs;
    float hrRate;
    float regPay;
    float otPay;
	public:
    //Setters
    void setnumHrs(float x);
    void sethrRate(float x);
    //Getters
    float getnumHrs();
    float gethrRate();
    float getotPay();
    float getregPay();

    Payroll();
    ~Payroll(); //Deconstructs Payroll



#endif /* PAYROLL_HPP_ */
