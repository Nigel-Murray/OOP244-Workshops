#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>
#include "Customer.h"
#include "Tools.h"

namespace sdds {

    // complete

    void read(char* str, int len) {  // Fully provided
        if (cin.peek() == '\n') {
            cin.ignore();
        }
        cin.getline(str, len);
    }

    void EmptyRecord(Customers &tweeters) // set everything to 0
    {
        strCpy(tweeters.user_name, " ");
        tweeters.retweets_count = 0;
        tweeters.likes_count = 0;
        tweeters.replies_count = 0;
        tweeters.share_videos = 0;
    }
    void EmptyRecord(CustomersRecord& tweets) // same ^^
    {
        tweets.ptr_rec = nullptr;
        tweets.noOfRecords = 0;
    }

    bool read(Customers& rec)
    {
        cout << " Enter User name: ";
        cin.getline(rec.user_name, 20); // set to max of 20 because of null terminator in array
        if (strlen(rec.user_name) != 0) // check if string is 0
        {
            cout << " Enter likes_count: "; cin >> rec.likes_count; // take inputs V
            cout << " Enter retweets_count: "; cin >> rec.retweets_count;
            cout << " Enter replies_count: "; cin >> rec.replies_count;
            cout << " Enter share videos (y/n): "; cin >> rec.share_videos;
            cin.ignore();

            return true;
        }
        else
        {
            return false; // returns false
        }
    }

    void addCustomer(CustomersRecord& t_rec, const Customers& c_rec)
    {
        Customers* temp = new Customers[t_rec.noOfRecords + 1]; // new pointer
        if (temp == nullptr) // check if temp is null
        {
            cout << "Error!" << endl; // lil error message
        }
        for (int i = 0; i < t_rec.noOfRecords; i++) 
        {
            temp[i] = t_rec.ptr_rec[i]; //load info
        }
        temp[t_rec.noOfRecords] = c_rec;

        delete[] t_rec.ptr_rec;

        t_rec.ptr_rec = nullptr; //de-allocate 

        t_rec.ptr_rec = temp;

        t_rec.noOfRecords++; // add one to record
    }

    void display(const Customers& c_rec)
    {

    cout << c_rec.user_name << ", " 
        << c_rec.likes_count << ", " 
        << c_rec.retweets_count << ", " 
        << c_rec.replies_count << ", " 
        << c_rec.share_videos << endl << endl; // print out records

    }
    void display(const CustomersRecord& t_rec)
    {
        for (int i = 0; i < t_rec.noOfRecords; i++) // print off the records as it is stored. 
        {
            cout << i + 1 << ". ";
            display(t_rec.ptr_rec[i]);
        }
    }
    // complete
   

  }

