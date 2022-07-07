#include <iostream>
using namespace std;
#include <string>
class Passenger
{
	string email, name, passkey;
	int nom_of_tickets;

public:
	Passenger(string, string, string);
	void view_reservation();
	void edit_reservation();
	void reserve(string,string,string,string);
};

