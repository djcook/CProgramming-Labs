//---------------------------------------------------------------------
//
// Name:    DO_01  Dylan Cook
// 
// Purpose: Given a list of names and phone numbers followed by another
//          list of phone numbers, print all names which match the 
//          given numbers.
//
// Input:  The first part of the input contains the database of
//         phone numbers which has:
//               number of entries
//               that many phone numbers and names
//         The second part of the input consists of a list of
//         phone numbers to process until end of file.
//
// Output: For each phone number from the second part of the input,
//         all names associated with that number are printed.
//
//---------------------------------------------------------------------

#include <iostream>
#include <cstring>
using namespace std;

const int MAX_ENTRIES  = 20;
const int MAX_NAME_LEN = 40;
const int PHONE_LEN    = 8;

struct PhoneEntry
{
   char name[MAX_NAME_LEN + 1];
   char phone[PHONE_LEN + 1];
};

// DO_02 Define a structure PhoneBookType with 2 fields:
//       numPhones: integer representing the current number 
//               of phone entries in phoneList.
//       phoneList: an array of MAX_ENTRIES of type PhoneEntry
struct PhoneBookType
{
	int numPhones;
	PhoneEntry phoneList[MAX_ENTRIES];
};


void ReadPhoneBook(PhoneBookType& APhoneBook);
void ReadEntry(PhoneEntry &entry);
void PrintMatches(const char number[], const PhoneBookType& APhoneBook);
void PrintEntry(const PhoneEntry &entry);

int main()
{
   PhoneBookType MyPhoneBook;
   char phoneNumber[PHONE_LEN + 1];

   ReadPhoneBook(MyPhoneBook);

   cout << endl;
   cin >> phoneNumber; 
   while ( cin )
   {
      // DO_06 Call PrintMatches passing number and MyPhoneBook
	PrintMatches(phoneNumber, MyPhoneBook);

      cout << endl;
      cin >> phoneNumber; 
   }
   return 0;
}

//---------------------------------------------------------------------
// ReadEntry: read a single phone book entry.
// The input is in the form <number> <name> 
//---------------------------------------------------------------------
void ReadEntry(PhoneEntry &entry)
{
   cin >> entry.phone;
   cin >> entry.name;
}

//---------------------------------------------------------------------
// ReadPhoneBook: read phone data from cin
//---------------------------------------------------------------------
void ReadPhoneBook(PhoneBookType& APhoneBook)
{
   cout << "Number of entries in phone book: ";
   cin >> APhoneBook.numPhones;
   cout << "Enter items in the format <number> <name>" << endl;

   // DO_03: Use a for loop to read in all entries to APhoneBook.
	int x;
	for(x = 0; x < APhoneBook.numPhones; x++)
	{
		cin >> APhoneBook.phoneList[x].phone >> APhoneBook.phoneList[x].name;
	}

}


//---------------------------------------------------------------------
// DO_04: Write the header and body for function PrintEntry.  
// The function has one parameter:
//     entry: type PhoneEntry.
// The function prints the entry in format
//           <name>: <number>

//---------------------------------------------------------------------
void PrintEntry(const PhoneEntry &entry)
{
	cout << entry.name << ": " << entry.phone << endl;
}

//---------------------------------------------------------------------
// PrintMatches: print any entries in APhoneBook which match
// given number or a message if no entry matches
//---------------------------------------------------------------------
void PrintMatches(const char number[], const PhoneBookType& APhoneBook)
{
   bool foundMatch = false;

   cout << "Entries matching " << number << ":" << endl;

   // DO_05: Use a for loop to find out all phone numbers in AphoneBook
   //        that match the given number.
   //        If a matching number is found, set foundMatch  to true, call
   //        function PrintEntry to print the matching number, then go to
   //        next line.
	int x;
	for(x = 0; x < APhoneBook.numPhones; x++)
	{
		if(strcmp(number,APhoneBook.phoneList[x].phone) == 0)
		{
			foundMatch = true;
			PrintEntry(APhoneBook.phoneList[x]);
		}
	}

   if ( !foundMatch )
      cout << "-- none" << endl;
}
