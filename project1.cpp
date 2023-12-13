#include<iostream>
#include<fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct friend
{
	char first_name[50];
	char middle_name[50];
	char last_name;
	int age;
	char address[100];
	char telephone[50];
	
	struct friend *next;
};

int main(){
	
	// Open a txt file, write data there
	
	// Show menu
	while(1){
		
		system("cls");
		cout<<"**********Friends of Bela**********";
		cout<<"1) Add a friend";
		cout<<"2) Delete a friend";
		cout<<"3) Show all friends";
		cout<<"4) Search a friend";
		cout<<"5) Edit a friend";
		cout<<"6) Delete all friends";
		cout<<"7) Exit Bela's phonebook"
		
		cout<<"Choose a number from the menu";
		gets(buff);
		ch		
		
		// Add a friend
			// Ask user for the details respectively
		
		// Delete a friend
			// Ask user for the last name, use strcmp to find it
			// free that name
				
		// Show all entries
			// Sort all friends using their last names
			
		// Search an entry
			// Ask user for a last name, use strcmp to find it
			
		// Edit an entry
			// Ask user for his friend's surname
			// Ask the same details in #1, simply override it
			
		// Delete all entries
			// Free all until head == NULL
		
		// Exit
		//system("pause");
		
	}
		
	// Close file
	return 0;
}
