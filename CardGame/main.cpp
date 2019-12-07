#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
#include <vector> // to get the vector class definition
using std::vector; // to 
using namespace std;

string toString(int val){
  	int a = val;
	stringstream ss;
	ss << a;
	string str = ss.str();
	return str;
}

class Card{
	private:
		char face; // '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A'*/
		int value; //1=null 11=j 12=Q 13=K 14=A
		char suit;
		bool inplay;
	
	public:
		Card(){
			value=-1;
			
		}
		Card(int a, int val){//suit,value
			suit = a;
			value = val;
		}
		string convertToFace(int val){
			if(val > 10 && val <14){
				switch(val){
				
				case 11:
					return "J";
					break;
				case 12:
					return "Q";
					break;
				case 13:
					return "K";
					break;
				case 14:
					return "A";
					break;
				}
			}if(val <= 10){
				return toString(value);
			}
			
		}
		int get_Val(){
			return value;
		}
		string get_Suit(){
			switch(suit){
				case 1:
					return "Dimond";
					break;
				case 2:
					return "Heart";
					break;
				case 3:
					return "Spade";
					break;
				case 4:
					return "Club";
					break;
			}
		}
		string get_Face(){
			return convertToFace(value);
		}
		int get_card(){
			return this ->get_Suit(),this -> get_Val(); // returns 2 ints (x,y) x=suit 1-4 y=value 2-14
		}
		void printCard(){
			cout << "testcard: " << "suit: "<< this -> get_Suit() << ", Face: " << this -> get_Face() << endl;;
		}
};

class Deck{
	private:
	
	public:	
	Deck(){
		std::vector<Card> cards;
		for(int i = 1; i < 5;i++){
			for(int j = 2; i < 15;i++){
				cards.push_back(Card(i,j));//https://en.cppreference.com/w/cpp/container/vector
			}
		}
	}
	void print_deck(){
		cout << cards[1] << endl;
	}
	void Shuffel(){
		
	}
	void Deal(int amount){//function to deal off the dop of the deck
		
	}
}; 


class Hand{
	private:
		int handmax;
		
	public:
		Hand(){//default constructor
			handmax = 5;
		}
		Hand(int max){
			handmax = max;
		}
		getHandmax(){
			return handmax;
		}
};

int main() {
	
	//cout << toString(10) << endl;
	
	
	
	Card testcard(2,10);
	Card testcard2(4,12);
	
	Deck testdeck();
	
	
	testcard.printCard();
	testcard2.printCard();
	
	cout << testdeck.print_deck();
	
	
	
	return 0;
}
