#include <iostream>

using namespace std;

checkage(int var,int age){
	if (var > age){
		cout << "too high, try again."<< endl;
	}
	else if(var < age){
		cout << "too low, try again." <<endl;
	}
	else if(var == age){
		cout << "You got it right!"<<endl;
	}
}

int main() {
	int var = 0;
	int age = 23;
	char yn = 0;
	
	while(age != var){
		cout << "guess a persons age" << endl;
		cout << "enter a guess: ";
		cin >> var;
		checkage(var,age);
		if(age == var){
			break;
		}else{
			cout << "try again y/n?: ";
			cin >> yn;
			if(yn == 'n'){
			break;
			}
		}	
	}
	return 0;
}
