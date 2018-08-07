#include<iostream>
#include<vector>
#include<string>


using namespace std;
#pragma once
#include<iostream>
#include<string>

using namespace std;

class Programme
{
private:
	string programme, subject;
	float grade;
	vector<string> subjects;
	vector<float> grades;
	int pid;
public:
	//constructors
	Programme();

	// destructors
	~Programme();

	// setters
	void Set_Programme(string Programme);
	void Set_Subject(string Subjects);
	void Set_Grade(float Grade);
	void Set_Pid(int Pid);

	//getters
	string Get_Programme();
	string Get_Subject();
	float Get_Grade();
	int Get_Pid();


};

