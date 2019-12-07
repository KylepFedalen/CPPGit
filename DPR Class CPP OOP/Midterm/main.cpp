#include <iostream>
#include <cstdlib>   
#include <ctime>  

using namespace std;

int choose = 0;
int var = 0;
int var2 = 0;
int var3 = 0;
float av1 = 0;
float av2 = 0;
float av3 = 0;
float av4 = 0;
float avav = 0;



int main() {
	cout << "enter 1-7 to choose the program you want to execute." << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "1. Definition of cin, cout, endl, and ; " << endl;
	cout << "2. Determine if the input integer is even(multiple of 2 use % modulus operator)" << endl;
	cout << "3. Find the average of 4 numbers input(use float type for decimals)" << endl;
	cout << "4. Find the largest of two integers input" << endl;
	cout << "5. Ask the user how many numbers he or she wants to input and then find the smallest of these numbers." << endl;
	cout << "6. Create a random number from 1 to 4, and have a message displayed for each value" << endl;
	cout << "7. Ask the user to guess how long they think the average person lives and allow them to change it if they get it wrong (use a while)." << endl;
    cout << "choose: ";
    cin >> choose;
    
    if(choose == 1){
    	cout << "cin is the " << endl;
    	cout << "cout is the" << endl;
    	cout << "endl is the" << endl;
    	cout << "; " << endl;
    	
	}
	if(choose == 2){
    	cout << "input an intiger to find out if its even" << endl;
    	cin >> var;
    	if(var%2 == 0){
    		cout << "your number is even" << endl;
		}else{
			cout << "your number is odd" << endl;
		}
	}
	if(choose == 3){
    	cout << "input 4 numbers to find the avrage" << endl;
    	cout << "input: " << endl;
		cin >> av1;
    	cin >> av2;
    	cin >> av3;
    	cin >> av4;
    	avav=(av1+av2+av3+av4)/4;
    	cout << "the avrage of the 4 variables is " << avav << endl;
	}
	if(choose == 4){
    	cout << "input two numbers to find the larger one"<< endl;
    	cout << "first var: ";
    	cin >> var;
    	cout << "second var: ";
    	cin >> var2;
    	if(var-var2>0){
    		cout << var << " is grater than " << var2;
		}else{
			cout << var << " is less than " << var2;
		}
	}
	if(choose == 5){
    	cout << "enter an amount of numbers to find the smallest of those numbers" << endl;
    	cout << "enter how many numbers you want to enter" << endl;
    	cin >> var;
    	int nument [var]; 
    	for(int i = 0;i<var;i++){
    		cin >> nument[i];
		}
		var2 = nument[0];
		for(int i = 0;i<var;i++){
			
			if(nument[i] < var2){
				var2 = nument[i];
			}
			
		}
		cout << "the smallest of the numbers entered is " << var2 << endl;
	}
	if(choose == 6){
		srand(time(0));
		int random = rand() % 4 + 1;
		switch(random){
			case 1: cout << "aww too bad" <<endl;
			case 2: cout << "try again" <<endl;
			case 3: cout << "so close" <<endl;
			case 4: cout << "nice" <<endl;
		}
		    	
	}
	if(choose == 7){
		int age = 84;
		int guess = 0;
    	cout << "guess the avrage age people live to" << endl;
    	while(guess !=age){
    		cout << "your guess: ";
			cin >> guess;
			if(guess == age){
				break;
			}
			cout<<"Too bad. Try again"<<endl;
		}
		cout << "congratulations! you got it!";
	}
	if(choose == 21){
		srand(time(0));
		int nument [4];
		for(int i=0;i<4;i++){
			nument[i] = rand() % 100 + 1;
		}
		for(int i=0;i<4;i++){
    		cout << nument[i]<<endl;
		}
	}
	return 0;
}
