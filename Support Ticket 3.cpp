// Support Ticket 3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Ticket {

private:
	int id;
	string issueStatus;
	string issueType;
	string issuePriority;
	string callerName;
	string descriptionofIssue;
	int numberofusersimpacted;

public:

	Ticket() {
		id = 0;
		issueStatus = "";
		issueType = "";
		issuePriority = "";
		callerName = "";
		descriptionofIssue = "";
		numberofusersimpacted = 0;
	}
	Ticket(int a, string b, string c, string d, string e, string f, int g) {
		a = id;
		b = issueStatus;
		c = issueType;
		d = issuePriority;
		e = callerName;
		f = descriptionofIssue;
		g = numberofusersimpacted;
	}

	void ShowTicket() {
		cout << "CustomerName: " + callerName << endl;
		cout << "Type: " + issueType << endl;
		cout << "Descriptions: " + descriptionofIssue << endl;
		cout <<"Number of Users Impacted " + numberofusersimpacted << endl;
	}
	void  CaptureTicket(string z, string y, string x, string w, string v, int u) {
		string issueStatus = z;
		string issueType = y;
		string issuePriority = x;
		string callerName = w;
		string descriptionofIssue = v;
		int numberofusersimpacted = u;
	}
	string CloseTicket() { issueStatus = "Closed"; }
};

int main()
{
	Ticket stackofTickets[100];

	int count = 100;
	int j = 0;
	char quit = 'a';
	string stoper = "one";

	while (count>0 && quit != 'n') {
		int i = 0;
		string name;
		string issue;
		string description;
		int arraycount = 0;
		int usersaffected;
		int id = count - (count - 1);
		string status = "open";
		string theprioritylevel;

		cout << "Please enter Name";
		cin >> name;
		cout << "please enter type of issue (server,application,access)";
		cin >> issue;
		cout << "please enter Description";
		cin >> description;
		cout << "Please enter number of users affected by the issue";
		cin >> usersaffected;


		if (usersaffected < 10) { theprioritylevel = "low"; }
		if (usersaffected = 10) { theprioritylevel = "medium"; }
		if (usersaffected < 10) { theprioritylevel = "high"; }

		cout << "it works till assigning the ticket to the array" << endl;

		
		stackofTickets[i].CaptureTicket(status, issue, theprioritylevel, name, description, usersaffected);


		count--;
		i++;

		cout << "Would you like to input another ticket any key for yes  n for no" << endl;
		cin >> quit;

	}
	while (j < 10 ) {
		
		stackofTickets[j].ShowTicket();
		j++;
	}

	cout << "these should be all the support tickets" << endl;
	cin >> quit;

	return 0;
}

