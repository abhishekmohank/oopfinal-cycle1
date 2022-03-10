#include <iostream>
#include <limits>
using namespace std;

class student{
	std::string name;
	int roll_no;
	float mark1,mark2,mark3,marks;
	char grade;

	public:
		void input();
		char calcGrade(float,float,float);
		void display();
};

void student::input(){
	std::cout<<"******************************\n";
	std::cout<<"Enter the Student Name : ";
	std::cin>>name;
	std::cout<<"Enter the Roll No : ";
	std::cin>>roll_no;
	std::cout<<"Enter the Marks for Subject 1 : ";
	std::cin>>mark1;
	std::cout<<"Enter the Marks for Subject 2 : ";
	std::cin>>mark2;
	std::cout<<"Enter the Marks for Subject 3 : ";
	std::cin>>mark3;
	std::cout<<"\n******************************\n";
}

char student::calcGrade(float mark1,float mark2,float mark3){

	marks = (mark1+mark2+mark3)/3;

	if(marks>=90){
		grade='A';
	}
	else if(marks>=80 and marks<90){
		grade='B';
	}
	else if(marks>=70 and marks<80){
		grade='C';
	}
	else if(marks>=60 and marks<70){
		grade='D';
	}
	else if(marks>=50 and marks<60){
		grade='E';
	}
	else{
		grade='F';
	}
	return grade;
}

void student::display(){
	std::cout<<"Student : "<<name;
	std::cout<<"\nThe Grade is "<<calcGrade(mark1,mark2,mark3)<<std::endl;
}

int main() {
	int choice = 1;
	do{
		student Student1;
		Student1.input();
		Student1.display();
		std::cout<<"\nDo you want to continue \n1.Continue\n2.Quit"<<std::endl;
		std::cin>>choice; 
	} while(choice == 1);
	return 0;
}