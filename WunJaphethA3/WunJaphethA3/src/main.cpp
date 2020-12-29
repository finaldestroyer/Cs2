//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Directory.cpp"
using namespace std;


int numStudents = 100;

int main() {
	Student *studentPtr[numStudents] = {nullptr};
	Student *agePtr;
	Input input;
	Output output;
	int numStudents = 0;
	int avgAge;
	string text;
	ifstream inFile;
	ofstream outFile;

	inFile.open("WunJaphethA3\src\a3data.txt");
	outFile.open("WunJaphethA3\src\a3output.txt");
	if (!inFile)
	{
		cout<<"Failure to open infile(s)"<<endl;
		return 0;
	}
	if (!outFile)
	{
		cout<<"Failure to open outfile(s)"<<endl;
		return 0;
	}
	getline(infile, text,'\n');
	while(inFile)
	{
		input.nameF = inputText.substr(0,10);
		input.nameM = inputText.substr(10,10);
		input.nameL = inputText.substr(20,20);
		input.ID = inputText.substr(40,9);
		input.Age = inputText.substr(49,3);

		output.nameF = input.nameF;
		output.nameM = input.nameM.substr(0,1);
		output.nameL = input.nameL;
		output.ID = input.ID.substr(1,8);
		if(input.ID(0,1) == "B")
		{
			output.Des = "Business";
		}
		else if(input.ID(0,1) == "E")
		{
			output.Des = "Engineering";
		}
		else if(input.ID(0,1) == "L")
		{
			output.Des = "Liberal Arts";
		}
		else if(input.ID(0,1) == "M")
		{
			output.Des = "Music";
		}

		if(input.ID.substr(0,1) == "L" || input.ID.substr(0,1) == "M")
		{
			outFile<<setw(10)<<output.nameF;
			outFile<<setw(1)<<output.nameM;
			outFile<<setw(20)<<out.nameL;
			outFile<<setw(8)<<output.ID;
			outFile<<setw(12)<<output.Des;
		}
		studentPtr[numStudents] = new Student;
		studentPtr[numStudents]->nameF = input.nameF;
		studentPtr[numStudents]->nameM = input.nameM.substr(0,1);
		studentPtr[numStudents]->nameL = input.nameL;
		studentPtr[numStudents]->loc =stoi(input.ID.substr(1,2));
		studentPtr[numStudents]->seq =stoi(input.ID.substr(3,6));
		studentPtr[numStudents]->Age =stoi(input.Age);

		numStudents++
		getline(infile,text,"\n");
	}


	for(int i = 0;i<numStudents; i++)
	{
		cout<<"The student's First name is " <<studentPtr[i]->nameF;
		cout<<"The student's Middle name is " <<studentPtr[i]->nameM;
		cout<<"The student's Last name is " <<studentPtr[i]->nameL<<endl;
	}

	avgAge = ageCalc(studentPtr, agePtr);
	cout<<"Average age = "<< avgAge<<endl;
	cout<<"Student "<<agePtr<<endl;
	inFile.close();
	outFile.close();
	for(int i =.;< numStudents;i++)
	{
		delete studentPtr[i];
	}
	return;
}
