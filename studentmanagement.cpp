#include <iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include <windows.h>

using namespace std;
string name[50], grade[50], contact[50], address[50];
int rollnum[50];
int total = 0;

// Function to creating loading bar
void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0F");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Loading...\n\n");
    printf("\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 26; i++)
    {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(150);
    }
}
void loadingfunc(int l)
{
    if (l == 0)
    {
        cout << "Student Record Manager by Pritam Das";
        cout << ".";
        Sleep(300);
        cout << ".";
        Sleep(300);
        cout << ".";
        Sleep(300);
        cout << ".";
        Sleep(300);
        cout << "." << endl;
        loadingBar();
        system("cls");
        cout << endl;
    }
    else
    {
        return;
    }
}
void enterdata()
{

    int k;
    cout << "Enter number of students you want to add:" << endl;
    cin >> k;
    if (total == 0)
    {
        for (int i = 0; i < k; i++)
        {
            cout << "Enter details for student number " << i + 1 << endl;
            cout << "Enter name: ";
            cin >> name[i];
            cout << endl;
            cout << "Enter Roll number: ";
            cin >> rollnum[i];
            cout << endl;
            cout << "Enter the class of the student: ";
            cin >> grade[i];
            cout << endl;
            cout << "Enter the contact number: ";
            cin >> contact[i];
            cout << endl;
            cout << "Enter the address: ";
            cin >> address[i];
            cout << endl;
        }
    }
    else
    {
        for (int i = total; i < total + k; i++)
        {
            cout << "Enter details for student number " << i + 1 << endl;
            cout << "Enter name: ";
            cin >> name[i];
            cout << endl;
            cout << "Enter Roll number: ";
            cin >> rollnum[i];
            cout << endl;
            cout << "Enter the class of the student: ";
            cin >> grade[i];
            cout << endl;
            cout << "Enter the contact number: ";
            cin >> contact[i];
            cout << endl;
            cout << "Enter the address: ";
            cin >> address[i];
            cout << endl;
        }
    }
    total += k;
}

void show()
{
    if (total == 0)
    {
        cout << "No data is entered" << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "Details of student number: " << i + 1 << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Roll number: " << rollnum[i] << endl;
            cout << "Class: " << grade[i] << endl;
            cout << "Contact: " << contact[i] << endl;
            cout << "Address: " << address[i] << endl;
            cout << endl;
        }
    }
}
void search()
{
    int inp;
    if (total == 0)
    {
        cout << "No data is entered" << endl;
    }
    else
    {
        cout << "Enter the roll number of the student you want to search: ";
        cin >> inp;
        for (int i = 0; i < total; i++)
        {
            if (inp == rollnum[i])
            {
                cout << "Current details of student number: " << i + 1 << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Roll number: " << rollnum[i] << endl;
                cout << "Class: " << grade[i] << endl;
                cout << "Contact: " << contact[i] << endl;
                cout << "Address: " << address[i] << endl;
                cout << endl;
            }
        }
    }
}
void update()
{
    if (total == 0)
    {
        cout << "No data is entered" << endl;
    }
    else
    {
        int jnp;
        cout << "Enter the roll number of the student you want to search:";
        cin >> jnp;
        for (int i = 0; i < total; i++)
        {
            if (jnp == rollnum[i])
            {
                cout << "Details of student number: " << i + 1 << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Roll number: " << rollnum[i] << endl;
                cout << "Class: " << grade[i] << endl;
                cout << "Contact: " << contact[i] << endl;
                cout << "Address: " << address[i] << endl;
                cout << endl;
                cout << "Enter new details for student number " << i + 1 << endl;
                cout << "Enter name: ";
                cin >> name[i];
                cout << endl;
                cout << "Enter Roll number: ";
                cin >> rollnum[i];
                cout << endl;
                cout << "Enter the class of the student: ";
                cin >> grade[i];
                cout << endl;
                cout << "Enter the contact number: ";
                cin >> contact[i];
                cout << endl;
                cout << "Enter the address: ";
                cin >> address[i];
                cout << endl;
                cout << "Entry updated successfully";
            }
        }
    }
}
void deletedata()
{
    if (total == 0)
    {
        cout << "No data is entered" << endl;
    }
    else
    {
        int knp;
        cout << "Enter the roll number of the student you want to delete ";
        cin >> knp;
        for (int i = 0; i < total; i++)
        {
            if (knp = rollnum[i])
            {
                cout << "Deleting the entry...";
                for (int j = i; j < total; j++)
                {
                    name[j] = name[j + 1];
                    rollnum[j] = rollnum[j + 1];
                    grade[j] = grade[j];
                    contact[j] = contact[j + 1];
                    address[j] = address[j + 1];
                    total -= 1;
                }
                cout << "Deletion successful!";
            }
        }
    }
}
void save()
{
 ofstream out;
 out.open("database.txt");
 out<<setw(13)<<"Name";
 out<<setw(13)<<"RollNo.";
 out<<setw(13)<<"Class";
 out<<setw(13)<<"Contact";
 out<<setw(13)<<"Address";
 out<<endl;
 out<<endl;
 for(int i=0; i<total; i++)
 {
    out<<setw(13)<<name[i];
    out<<setw(13)<<rollnum[i];
    out<<setw(13)<<grade[i];
    out<<setw(13)<<contact[i];
    out<<setw(13)<<address[i];
    out<<endl;
}
out.close();
}
int main()
{
    static int i = 0;
    loadingfunc(i);
    i++;
    int input;
    cout << "Press 1 to enter data:" << endl;
    cout << "Press 2 to show data:" << endl;
    cout << "Press 3 to search data:" << endl;
    cout << "Press 4 to update data:" << endl;
    cout << "Press 5 to delete data:" << endl;
    cout << "Press 6 to exit the program:" << endl;
    cout << "Press 7 to export the database:" <<endl;
    cin >> input;
    if (input == 1)
    {
        enterdata();
        cout << "Data entry successful";
        Sleep(1000);
        system("cls");
        main();
    }
    else if (input == 2)
    {
        show();
        Sleep(10000);
        main();
    }
    else if (input == 3)
    {
        search();
        Sleep(5000);
        system("cls");
        main();
    }
    else if (input == 4)
    {
        update();
        Sleep(1000);
        system("cls");
        main();
    }
    else if (input == 5)
    {
        deletedata();
        Sleep(1000);
        system("cls");
        main();
    }
    else if (input == 6)
    {
        cout << "Thank you for using Student Management System" << endl;
        Sleep(1000);
        return 0;
    }
    else if(input == 7)
    {
        save();
        cout<<"Database exported successfully!";
        Sleep(2000);
        system("cls");
        main();
    }
    else
    {
        cout << "Invalid Input" << endl;
        Sleep(1000);
        system("cls");
        main();
    }
    cout << endl;
}