
#include <iostream>
#include <string>
#include<vector>
#include < stdlib.h >
#include "StudentPI.h"
#include "CollegeI.h"

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

struct Subject{
	vector<string> subject;
	int sid;

	void OutputSubject()
	{

		if (!subject.empty())
		{
			cout << "\n\n\t\t-----------------Subjects Enroled-----------------\n" << endl;
			for (int i = 0; i < subject.size(); i++)
			{
				cout << "\t\t\t subject " <<i+1<<": "<< subject[i] << endl;
			}
			cout << "\n\t\t-----------------**********-----------------\n" << endl;
		}
	}

	void ADD_Subject(vector<string> sub) {
		string subjects;
		for (int i = 0; i < sub.size(); i++) {
			subjects = sub[i];
			subject.push_back(subjects);
		}
	}
	void Set_Subject(string subjects, int n) {
			subject[n] = subjects;
		
	}
	void Delete_Subject(int n) {
		subject.erase(subject.begin() + n);
	}
	string Get_Subject(int n) {
		return subject[n];
	}
	int Vector_Size() {
		return subject.size();
	}
};

struct Grade {
	vector <float> grade;
	int gid;

	void OutputGrade(vector<Subject> subject, int n)
	{

		if (!grade.empty())
		{
			
			cout << "\n\n\t\t-----------------Grades Available-----------------\n" << endl;
			for (int i = 0; i < grade.size(); i++)
			{
				cout << "\t\t\t  Grade For Subject " <<i+1<< " is: "<<grade[i] << endl;
			}
			cout << "\n\t\t-----------------**********-----------------\n" << endl;
		}
	}

	void Set_Grade(vector<float> gra) {
		float grades;
		for (int i = 0; i < gra.size(); i++) {
			grades = gra[i];
			grade.push_back(grades);
		}
	}
	void Set_Gra(float grades, int n) {
		grade[n] = grades;
	}
	void Delete_Grade(int n) {
		grade.erase(grade.begin() + n);
	}
	float Get_Grade(int n) {
		return grade[n];
	}
	
	int GradeVector_Size() {
		return grade.size();
	}
	
};



void Get_Menu2() {
cout << "\n\n\n\n\n\t\t\t\t\t-----------------Hey, What You are up to-----------------\n" << endl;
cout << "\t\t\t\t\t\t    Press '1' : Edit Student" << endl;
cout << "\t\t\t\t\t\t    Press '2' : Add Subjects" << endl;
cout << "\t\t\t\t\t\t    Press '3' : Edit Subjects " << endl;
cout << "\t\t\t\t\t\t    Press '4' : Delete Subjects " << endl;
cout << "\t\t\t\t\t\t    Press '5' : Add Grade " << endl;
cout << "\t\t\t\t\t\t    Press '6' : Edit Grade " << endl;
cout << "\t\t\t\t\t	    Press '7' : Student Information " << endl;
cout << "\t\t\t\t\t	    Press '8' : Exit " << endl;
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
	cout << "\t\tPress '14' : Change Programme " << endl;
	cout << "\t\tPress '15' : Exit " << endl;
	cout << "\n\t\t-----------------*****************-----------------\n" << endl;
}

