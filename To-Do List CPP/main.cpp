/** 
 *	This program creates a list that allows a user to enter, chance and delete tasks
 *
 * @author Kyle Fedalen
 * @version 1/20/20
 */ 
#include <iostream>

using namespace std;
char charInput;
int intInput;
string stringInput;


/**
 *
 * the class of the List object.
 * contains all the functions and variables regarding the List class.
 *
 */
class List{
	
	private:
		int length = 0;
		static const int cap = 15;
		string list[cap];
		bool done = false;
		
		/**
		 * @return length of list
		 */
		int get_length(){
			return length;
		}
		set_length(int intInput){
			length = intInput;
		}
		/*
		 * @return string item at postiton(pos) in list
		 */
		string get_item(int pos){
			return list[pos];
		}
		/*
		 * sets an string item(item) at position(pos) in list
		 */
		void set_item(int pos,string item){
			list[pos] = item;
		}
		/*
		 * adds item to the end of list & gives an error if list length excedes array capacity
		 */
		void add_item(string item){
			if(length>=cap){
				printf("error: cannot add item, length(%d) of list excedes total Capacity(%d)\n",length,cap);
				
			}else{
				length++;	
				list[length] = item;
			}
			
		}
		/*
		* deletes item at the position(pos) in list and then moves all
		* remaining items up in the list
		*/
		void del_item(int pos){
			if(pos == 1){
				for(int i = 0;i < length;i++){
					string save = list[i+1];
					list[i] = save;
				}
				length--;
			}else if(pos == length){
				length--;
			}
			else{
				
			for(int i = length-pos;i < length;i++){
				string save = list[i];
				list[i-1] = save;
					
			}
			length--;
			}
		}
		/*
		* allows the user to enter a string item as a task at the end of the list
		*/
		void makeTask(){
							
				printf("%s","enter task:\n> ");
				cin >> stringInput;
				
				add_item(stringInput);
					
		}
		/*
		* allows the user to select the task they want to edit 
		* then enter the string item to replace the task they want to change
		*/
		void changeTask(){
			printf("%s","which task do you want to change?\n> ");
			printTasks();
			cout << "> ";
			cin >> intInput;
			printf("what do you want task %d) to say?\n> ",intInput);
			cin >> stringInput;
			set_item(intInput,stringInput);
			
		}
		/*
		* allows the user to select the task they want to delete
		*/
		void deleteTask(){
			printf("%s","which task do you want to delete?\n");
			printTasks();
			printf("%s","> ");
			cin >> intInput;
	
			if(intInput == 1){
				for(int i = 0;i < length;i++){
					string save = list[i+1];
					list[i] = save;
				}
				length--;
			}else if(intInput == length){
				length--;
			}
			else{
				
			for(int i = length-intInput;i < length;i++){
				string save = list[i];
				list[i-1] = save;
					
			}
			length--;
			}	
		}
		/*
		* print the array as a list of numbered items
		*/
		void printTasks(){
			printf("%s","List:\n");
			for(int i = 0;i< length;i++){
				cout << i+1 << "). " << get_item(i+1) << endl;	
			}
		}
		/*
		* handles the input my the user
		*/
		void menuInput(int intinput){
			
			switch(intinput){
				case 1:
					makeTask();
					break;
				case 2:
					changeTask();
					break;
				case 3:
					deleteTask();
					break;
				case 4:
					exit(0);
					break;
			}	
		}
	public:
		/*
		* the initilite
		*/
		List(int len){
			
			for(int i = 0;i<len;i++){
				makeTask();
			}
		}
		/*
		* prints the the main menu and asks the user for input
		*/
		void menu(){//print the menu
		    printf("%s","==============================\n");
		    printTasks();
			printf("%s","------------------------------\n");
			printf("%s","menu: \n");
			printf("%s","1). add task\n2). change task\n3). delete task\n4). exit\n");
			printf("%s","==============================\n> ");
			cin >> intInput;
			menuInput(intInput);
		}
};
/**
 * This is the main method for the program
 *
 * @return an integer
 */
int main() {	
	printf("%s","Welcome to the task progam\n");
	printf("%s","Please enter the number of tasks for your list.\n> ");
	cin >> intInput;
	List mylist(intInput);
	while(1){
		mylist.menu();
	}
	return 0;
}

