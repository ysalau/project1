#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;


struct Friend {
	// char first_name[50];
	// char middle_name[50];
	// char last_name[50];
	int age;
	// char address[100];
	// char telephone[50];
	
	struct Friend *next;
};

void insertNode(Friend*& head, int age) ;
int saveToFile(string filename, Friend* head);

int main(){
	
	// Open a txt file, write data there
	
	// Show menu
	// while(1){
		
	// 	system("cls");
	// 	cout<<"**********Friends of Bela**********";
	// 	cout<<"1) Add a friend";
	// 	cout<<"2) Delete a friend";
	// 	cout<<"3) Show all friends";
	// 	cout<<"4) Search a friend";
	// 	cout<<"5) Edit a friend";
	// 	cout<<"6) Delete all friends";
	// 	cout<<"7) Exit Bela's phonebook";
		
	// 	cout<<"Choose a number from the menu";
	// 	gets(buff);
	// 	ch		
		
	// 	// Add a friend
	// 		// Ask user for the details respectively
		
	// 	// Delete a friend
	// 		// Ask user for the last name, use strcmp to find it
	// 		// free that name
				
	// 	// Show all entries
	// 		// Sort all friends using their last names
			
	// 	// Search an entry
	// 		// Ask user for a last name, use strcmp to find it
			
	// 	// Edit an entry
	// 		// Ask user for his friend's surname
	// 		// Ask the same details in #1, simply override it
			
	// 	// Delete all entries
	// 		// Free all until head == NULL
		
	// 	// Exit
	// 	//system("pause");
		
	// }
	
	// Close file
	Friend* head;
	head = nullptr;
	
	insertNode(head, 23);
	insertNode(head, 34);
	insertNode(head, 64);
	insertNode(head, 83);
	insertNode(head, 75);
	
	saveToFile("someFileName.txt", head);

	std::cout << "Press Enter to continue...";
    std::cin.ignore(); // This will wait for the user to press Enter
	return 0;
}

void insertNode(Friend*& head, int age) 
{ 
	// Create the new Node. 
	//Node* newNode = new Node(data); 
	//cout<<"1"<<endl;
	Friend* newfriend = new Friend;
	//cout<<"2"<<endl;
	newfriend->age = age;
	newfriend->next = NULL;
	//cout<<"3"<<endl;
	// Assign to head 
	if (head == NULL) {
		//cout<<"4"<<endl; 
		head = newfriend; 
		return; 
	} 
	//cout<<"5"<<endl;
	// Traverse till end of list 
	Friend* temp = head;
	//cout<<"6"<<endl;
	while (temp->next != NULL) { 
		//cout<<"7"<<endl;
		// Update temp 
		temp = temp->next; 
	} 

	// Insert at the last. 
	//cout<<"8"<<endl;
	temp->next = newfriend;
	//cout<<"9"<<endl;
} 

int saveToFile(string filename, Friend* head) {

	Friend* temp;

	temp = head;

	// Check for empty list. 
	if (head == NULL) { 
		cout << "List empty" << endl; 
		return 0;
	} 

	// Traverse the list. 
	while (temp != NULL) { 
		cout << temp->age << "\n"; 
		temp = temp->next; 
	}
	return 0;
}