int main() {

	vector<StudentPI> students;
	vector<CollegeI> colleges;
	vector<Subject> subjectVector;
	vector<Grade> gradeVector;
	vector<string> grades;
	int id, menu1, menu2, menu3;
	char count = 'y';
	char Menu1 = 'y';
	char inpt = 'y';

	cout << "\n\n\n\n\n\t\t\t\t\t-----------------***********-----------------\n" << endl;
	cout << "\t\t\t\t\t.                  Welcome                  .\n" << endl;
	cout << "\t\t\t\t\t-----------------***********-----------------\n\n" << endl;
	get_input("\t\tPress any Key and Enter to continue!", inpt); 

	system("CLS");

	while (Menu1 == 'y' || Menu1 == 'Y')
	{

		cout << "\n\n\n\n\n\t\t\t\t\t-----------------Hey, here is Menu-----------------\n" << endl;
		cout << "\t\t\t\t\t\t  Press '1' : Add New Student"<<endl;
		cout << "\t\t\t\t\t\tPress '2' : Student Information" << endl;
		cout << "\t\t\t\t\t\t  Press '3' : Delete Student " << endl;
		cout << "\t\t\t\t\t\t\tPress '4' : Exit " << endl;
		cout << "\n\t\t\t\t\t-----------------*****************-----------------\n" << endl;
		get_input("\t\t\t\t\t\t   Please enter the input: ", menu1);
		system("CLS");

	
			switch (menu1) {
				case 1: {
					string firstName, lastName, DOB, gender, gen;
					string email, address, city, provience, postalCode;
					int phone, id;
					string cName, course, campus, Program;
					char Match = 'M';
					cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
					get_input("Enter the ID number: ", id);
					cout << "\t\t-----------------**********-----------------\n" << endl;
					system("CLS");
					if (students.empty()) {
						cout << "\n\n\t\t------------------PERSONAL INFORMATION------------------\n" << endl;
						get_input("Enter the First Name: ", firstName);
						get_input("Enter the last Name: ", lastName);
						get_input("Enter the Date Of Birth in Format dd/mm/yyyy: ", DOB);
						get_input("Enter the Gender F for(female) and M for(Male): ", gender);
						if (gender == "M" || gender == "m") {
							gen = "Male";
						}
						else if (gender == "F" || gender == "f") {
							gen = "Female";
						}
						else {
							gen = "False";
						}
						get_input("Enter the Email: ", email);
						get_input("Enter the Phone Number in form xxxxxxxxxx", phone);
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
						get_input("Enter the Programme", Program);
						cout << "\t\t-----------------**********-----------------\n" << endl;

						system("CLS");

						CollegeI college(cName, course, campus, Program, id);
						colleges.push_back(college);
						StudentPI student(firstName, lastName, DOB, gen, email, phone, address, city, provience, postalCode, id);
						students.push_back(student);
						system("CLS");
					}
					else {
						for (int i = 0; i < students.size(); i++) {
							if (id != students[i].Get_ID()) {
								Match = 'N';
							}
							else {
								Match = 'M';
							}
						}
						if (Match == 'M') {

							cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
							cout << "\t\tAlready student exist with ID '" << id << "'." << endl;
							cout << "\t\tPlease Try Again." << endl;
							cout << "\t\tPress any key and enter to continue!." << endl;
							cin >> inpt;
							cout << "\t\t-----------------**********-----------------\n" << endl;
							system("CLS");
						}
						else {
							cout << "\n\n\t\t------------------PERSONAL INFORMATION------------------\n" << endl;
							get_input("Enter the First Name: ", firstName);
							get_input("Enter the last Name: ", lastName);
							get_input("Enter the Date Of Birth in Format dd/mm/yyyy: ", DOB);
							get_input("Enter the Gender F for(female) and M for(Male): ", gender);
							if (gender == "M" || gender == "m") {
								gen = "Male";
							}
							else if (gender == "F" || gender == "f") {
								gen = "Female";
							}
							else {
								gen = "False";
							}
							get_input("Enter the Email: ", email);
							get_input("Enter the Phone Number in form xxxxxxxxxx", phone);
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
							get_input("Enter the Programme", Program);
							cout << "\t\t-----------------**********-----------------\n" << endl;

							system("CLS");

							CollegeI college(cName, course, campus, Program, id);
							colleges.push_back(college);
							StudentPI student(firstName, lastName, DOB, gen, email, phone, address, city, provience, postalCode, id);
							students.push_back(student);
							system("CLS");
						}
					
					}
				system("CLS");
				break;
				}
			case 2:  
			{
				if (!students.empty()) {
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
											string gender, gen;
											cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
											get_input("\t\tEnter the Gender F for(female) and M for(Male): ", gender);
											cout << "\t\t-----------------**********-----------------\n" << endl;
											if (gender == "M" || gender == "m") {
												gen = "Male";
											}
											else if (gender == "F" || gender == "f") {
												gen = "Female";
											}
											else {
												gen = "False";
											}
											students[i].Set_Gender(gen);
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
											string program;
											cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
											get_input("\t\tEnter the Programme : ", program);
											cout << "\t\t-----------------**********-----------------\n" << endl;
											colleges[i].Set_Programme(program);
											system("CLS");
											break;
										}
										case 15: {
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
										int ct;
										if (subjectVector.empty()) {
											ct = 0;
										}
										else {
											ct = subjectVector.size();
										}
										if (i == ct) {
											string subject;
											vector<string> subjects;
											char checksub = 'y';
											while (checksub == 'y' || checksub == 'Y') {
												cout << "\n\n\n\n\n\n\t\t\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the subject : ", subject);
												cout << "\t\t\t\t-----------------**********-----------------\n" << endl;
												subjects.push_back(subject);

												get_input("WOULD YOU LIKE TO ADD ANOTHER SUBJECT 'Y' or 'N': ", checksub);
												system("CLS");
											}
											Subject sub{ subjects, id };
											subjectVector.push_back(sub);
										}
										else {
											char checksub1 = 'y';
											string subject1;
											vector<string> subjects1;
											while (checksub1 == 'y' || checksub1 == 'Y') {
												cout << "\n\n\n\n\n\n\t\t\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the subject : ", subject1);
												cout << "\t\t\t\t-----------------**********-----------------\n" << endl;
												subjects1.push_back(subject1);

												get_input("WOULD YOU LIKE TO ADD ANOTHER SUBJECT 'Y' or 'N': ", checksub1);
												system("CLS");
											}
											subjectVector[i].ADD_Subject(subjects1);
											system("CLS");
										}
									system("CLS");
									break;
								}
								case 3: {
									if (!subjectVector.empty()) {
										int getinput;
										cout << "\t\t-----------------*****************-----------------\n" << endl;
										int n = 0;
										for (n; n < subjectVector[i].Vector_Size(); n++) {
											cout << "Press " << n + 1 << ": to change subject: (" << subjectVector[i].Get_Subject(n) << ")" << endl;
										}
										cout << "Press " << n + 1 << " Exit: " << endl;
										cout << "\t\t-----------------*****************-----------------\n" << endl;
										get_input("\t\tEnter The Input", getinput);


										int j = 0;
										for (j; j < subjectVector[i].Vector_Size(); j++) {
											if (getinput == j + 1) {
												string subject;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the subject : ", subject);
												cout << "\t\t-----------------**********-----------------\n" << endl;
												subjectVector[i].Set_Subject(subject, j);
												system("CLS");
											}
										}
									}
									else {
										cout << "\t\t-----------------**********-----------------\n" << endl;
										cout << "\t\tNo subjects available! Please enter one First!\n" << endl;
										cout << "\t\t-----------------**********-----------------\n" << endl;
										get_input("\t\tPress any Key and Enter to continue!", inpt);
									}
									system("CLS");
									break;
								}
								case 4: {
									if (!subjectVector.empty()) {
										int getinput;
										cout << "\t\t-----------------*****************-----------------\n" << endl;
										int n = 0;
										for (n; n < subjectVector[i].Vector_Size(); n++) {
											cout << "Press " << n + 1 << ": to delete subject: (" << subjectVector[i].Get_Subject(n) << ")" << endl;
										}
										cout << "Press " << n + 1 << " Exit: " << endl;
										cout << "\t\t-----------------*****************-----------------\n" << endl;
										get_input("\t\tEnter The Input", getinput);


										int j = 0;
										for (j; j < subjectVector[i].Vector_Size(); j++) {
											if (getinput == j + 1) {
												if (!gradeVector.empty()) {
													if (subjectVector[i].Vector_Size() == gradeVector[i].GradeVector_Size()) {
														gradeVector[i].Delete_Grade(j);
													}
												}
												subjectVector[i].Delete_Subject(j);
												system("CLS");
											}
										}
									}
									else {
										cout << "\t\t-----------------**********-----------------\n" << endl;
										cout << "\t\tNo subjects available! Please enter one First!\n" << endl;
										cout << "\t\t-----------------**********-----------------\n" << endl;
										get_input("\t\tPress any Key and Enter to continue!", inpt);
									}
									system("CLS");
									break; 
								}
								case 5: {
									if (!subjectVector.empty()) {
										int ct;
										if (gradeVector.empty()) {
											ct = 0;
										}
										else {
											ct = gradeVector.size();
										}
										
										if (i == ct) {
											vector<float> grades;
											float grade;
											char checkgra = 'y';

											for (int n = 0; n < subjectVector[i].Vector_Size(); n++) {
												cout << "\n\n\n\n\n\n\t\t\t\t-----------------**********-----------------\n" << endl;
												cout << "\t\tWould you like to add Grade for Subject 'Y' or 'N': (" << subjectVector[i].Get_Subject(n) <<")"<< endl;
												cin >> checkgra;

												if (checkgra == 'y' || checkgra == 'Y') {
													get_input("\t\tEnter the grade : ", grade);
													cout << "\t\t\t\t-----------------**********-----------------\n" << endl;
													grades.push_back(grade);
												}
												else {
													grade = 0;
													grades.push_back(grade);
												}
											}
											Grade gra{ grades, id };
											gradeVector.push_back(gra);
											system("CLS");
										}
										else {
											vector<float> grades1;
											float grade1;
											char checkgra1 = 'y';
											
											int n = 0;
											int gradeSize, subjectSize, useSize;
											gradeSize = gradeVector[i].GradeVector_Size();
											subjectSize = subjectVector[i].Vector_Size();
											useSize = subjectSize - gradeSize;
											if (gradeSize == subjectSize) {
												cout << "\t\t-----------------**********-----------------\n" << endl;
												cout << "\t\tGrades already Available! Please go to Edit Grades to Change!\n" << endl;
												cout << "\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tPress any Key and Enter to continue!", inpt);
											}
											else {												
												for (int n = 0; n < useSize; n++) {
													cout << "\n\n\n\n\n\n\t\t\t\t-----------------**********-----------------\n" << endl;
													int p = gradeSize + n;
													cout << "\t\tWould you like to add Grade for Subject 'Y' or 'N': (" << subjectVector[i].Get_Subject(p) <<")"<< endl;
													cin >> checkgra1;

													if (checkgra1 == 'y' || checkgra1 == 'Y') {
														get_input("\t\tEnter the grade : ", grade1);
														cout << "\t\t\t\t-----------------**********-----------------\n" << endl;
														grades1.push_back(grade1);		
													}
													else {
														grade1 = 0.0;
														grades1.push_back(grade1);
														cout << "\n grades vector : " << grades1[0] << endl;
													}
													}
												gradeVector[i].Set_Grade(grades1);
												system("CLS");
											}
										}
									}
									else {
										cout << "\t\t-----------------**********-----------------\n" << endl;
										cout << "\t\tNo subjects available! Please enter one First!\n" << endl;
										cout << "\t\t-----------------**********-----------------\n" << endl;
										get_input("\t\tPress any Key and Enter to continue!", inpt);
									}
									break;
								}
								case 6: {
									if (!gradeVector.empty()) {
										int getinput;
										cout << "\t\t-----------------*****************-----------------\n" << endl;
										int n = 0;
										for (n; n < gradeVector[i].GradeVector_Size(); n++) {
											cout << "\t\tPress " << n + 1 << ": to change Grade: '" << gradeVector[i].Get_Grade(n) << "' For Subject: (" << subjectVector[i].Get_Subject(n) << ")" << endl;
										}
										cout << "\t\tPress " << n + 1 << " Exit: " << endl;
										cout << "\t\t-----------------*****************-----------------\n" << endl;
										get_input("\t\tEnter The Input", getinput);


										int j = 0;
										for (j; j < gradeVector[i].GradeVector_Size(); j++) {
											if (getinput == j + 1) {
												float grade;
												cout << "\n\n\t\t-----------------**********-----------------\n" << endl;
												get_input("\t\tEnter the grade : ", grade);
												cout << "\t\t-----------------**********-----------------\n" << endl;
												gradeVector[i].Set_Gra(grade, j);
												system("CLS");
											}
										}
									}
									else {
										cout << "\t\t-----------------**********-----------------\n" << endl;
										cout << "\t\tNo Grades available! Please enter one First!\n" << endl;
										cout << "\t\t-----------------**********-----------------\n" << endl;
										get_input("\t\tPress any Key and Enter to continue!", inpt);
									}
									system("CLS");
									break;
								}
								case 7: {
									cout << "\t\t------------------Information On " << students[i].Get_FirstName() << "------------------\n" << endl;
									students[i].OutputStudent();
									colleges[i].OutputCollege();
									if (!subjectVector.empty()) {
										subjectVector[i].OutputSubject();
									}
									if (!gradeVector.empty()) {
										gradeVector[i].OutputGrade(subjectVector, i);
									}

									get_input("\t\tPress any Key and Enter to continue!", inpt);
									break;
									system("CLS");
								}
								case 8: {
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
				}
				else {
					cout << "\t\t-----------------**********-----------------\n" << endl;
					cout << "\t\tNo students available! Please enter one First!\n " << endl;
					cout << "\t\t-----------------**********-----------------\n" << endl;
					get_input("\t\tPress any Key and Enter to continue!", inpt);
				}
				system("CLS");
				break;
			}
			case 3: {
				if (!students.empty()) {
					int getinput;
					cout << "\t\t-----------------*****************-----------------\n" << endl;
					int n = 0;
					for (n; n < students.size(); n++) {
						cout << "Press " << n + 1 << ": to delete subject: (" << students[n].Get_ID() << ")" << endl;
					}
					cout << "Press " << n + 1 << " Exit: " << endl;
					cout << "\t\t-----------------*****************-----------------\n" << endl;
					get_input("\t\tEnter The Input", getinput);


					int j = 0;
					for (j; j < students.size(); j++) {
						if (getinput == j + 1) {
							students.erase(students.begin() + j);
							system("CLS");
						}
					}
				}
				else {
					cout << "\t\t-----------------**********-----------------\n" << endl;
					cout << "\t\tNo students available! Please enter one First!\n" << endl;
					cout << "\t\t-----------------**********-----------------\n" << endl;
					get_input("\t\tPress any Key and Enter to continue!", inpt);
				}
				system("CLS");
				break;
			}
			case 4: {
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
	cout << "\n\t\t-----------------**********-----------------\n" << endl;
}

// college class
// constructor 
CollegeI::CollegeI(string CName, string Course, string Campus, string Program, int ID) {
	Set_CName(CName);
	Set_Course(Course);
	Set_Campus(Campus);
	Set_Programme(Program);
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
void CollegeI::Set_Programme(string Programme) {
	programme = Programme;
}
string CollegeI::Get_Programme() {
	return programme;
}

//methods
void CollegeI::OutputCollege() {
	cout << "\n\n\t\t-----------------College Information-----------------\n" << endl;
	cout << "\t\t\tCollege Name: " << Get_CName() << endl;
	cout << "\t\t\tCourse: " << Get_Course() << endl;
	cout << "\t\t\tCampus: " << Get_Campus() << endl;
	cout << "\t\t\tProgramme: " << Get_Programme() << endl;
	cout << "\n\t\t-----------------**********-----------------\n" << endl;
}
