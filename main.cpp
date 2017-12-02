#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string Account_Number;
char FirstName[10];
char LastName[10];
//*******************************************************************************
void addRecordTeacher();
void SeeTeacher();
void Quit_T();
void SearchTeacher();
void UpdateTeacher();
void DeleteTeacher();
//*******************************************************************************

void addRecordTeacher()
{
    ofstream outRecord("Record.text", ios::out);

    cout << "account_number:\n";
    cin >> Account_Number;
    outRecord << Account_Number<<"\t";
    cout << "\nfirstName:\n";
    cin >> FirstName;
    outRecord << FirstName<<"\t";
    cout << "\nlastName:\n";
    cin >> LastName;
    outRecord << LastName<<endl;
    outRecord.close();
}
//**********************************************************************************************************************
void SeeTeacher()
{
    ifstream inRead("Record.text", ios::out);


    cout << "account_number:\n";
    cout << Account_Number<<"\n";
    inRead >> Account_Number;
    cout<<"----------------------------------------------------------"<<endl;
    cout << "\nfirstName:\n";
    cout << FirstName<<"\n";
    inRead >> FirstName;
    cout<<"----------------------------------------------------------"<<endl;
    cout << "\nLastName:\n";
    cout << LastName<<"\n";
    inRead >> LastName;
    cout<<"----------------------------------------------------------"<<endl;
    inRead.close();
}
//**********************************************************************************************************************
void UpdateTeacher()
{
    ofstream outRecord;
    cout << "account_number:\n";
    cin >> Account_Number;
    outRecord << Account_Number<<"\t";
    cout << "\nfirstName:\n";
    cin >> FirstName;
    outRecord << FirstName<<"\t";
    cout << "\nlastName:\n";
    cin >> LastName;
    outRecord << LastName<<endl;
    outRecord.close();
}
void DeleteTeacher()
{
    remove("Record.text");
  //  rename("","");
}
//**********************************************************************************************************************
void SearchTeacher()
{
    ifstream inRead;
  string n;
cout<<"Enter info"<<endl;
cin>>n;
if(n==Account_Number){
    cout<<"Found:)"<<endl;
}

//inRead.close();
else{
    cout<<"NotFound!"<<endl;
}
    inRead.close();
}
//**********************************************************************************************************************
void Quit_T()
{
    exit(0);
}
//**********************************************************************************************************************
int main()
{
    int choice;
    cout << "***Acount Information System***" << endl;
    while (true)
    {
        cout << "\nSelect one option below ";
        cout << "\n\t1-->Add record to file";
        cout << "\n\t2-->Show record from file";
        cout << "\n\t3-->Search Record from file";
        cout << "\n\t4-->Update Record";
        cout << "\n\t5-->Delete Record";
        cout << "\n\t6-->Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
            addRecordTeacher();
        if (choice == 2)
            SeeTeacher();
        if (choice ==3)
           SearchTeacher();
        if (choice == 4)
           UpdateTeacher();
        if (choice ==5)
            DeleteTeacher();
        if (choice == 6)
            Quit_T();
    }

    return 0;
}