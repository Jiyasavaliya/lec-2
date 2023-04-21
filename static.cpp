#include <iostream>


using namespace std;

class Hotel {
private:
    int hotel_id;
    char hotel_name;
    char hotel_type;
    char hotel_rating;
    char hotel_location;
    int hotel_establish_year;
	int hotel_staff;
   	char hotel_room_quantity;
public:
    void setHotel(int id, char name, char type, char rating, char location, int establish_year, int staff_quantity, char room_quantity) {
        hotel_id = id;
        hotel_name = name;
        hotel_type = type;
        hotel_rating = rating;
        hotel_location = location;
        hotel_establish_year = establish_year_quantity;
	    hotel_staff = staff;
   	    hotel_room_quantity = hotel_room_quantity;    
    }
    void displayHotel() {
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel rating: " << hotel_rating << endl;
        cout << "Hotel location: " << hotel_location << endl;
        cout << "Hotel establish_year_quantity: " << hotel_establish_year_quantity << endl;
        cout << "Hotel staff : " << hotel_staff << endl;
        cout << "Hotel hotel_room_quantity: " << hotel_hotel_room_quantity << endl;
        
    }
};

int main() {
    int n;
    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel hotels[n];

    for (int i = 0; i < n; i++) {
        int id;
        string name, type;
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
	    cout << "Enter hotel establish_year_quantity: ";
        cin >> establish_year_quantity;
	    cout << "Enter hotel staff: ";
        cin >> staff;
	    cout << "Enter hotel_room_quantity: ";
        cin >> hotel_room_quantity;
	
    }

    for (int i = 0; i < n; i++) {
    }

    return 0;
}
