#include<iostream>
#include<vector>

using namespace std;



class TicketBooking {
    vector<int> *seats;
    public:
    TicketBooking(int length) {
        seats = new vector<int>(length, 0);
    }
    pair<int, int> book_ticket(int num) {
        int start, end;
        return make_pair(start, end);
    }
    ~TicketBooking() {
        delete seats;
    }
};

int main()
{
    int total_no_of_tickets, no_of_tickets, no_of_rows, no_of_columns;
    cout << "Enter the total number of tickets: ";
    cin >> total_no_of_tickets;
    cout << "Rows: ";
    cin >> no_of_rows;
    cout << "Columns: ";
    cin >> no_of_columns;
    
    TicketBooking tb(200);
    while(1)
    {
        cout << "Enter the no. of tickets to be booked: ";
        cin >> no_of_tickets;
        pair<int, int> range = tb.book(no_of_tickets);
        if( range.first == 0 && range.second == 0) {
            cout << "All tickets are exhausted\n";
            break;
        }
        else {
            cout << "Congrats ... Your tickets are as follows:" << endl;
            int first = range.first;
            while(first++ <= range.second)
                cout << first << ", ";
        }
    }
    return 0;
}
