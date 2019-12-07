#include <iostream>

using namespace std;

void change(int &x,int &y){
	int temp=0;
	temp=x;
	x = y;
	y = temp;
}
	
int main() {
	int a = 0;
	int b = 0;
	int temp = 0;
	char yorn = 0;
	
	cout << "input two intigers and the program will find the smallest" << endl;
	cout << "First intiger: "; 
	cin >> a;
	cout << "Second intiger: "; 
	cin >> b;
	
	cout << "change numbers? (Y/N)" << endl;
	cout<< ">>";
	cin>>yorn;
	if(yorn == 'Y'||yorn == 'y'){
		cout<< "enter first number: ";
		cin>>temp;
		change(a,temp);
		cout<< "enter first number: ";
		cin>>temp;
		change(b,temp);
	}
	
	
	if(a<b){
		cout << a << " is less than " << b << endl;
	}	
	if(b<a){
		cout << b << " is less than " << a << endl;
	}
	if(a==b){
		cout << a << " is equal to " << b << endl;
	}
	
	
	
	return 0;
}
