
#include <iostream>
#include <string>
#include<vector>
#include < stdlib.h >
#include "StudentPI.h"
#include "CollegeI.h"
#include "Programme.h"

using namespace std;

template<typename T>

void get_input(const string question, T &input)
{
	while (true)
	{
		cout << question << endl;

		cin >> input;

		if (cin.good())
		{
			break;
		}

		cout << "Please enter the correct value." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}


int main() {

	vector<StudentPI> students;
	vector<CollegeI> colleges;
	int input, id;
	char count = 'y';
	char counter = 'y';

	cout << "-----------------***********-----------------\n" << endl;
	cout << ".                  Welcome                  .\n" << endl;
	cout << "-----------------***********-----------------\n" << endl;

	while (counter == 'y' || counter == 'Y')
	{

	cout << "-----------------Hey, here is Menu-----------------\n" << endl;
	cout << "Press '1' : Add New Student"<<endl;
	cout << "Press '2' : Student Information" << endl;
	cout << "Press '3' : Exit " << endl;
	cout << "-----------------*****************-----------------\n" << endl;
	get_input("Please enter the input: ", input);
	
		switch (input) {
		case 1: {
			while (count == 'y' || count == 'Y') {
				string firstName, lastName, DOB, gender;
				string email, address, city, provience, postalCode;
				int phone, id;
				string cName, course, campus;
				int cid;
				get_input("Enter the ID as minimum of 8 number: ", id);
				cout << "Press enter to continue." << endl;
				// we clear the buffer and wait for them to enter the return key to exit
				cout << "-----------------**********-----------------\n" << endl;
				cout << "------------------PERSONAL INFORMATION------------------\n" << endl;
				get_input("Enter the First Name: ", firstName);
				get_input("Enter the last Name: ", lastName);
				get_input("Enter the Date Of Birth in Format dd/mm/yyyy: ", DOB);
				get_input("Enter the Gender F for(female) and M for(Male): ", gender);
				get_input("Enter the Email: ", email);
				get_input("Enter the Phone Number in form xxx-xxx-xxxx", phone);
				get_input("Enter the Address: ", address);
				get_input("Enter the City: ", city);
				get_input("Enter the Provience: ", provience);
				get_input("Enter the Postal Code: ", postalCode);

				cout << endl;
				cout << "-----------------**********-----------------\n" << endl;
				cout << "------------------College Information------------------\n" << endl;

				get_input("Enter the College Name: ", cName);
				get_input("Enter the Course: ", course);
				get_input("Enter the Campus", campus);
				cout << endl;
				cout << "-----------------**********-----------------\n" << endl;
				
				CollegeI college(cName, course, campus, id);
				colleges.push_back(college);
				StudentPI student(firstName, lastName, DOB, gender, email, phone, address, city, provience, postalCode, id);
				students.push_back(student);
				get_input("Would you like to add another student ('y' or 'n')", count);
				cout << "-----------------**********-----------------\n" << endl;
			}
			break;
		}
		case 2: {
			get_input("Enter the ID whose information you want:", id);
			cout << "------------------Information On Student------------------\n" << endl;
			for (int i = 0; i < students.size(); i++) {
				if (students[i].Get_ID() == id && colleges[i].Get_Cid() == id) {
					students[i].OutputStudent();
					colleges[i].OutputCollege();
				}
				else {
					cout << "No Such Student with that Id Found" << endl;
				}
				cout << "------------------*******************------------------\n";
			}
			break;
		}
		default: {
			cout << "You did not chosse correct id Sorry!";
			break;
		}
		}

		get_input("DO YOU WANT TO CONTINUE 'Y' or 'N'", counter);

	}
	
	cout << "Press enter to exit." << endl;
	// we clear the buffer and wait for them to enter the return key to exit
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}

// Student Personal Information Class
StudentPI::StudentPI()
{
}

StudentPI::StudentPI(string FirstName, string LastName, string DateOB, string Gender, string Email, int Phone, string Address, string City, string Provience, string PostalCode, int ID) {
	Set_FirstName(FirstName);
	Set_LastName(LastName);
	Set_DateOB(DateOB);
	Set_Gender(Gender);
	Set_Email(Email);
	Set_Phone(Phone);
	Set_City(City);
	Set_Address(Address);
	Set_Provience(Provience);
	Set_PostalCode(PostalCode);
	Set_Phone(Phone);
	Set_ID(ID);
};

StudentPI::~StudentPI()
{
}

//setters
void StudentPI::Set_FirstName(string FirstName) {
	firstName = FirstName;
}

void StudentPI::Set_LastName(string LastName) {
	lastName = LastName;
}

void StudentPI::Set_DateOB(string DateOB) {
	DOB =DateOB;
}

void StudentPI::Set_Gender(string Gender) {
	gender = Gender;
}

void StudentPI::Set_Email(string Email) {
	email = Email;
}
void StudentPI::Set_Phone(int Phone) {
	phone = Phone;
}

void StudentPI::Set_Address(string Address) {
	address = Address;
}

void StudentPI::Set_City(string City) {
	city = City;
}

void StudentPI::Set_Provience(string Provience) {
	provience = Provience;
}

void StudentPI::Set_PostalCode(string PostalCode) {
	postalCode = PostalCode;
}

void StudentPI::Set_ID(int ID) {
	id = ID;
}


// getters
string StudentPI::Get_FirstName() {
	return firstName;
}
string StudentPI::Get_LastName() {
	return lastName;
}
string StudentPI::Get_DateOB() {
	return DOB;
}
string StudentPI::Get_Gender() {
	return gender;
}
string StudentPI::Get_Email() {
	return email;
}
int StudentPI::Get_Phone() {
	return phone;
}
string StudentPI::Get_Address( ) {
	return address;
}
string StudentPI::Get_City() {
	return city;
}
string StudentPI::Get_Provience() {
	return provience;
}
string StudentPI::Get_PostalCode () {
	return postalCode;
}
int StudentPI::Get_ID() {
	return id;
}

//method 
void StudentPI::OutputStudent() {
	cout << "-----------------**********-----------------\n" << endl;
	cout << "The Student Id is : " << Get_ID() << endl;
	cout << "Name: " << Get_FirstName() << " " << Get_LastName() << endl;
	cout << "Date of Birth: " << Get_DateOB() << endl;
	cout << "Gender: " << Get_Gender() << endl;
	cout << "Phone Number: " << Get_Phone() << endl;
	cout << "Email: " << Get_Email() << endl;
	cout << "Address: " << Get_Address() << endl;
	cout << "City: " << Get_City() << endl;
	cout << "Provience:" << Get_Provience() << endl;
	cout << "Postal Code: " << Get_PostalCode() << endl;
	cout << "-----------------**********-----------------\n" << endl;
}

// college class
// constructor 
CollegeI::CollegeI(string CName, string Course, string Campus, int ID) {
	Set_CName(CName);
	Set_Course(Course);
	Set_Campus(Campus);
	Set_Cid(ID);  

}
CollegeI::CollegeI()
{
}

// Destructor
CollegeI::~CollegeI()
{
}

//setters
void CollegeI::Set_CName(string CName) {
	cName = CName;
}
void CollegeI::Set_Course(string Course) {
	course = Course;
}
void CollegeI::Set_Campus(string Campus) {
	campus = Campus;
}
void CollegeI::Set_Cid(int ID) {
	cid = ID;
}

// getters
string CollegeI::Get_CName() {
	return cName;
}
string CollegeI::Get_Course() {
	return course;
}
string CollegeI::Get_Campus() {
	return campus;
}
int CollegeI::Get_Cid() {
	return cid;
}

//methods
void CollegeI::OutputCollege() {
	cout << "-----------------**********-----------------\n" << endl;
	cout << "College Name: " << Get_CName() << endl;
	cout << "Course: " << Get_Course() << endl;
	cout << "Campus: " << Get_Campus() << endl;
	cout << "-----------------**********-----------------\n" << endl;
}
// Program Class

// constructors
Programme::Programme()
{
}

// destructors
Programme::~Programme()
{
}

//setters
void Programme::Set_Programme(string Programme) {
	programme = Programme;
}

void Programme::Set_Subject(string Subject) {
	subject = Subject;
}

void Programme::Set_Grade(float Grade) {
	grade = Grade;
}

void Programme::Set_Pid(int ID) {
	pid = ID;
}

// getters
string Programme::Get_Programme() {
	return programme;
}

string Programme::Get_Subject() {
	return subject;
}
float Programme::Get_Grade() {
	return grade;
}

int Programme::Get_Pid() {
	return pid;
}