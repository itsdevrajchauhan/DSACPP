#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct Train
{
    int trainNo;
    string trainName;
    int seatsAvailable;
};

struct Ticket
{
    string passengerName;
    int trainNo;
};

vector<Train> trains = {
    {101, "Express A", 50},
    {102, "Express B", 40},
    {103, "Express C", 30}};

vector<Ticket> tickets;

// -------- File Handling Functions --------
void loadTickets()
{
    ifstream file("tickets.txt");
    if (!file)
        return;
    Ticket t;
    while (file >> t.trainNo)
    {
        file.ignore(); // ignore whitespace
        getline(file, t.passengerName);
        tickets.push_back(t);
        // Decrease seat count in trains
        for (auto &train : trains)
            if (train.trainNo == t.trainNo)
                train.seatsAvailable--;
    }
    file.close();
}

void saveTickets()
{
    ofstream file("tickets.txt");
    for (auto &t : tickets)
        file << t.trainNo << " " << t.passengerName << endl;
    file.close();
}

// -------- Core Functions --------
void showTrains()
{
    cout << "\nAvailable Trains:\n";
    for (auto &t : trains)
    {
        cout << "Train No: " << t.trainNo
             << ", Name: " << t.trainName
             << ", Seats Available: " << t.seatsAvailable << endl;
    }
}

void bookTicket()
{
    Ticket t;
    cout << "Enter Passenger Name: ";
    cin.ignore();
    getline(cin, t.passengerName);

    cout << "Enter Train Number: ";
    cin >> t.trainNo;

    for (auto &train : trains)
    {
        if (train.trainNo == t.trainNo)
        {
            if (train.seatsAvailable > 0)
            {
                train.seatsAvailable--;
                tickets.push_back(t);
                saveTickets();
                cout << "Ticket booked successfully for " << t.passengerName << " on " << train.trainName << "!\n";
                return;
            }
            else
            {
                cout << "Sorry! No seats available on this train.\n";
                return;
            }
        }
    }
    cout << "Invalid Train Number!\n";
}

void showTickets()
{
    if (tickets.empty())
    {
        cout << "No tickets booked yet.\n";
        return;
    }
    cout << "\nBooked Tickets:\n";
    for (auto &t : tickets)
        cout << "Passenger Name: " << t.passengerName << ", Train No: " << t.trainNo << endl;
}

void cancelTicket()
{
    string name;
    cout << "Enter Passenger Name to cancel: ";
    cin.ignore();
    getline(cin, name);

    for (auto it = tickets.begin(); it != tickets.end(); ++it)
    {
        if (it->passengerName == name)
        {
            // Increase seat count in train
            for (auto &train : trains)
                if (train.trainNo == it->trainNo)
                    train.seatsAvailable++;

            tickets.erase(it);
            saveTickets();
            cout << "Ticket canceled successfully!\n";
            return;
        }
    }
    cout << "Ticket not found!\n";
}

void searchPassenger()
{
    string name;
    cout << "Enter Passenger Name to search: ";
    cin.ignore();
    getline(cin, name);

    for (auto &t : tickets)
    {
        if (t.passengerName == name)
        {
            cout << "Passenger Found: Name: " << t.passengerName << ", Train No: " << t.trainNo << endl;
            return;
        }
    }
    cout << "Passenger not found!\n";
}

void checkSeatAvailability()
{
    int trainNo;
    cout << "Enter Train Number to check seats: ";
    cin >> trainNo;

    for (auto &train : trains)
    {
        if (train.trainNo == trainNo)
        {
            cout << "Seats available on " << train.trainName << ": " << train.seatsAvailable << endl;
            return;
        }
    }
    cout << "Invalid Train Number!\n";
}

// -------- Main Menu --------
int main()
{
    loadTickets(); // Load tickets from file
    int choice;
    do
    {
        cout << "\n--- Advanced Train Ticket Booking System ---\n";
        cout << "1. Show Available Trains\n";
        cout << "2. Book Ticket\n";
        cout << "3. Show Booked Tickets\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Search Passenger\n";
        cout << "6. Check Seat Availability\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showTrains();
            break;
        case 2:
            bookTicket();
            break;
        case 3:
            showTickets();
            break;
        case 4:
            cancelTicket();
            break;
        case 5:
            searchPassenger();
            break;
        case 6:
            checkSeatAvailability();
            break;
        case 7:
            cout << "Exiting system...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
