#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct contact {
	string First_name;
	string Last_name;
	int phone;
	string email_address;
	string social_media;
};
vector<contact> phonebook;

void Add()
{
	contact newcontact;
	system("cls");
	cin.ignore();
	cout<<"==================\n";
	cout<<"Please enter the First name : \n";
	getline(cin,newcontact.First_name);
	cout<<"Please enter the Last name : \n";
	getline(cin,newcontact.Last_name);
	cout<<"Please enter the phone number : \n";
	cin>>newcontact.phone;
	cout<<"Please enter the email address : \n";
	getline(cin,newcontact.email_address);
	cout<<"Please enter the username of the social media : \n";
	getline(cin,newcontact.social_media);
	 phonebook.push_back(newcontact);
    cout<<"The new contact is added to your phonebook!\n\n";
    system("pause");
}
void Searchcontact(const vector<contact> &phonebook)
{
	string key;
	cout<<"Enter the name to search :";
	cin>>key;
	bool found=false;
	for (const auto &:phonebook)
	{
		if (neme==key)
		{
			cout<<"Found :"<<name<<"-"<<endl;
			found=true;
		}
	}
	if( !found) 
	cout<<"No contact found.\n";
	cout<<endl;
	system("pause");
}
void Displayall(const vector<Contact> &phonebook) 
{
	if (phonebook.empty()) {
        cout << "Phonebook is empty.\n\n";
        return;
    	}
    for (size_t i=0;i<phonebook.size();i++)
    {
    		cout<<i+1<<"."<<phonebook[i].name<<"-"<<phonebook[i].phone<<endl;
	}
    cout<<endl;
    system("pause");
}
void Deletecontact(vector<Contact> &phonebook)
{
	string key;
	cout<<"Enter the name to delete :";
	cin>>key;
	for (size_t i=0;i<phonebook.size();i++)
	{
		if (phonebook[i].name==key)
		{
			phonebook.erase(phonebook.begin()+ i);
			cout<<"The contact is deleted :";
			return;
		}
	}
	cout<<"No such a contact found.\n\n";
	system("pause");
}
void Editcontact(vector<Contact> &phonebook)
{
	string key;
	cout<<"Enter the name to edit :";
	cin>>key;
	for (auto &c : phonebook)
	{
		if (c.name == key)
		{
			cout<<"New name :";
			cin>>c.name;
			cout<<"New phone :";
			cin>>c.phone;
			cout<<"The information of contact update!\n\n";
			return;
		}
	}
	cout<<"No such a contact found.\n\n";
	system("pause");
}
int menu()
{
	vector<contact> phonebook;
	int choice;
	system("cls");
	    cout << "==========================\n";
    cout << "\t PHONEBOOK \t\n";
    cout << "==========================\n";
    cout << "1. Add new contact..." << endl;
    cout << "2. Search contact..." << endl;
    cout << "3. Display all contact..." << endl;
    cout << "4. Delete contact..." << endl;
    cout << "5. Edit contact..." << endl;
    cout << "6. Exit..." << endl;
    cout << "----------------------------\n";
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}
int main ()
{
	int z;
	
	while (true)
	{
		z=menu();
		switch (z)
		{
			case 1:
				Add ();
				break;
				case 2:
					Searchcontact ();
					break;
					case 3:
						Displayall ();
						break;
						case 4:
							Deletecontact ();
							break;
							case 5:
								Editcontact ();
								break;
								case 6:
									cout<<"Exiting ...";
									return 0;
									default:
									cout<<"Invalid choice!\n\n";
									system("pause");
									break;
		}
	}
}