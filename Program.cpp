
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

void Get_Menu2() {
cout << "\n\n\n\n\n\t\t\t\t\t-----------------Hey, What You are up to-----------------\n" << endl;
cout << "\t\t\t\t\t\t    Press '1' : Edit Student" << endl;
cout << "\t\t\t\t\t\t    Press '2' : ADD Subjects" << endl;
cout << "\t\t\t\t\t\t    Press '3' : Edit Subjects " << endl;
cout << "\t\t\t\t\t\t	 Press '4' : Student Information " << endl;
cout << "\t\t\t\t\t\t	 Press '5' : Exit " << endl;
cout << "\n\t\t\t\t\t-----------------*****************-----------------\n" << endl; }

void Get_Menu3() {
	cout << "\n\t\t-Hey, Want to change Personal Information Please Select One-\n" << endl;
	cout << "\t\tPress '1' : Change FirstName" << endl;
	cout << "\t\tPress '2' : Change LastName" << endl;
	cout << "\t\tPress '3' : Change Date of Birth in formatdd/mm/yyyy " << endl;
	cout << "\t\tPress '4' : Change Gender  F for(female) and M for(Male) " << endl;
	cout << "\t\tPress '5' : Change Email" << endl;
	cout << "\t\tPress '6' : Change Phone Number in form xxx-xxx-xxxx" << endl;
	cout << "\t\tPress '7' : Change Address " << endl;
	cout << "\t\tPress '8' : Change City " << endl;
	cout << "\t\tPress '9' : Change Province" << endl;
	cout << "\t\tPress '10' : Change Postal Code" << endl;
	cout << "\t\tPress '11' : Change College Name " << endl;
	cout << "\t\tPress '12' : Change Course 'Full Time' or 'Part Time'" << endl;
	cout << "\t\tPress '13' : Change Campus " << endl;
	cout << "\t\tPress '14' : Exit " << endl;
	cout << "\n\t\t-----------------*****************-----------------\n" << endl;
}

