#include<iostream>
#include<string>
#include<vector>

using namespace std;

class StudentPI
{
private:
	string firstName;
	string lastName;
	string DOB;
	string gender;
	string email;
	string address;
	string city;
	string provience;
	string postalCode;
	int phone;
	int id;
public:
	//constructors
	StudentPI(string FirstName, string LastName, string DateOB, string Gender, string Email, int Phone, string Address, string City, string Provience, string PostalCode, int ID);
	StudentPI();

	//Destructors
	~StudentPI();

	//setter
	void Set_FirstName(string FirstName);
	void Set_LastName(string LastName);
	void Set_DateOB(string DateOB);
	void Set_Gender(string Gender);
	void Set_Email(string Email);
	void Set_Phone(int Phone);
	void Set_Address(string Address);
	void Set_City(string City);
	void Set_Provience(string Provience);
	void Set_PostalCode (string PostalCode);
	void Set_ID(int ID);

	//getter
	string Get_FirstName();
	string Get_LastName();
	string Get_DateOB();
	string Get_Gender();
	string Get_Email();
	int Get_Phone();
	string Get_Address();
	string Get_City();
	string Get_Provience();
	string Get_PostalCode();
	int Get_ID();	


	//methods
	void OutputStudent();
};

