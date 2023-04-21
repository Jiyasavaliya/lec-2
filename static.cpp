#include<iostream>
using namespace std;

class Hotel {
private:
    int hotel_id;
    char hotel_name;
    char hotel_type;
    char hotel_rating;
    char hotel_location;
    int hotel_establish_year;
	int hotel_staff_quantity;
   	char hotel_room_quantity;
public:
    void  hotel(int id, char name, char type, char rating, char location, int establish_year, int staff_quantity, char room_quantity) {
        hotel_id = id;
        hotel_name = name;
        hotel_type = type;
        hotel_rating = rating;
        hotel_location = location;
        hotel_establish_year = establish_year;
	    hotel_staff_quantity = staff_quantity;
   	    hotel_room_quantity = hotel_room_quantity;    
    }
    void hotel() {
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel rating: " << hotel_rating << endl;
        cout << "Hotel location: " << hotel_location << endl;
        cout << "Hotel establish_year_quantity: " << hotel_establish_year << endl;
        cout << "Hotel staff : " << hotel_staff_quantity << endl;
        cout << "Hotel hotel_room_quantity: " << hotel_room_quantity << endl;
        
    }
};

int main() {
    int n;
    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel hotels[n];

    for (int i = 0; i < n; i++) {
        int id;
        string name, type, rating, location, establish_year, staff_quantity, room_quantity;
        cout << "Enter hotel ID: ";
        cin >> id;
        cout << "Enter hotel name: ";
        cin >> name;
        cout << "Enter hotel type: ";
        cin >> type;
	    cout << "Enter hotel rating: ";
        cin >> rating;
	    cout << "Enter hotel location: ";
        cin >> location;
	    cout << "Enter hotel establish year: ";
        cin >> establish_year;
	    cout << "Enter hotel staff quantity: ";
        cin >> staff_quantity;
	    cout << "Enter hotel room quantity: ";
        cin >> room_quantity;
	
    }

    for (int i = 0; i < n; i++) {
    }

    return 0;
}