int main() {

	vector<StudentPI> students;
	vector<CollegeI> colleges;
	int id, menu1, menu2, menu3;
	char count = 'y';
	char Menu1 = 'y';
	char inpt = 'y';

	cout << "\n\n\n\n\n\t\t\t\t\t-----------------***********-----------------\n" << endl;
	cout << "\t\t\t\t\t.                  Welcome                  .\n" << endl;
	cout << "\t\t\t\t\t-----------------***********-----------------\n\n" << endl;
	cout << "\t\t\t\t\t\t     Press Y to continue" << endl;
	cin >> inpt;

	system("CLS");

	while (Menu1 == 'y' || Menu1 == 'Y')
	{

		cout << "\n\n\n\n\n\t\t\t\t\t-----------------Hey, here is Menu-----------------\n" << endl;
		cout << "\t\t\t\t\t\t  Press '1' : Add New Student"<<endl;
		cout << "\t\t\t\t\t\tPress '2' : Student Information" << endl;
		cout << "\t\t\t\t\t\t\tPress '3' : Exit " << endl;
		cout << "\n\t\t\t\t\t-----------------*****************-----------------\n" << endl;
		get_input("\t\t\t\t\t\t   Please enter the input: ", menu1);
		system("CLS");

	
			switch (menu1) {
			case 1: {
				count = 'y';
				while (count == 'y' || count == 'Y') {
					string firstName, lastName, DOB, gender;
					string email, address, city, provience, postalCode;
					int phone, id;
					string cName, course, campus;
					cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
					get_input("Enter the ID as minimum of 8 number: ", id);
					cout << "\t\t-----------------**********-----------------\n" << endl;

					system("CLS");

					cout << "\n\n\t\t------------------PERSONAL INFORMATION------------------\n" << endl;
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
					cout << "\t\t-----------------**********-----------------\n" << endl;

					system("CLS");

					cout << "\n\n\t\t------------------College Information------------------\n" << endl;
					get_input("Enter the College Name: ", cName);
					get_input("Enter the Course: ", course);
					get_input("Enter the Campus", campus);
					cout << "\t\t-----------------**********-----------------\n" << endl;

					system("CLS");
				
					CollegeI college(cName, course, campus, id);
					colleges.push_back(college);
					StudentPI student(firstName, lastName, DOB, gender, email, phone, address, city, provience, postalCode, id);
					students.push_back(student);
					cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
					get_input("\t\tWOULD YOU LIKE TO ADD ANOTHER STUDENT 'Y' or 'N' ", count);
					cout << "\t\t-----------------**********-----------------\n" << endl;
					system("CLS");
				}
				system("CLS");
				break;
			}
			case 2: {
				char checkMenu2 = 'y';
				cout << "\n\n\n\n\n\n\t\t\t\t-----------------**********-----------------\n" << endl;
				get_input("\t\t\t\t\tPlease enter the student id", id);
				cout << "\t\t\t\t-----------------**********-----------------\n" << endl;
				system("CLS");
				while (checkMenu2 == 'y' || checkMenu2 == 'Y') {
					for (int i = 0; i < students.size(); i++) {
						if (students[i].Get_ID() == id && colleges[i].Get_Cid()) {
							Get_Menu2();
						
							get_input("\t\t\t\t\t\t   Please enter the input: ", menu2);
							system("CLS");

							switch (menu2) {
								case 1: {
									char checkMenu3 = 'y';

									while (checkMenu3 == 'y' || checkMenu3 == 'Y') {

										students[i].OutputStudent();
										colleges[i].OutputCollege();

										Get_Menu3();
										get_input("\t\t\t   Please enter the input: ", menu3);

										system("CLS");

										switch (menu3) {
											case 1: {
												string FirstName;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\t\t\tEnter the First Name: ", FirstName);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_FirstName(FirstName);
												system("CLS");
												break;
											}
											case 2: {
												string LastName;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the last Name: ", LastName);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_LastName(LastName);
												system("CLS");
												break;
											}
											case 3: {
												string DOB;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Date Of Birth in Format dd/mm/yyyy: ", DOB);
												cout << "\t\t-----------------**********-----------------\n" << endl;
												students[i].Set_DateOB(DOB);
												system("CLS");
												break;
											}
											case 4: {
												string gender;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Gender F for(female) and M for(Male): ", gender);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_Gender(gender);
												system("CLS");
												break;
											}
											case 5: {
												string email;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Email: ", email);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_Email(email);
												system("CLS");
												break;
											}
											case 6: {
												int phone;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Phone Number in form xxx-xxx-xxxx", phone);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_Phone(phone);
												system("CLS");
												break;
											}
											case 7: {
												string address;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Address: ", address);	
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_Address(address);
												break;
											}
											case 8: {
												string city;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the City: ", city);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_City(city);
												break;
											}
											case 9: {
												string provience;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Provience: ", provience);
												cout << "\t\t-----------------**********-----------------\n" << endl;
												students[i].Set_Provience(provience);
												system("CLS");
												break;
											}
											case 10: {
												string postalCode;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Postal Code: ", postalCode);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												students[i].Set_PostalCode(postalCode);
												system("CLS");
												break;
											}
											case 11: {
												string cName;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the College Name: ", cName);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												colleges[i].Set_CName(cName);
												system("CLS");
												break;
											}
											case 12: {
												string course;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Course: ", course);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												colleges[i].Set_Course(course);
												system("CLS");
												break;
											}
											case 13: {
												string campus;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the Campus", campus);
												cout << "\t\t-----------------**********-----------------\n" << endl;
												colleges[i].Set_Campus(campus);
												system("CLS");
												break;
											}
											case 14: {
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tDO YOU WANT TO EDIT ANYTHING ELSE 'Y' or 'N'", checkMenu3);
												cout << "\t\t-----------------**********-----------------\n" << endl;

												system("CLS");
												break;
											}
											default: {
												break;
											}
										}
									}
									break;
								}
								case 2: {
									break;
								}
								case 3: {
									break;
								}
								case 4: {
									cout << "\t\t------------------Information On " << students[i].Get_FirstName() << "------------------\n" << endl;
									students[i].OutputStudent();
									colleges[i].OutputCollege(); 
									get_input("\n\t\t    Press Y to continue", inpt);
									break;
									system("CLS");
								}
								case 5: {
									cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
									get_input("\t\tDo You WANT TO GO TO MENU2 'Y' or 'N'", checkMenu2);
									cout << "\t\t-----------------**********-----------------\n" << endl;
									break;
								}
								default: {
									break;
								}
							}
						}
					}
					cout << "No Such Student with ID '" << id << "' Found" << endl;
					system("CLS");
				}
				system("CLS");
				break;
			}
			case 3: {
				cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
				get_input("\t\tDO YOU WANT TO GO TO MENU1 'Y' or 'N'", Menu1);
				cout << "\t\t-----------------**********-----------------\n" << endl;
				break;
			}
			default: {
				break;
			}
			}
			system("CLS");
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
	cout << "\n\n\t\t-----------------Personal Information-----------------\n" << endl;
	cout << "\t\t\tThe Student Id is : " << Get_ID() << endl;
	cout << "\t\t\tName: " << Get_FirstName() << " " << Get_LastName() << endl;
	cout << "\t\t\tDate of Birth: " << Get_DateOB() << endl;
	cout << "\t\t\tGender: " << Get_Gender() << endl;
	cout << "\t\t\tPhone Number: " << Get_Phone() << endl;
	cout << "\t\t\tEmail: " << Get_Email() << endl;
	cout << "\t\t\tAddress: " << Get_Address() << endl;
	cout << "\t\t\tCity: " << Get_City() << endl;
	cout << "\t\t\tProvience:" << Get_Provience() << endl;
	cout << "\t\t\tPostal Code: " << Get_PostalCode() << endl;
	cout << "\t\t-----------------**********-----------------\n" << endl;
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
	cout << "\n\n\t\t-----------------College Information-----------------\n" << endl;
	cout << "\t\t\tCollege Name: " << Get_CName() << endl;
	cout << "\t\t\tCourse: " << Get_Course() << endl;
	cout << "\t\t\tCampus: " << Get_Campus() << endl;
	cout << "\t\t-----------------**********-----------------\n" << endl;
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