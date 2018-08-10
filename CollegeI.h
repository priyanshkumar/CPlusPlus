#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;
class CollegeI: public StudentPI
{
private:
	string programme;
	string cName;
	string course;
	string campus;
	int cid;
public:
	//constructors
	CollegeI(string CName, string Course, string Campus, string Program, int ID);
	CollegeI();
	~CollegeI();

	//setters
	void Set_Programme(string Programme);
	void Set_CName(string CName);
	void Set_Course(string Course);
	void Set_Campus(string Campus);
	void Set_Cid(int ID);

	//getters
	string Get_Programme();
	string Get_CName();
	string Get_Course();
	string Get_Campus();
	int Get_Cid();

	//methods
	void OutputCollege();
};

