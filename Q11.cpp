#include <iostream>
using namespace std;

class class_2;
class class_1{
	int num1;
public:
	class_1(){};
	void get_value_firstClass(){
		cout<<"Enter the value for Private Data Member of Class 1"<<endl;
		cin>>num1;
	}
	friend void swap(class_1&,class_2&);
	void display_class1(){
		cout<<"Class 1 = "<<num1<<endl;
	}
};

class class_2{
	int num2;
public:
	class_2(){};
	void get_value_secClass(){
		cout<<"Enter the value for Private Data Member of Class 2"<<endl;
		cin>>num2;
	}
	friend void swap(class_1&,class_2&);
	void display_class2(){
			cout<<"Class 2 = "<<num2<<endl;
		}
};

void swap(class_1 &a,class_2 &b){
	int temp;
	temp=a.num1;
	a.num1=b.num2;
	b.num2=temp;
}

int main() {
	class_1 obj1;
	class_2 obj2;
	obj1.get_value_firstClass();
	obj2.get_value_secClass();
	cout<<"Before Swapping"<<endl;
	obj1.display_class1();
	obj2.display_class2();
	swap(obj1, obj2);
	cout<<"\nAfter Swapping"<<endl;
	obj1.display_class1();
	obj2.display_class2();
	return 0;
}
