#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class MovieTicketsData
{
public:
    string show1[10],show2[10];
    vector<string>  name;
    vector<string> password;
    int login = 0;
    MovieTicketsData()
    {
        cout<<"----------------------"<<endl;
        cout<<"Welcome to SweetScreen"<<endl;
        cout<<"-----------------------"<<endl;
    }
};

class MovieTicketsFunction:public MovieTicketsData
{
public:
     int ticket1[10],n,show;
    
    void SetSeat()
    {
        for(int i=0;i<10;i++)
        {
            char seatno = i+48;
            show1[i] = 'A';
            show1[i] += seatno;
            show2[i] = 'B';
            show2[i] += seatno;
        }
    }
    
    void CreateAccount()
    {
        int choice;
        cout<<"Enter"<<endl<<"1 => Login"<<endl<<"2 => Signup"<<endl;
        cin>>choice;
        if(choice == 1)
            Login();
        else if(choice ==2)
            SignUp();
    }
    
    void Login()
    {
        cout<<"-----------Login------------"<<endl;
        string username,userpassword;
        cout<<"UserName : ";
        cin>>username;
        cout<<"Password : ";
        cin>>userpassword;
    
        for(int i=0; i<name.size(); i++)
        {
            if(username == name[i] && userpassword == password[i])
            {
                cout<<"Login Successfully"<<endl;
                login = 1;
            }
        }
        if(!login)
        {
            cout<<"Invalid Credentials"<<endl;
        }
        cout<<"-----------------------------"<<endl;
    }
    
    void SignUp()
    {
        cout<<"-------------SignIn-----------"<<endl;
        string username,userpassword;
        cout<<"UserName : ";
        cin>>username;
        cout<<"Password : ";
        cin>>userpassword;
        name.push_back(username);
        password.push_back(userpassword);
        cout<<"-----------------------------"<<endl;
    }
    
    void TicketBooking()
    {
        cout<<"----------Ticket Booking---------"<<endl;
        string ticket[10];
        if(!login)
        {
            cout<<"Login First"<<endl;
            return;
        }
        else
        {
                cout<<"Enter the Ticket Count : ";
                cin>>n;
                cout<<"Enter the Show : ";
                cin>>show;
                cout<<"Enter the Tickets : ";
            
                for(int i=0; i<n ; i++)
                {
                    cin>>ticket[i];
                }
        }
        
        SeatNonBooked(n,show,ticket);
        AvailableSeats();
    }
    
    void SeatNonBooked(int n,int show,string ticket[])
    {
        bool booking=false;
        if(show ==1)
        {
            for(int i=0; i<n; i++)
            {
                booking = false;
                for(int j=0; j<10; j++)
                {
                    if(ticket[i] == show1[j])
                    {
                        ticket1[i] = j;
                        booking = true;
                    }
                }
                if(!booking)
                {
                    cout<<"Sorry! Seat is not available"<<endl<<"Can you choose please another seats"<<endl;
                    return;
                }
            }
        }
        else if(show == 2)
        {
            for(int i=0; i<n; i++)
            {
                booking = false;
                for(int j=0; j<10; j++)
                {
                    if(ticket[i] == show2[j])
                    {
                        ticket1[i] = j;
                        booking = true;
                    }
                }
                if(!booking)
                {
                    cout<<"Sorry! Seat is not available"<<endl<<"Can you choose please another seats"<<endl;
                    return;
                }
            }
        }
        
        if(booking)
        {
            if(show == 1)
            {
                for(int i=0; i<n; i++)
                {
                    show1[ticket1[i]] = "0";
                }
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    show2[ticket1[i]] = "0";
                }
            }
            cout<<"Successfully Booked"<<endl;
        }
        cout<<ticket[0];
    }
    
    void AvailableSeats()
    {
        cout<<"---------Available Seats-------"<<endl;
        cout<<"SHOW:1"<<endl;
        for(int i=0;i<10;i++)
        {
            if(show1[i] != "0" )
            {
                cout<<show1[i]<<" ";
            }
        }
        cout<<endl;
        
        cout<<"SHOW:2"<<endl;
        for(int i=0;i<10;i++)
        {
            if(show2[i] != "0")
            {
                cout<<show2[i]<<" ";
            }
        }
        cout<<endl;
        cout<<"--------------------------------"<<endl;
    }
    
    void CancelTicket()
    {
        cout<<"-----------Cancel Ticket---------"<<endl;
        if(!login)
        {
            cout<<"Login First"<<endl;
        }
        if(show == 1)
        {
            for(int i=0;i<n;i++)
            {
                char seatno = ticket1[i]+48;
                show1[ticket1[i]] = 'A';
                show1[ticket1[i]] += seatno;
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
                char seatno = ticket1[i]+48;
                show1[ticket1[i]] = 'A';
                show1[ticket1[i]] += seatno;
            }
        }
        cout<<"Successfully Cancel the Ticket"<<endl;
        cout<<"---------------------------------"<<endl;
    }
};

int main()
{
    MovieTicketsFunction obj;
    obj.SetSeat();
    char isterminated;
    do
    {
        int choice;
        cout<<   "Enter"<<endl<<"1 => Create Account"<<endl<<"2 => Ticket Booking"<<endl<<"3 => Available Seats"<<endl<<"4 => Cancel Ticket"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                obj.CreateAccount();
                break;
            case 2:
                obj.TicketBooking();
                break;
            case 3:
                obj.AvailableSeats();
                break;
            case 4:
                obj.CancelTicket();
                break;
            default:
                cout<<"Enter the Correct Option"<<endl;
        }
        cout<<"Do you want to continue y/n?"<<endl;
        cin>>isterminated;
    }while(isterminated == 'y');
    return 0;
}


