
#include <iostream>
using namespace std;

class bank_account {
private:
    string name, acctype;
    int accnumber;
    double balance;

public:
    bank_account() {
        name = "";
        acctype = "";
        accnumber = 0;
        balance = 0.0;
    }

    bank_account(string n, string at, int anum, double b) {
        name = n;
        acctype = at;
        accnumber = anum;
        balance = b;
    }

    void accept();
    void display();
    void deposit();
    void withdraw();
};

void bank_account::accept() {
    cout << "\nEnter the name: ";
    cin >> name;

    cout << "Enter account type: ";
    cin >> acctype;

    cout << "Enter account number: ";
    cin >> accnumber;

    cout << "Enter balance: ";
    cin >> balance;
}

void bank_account::display() {
    cout << "\nAccount Details:\n";
    cout << "Name: " << name << endl;
    cout << "Account Type: " << acctype << endl;
    cout << "Account Number: " << accnumber << endl;
    cout << "Balance: $" << balance << endl;
}

void bank_account::deposit() {
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    } else {
        cout << "Invalid amount.\n";
    }
    display();
}

void bank_account::withdraw() {
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Amount withdrawn successfully.\n";
    } else {
        cout << "Invalid amount or insufficient balance.\n";
    }
    display();
}

int main() {
    bank_account name1;
    int choice;

    name1.accept();

    do {
        cout << "\n Menu\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                name1.display();
                break;
            case 2:
                name1.deposit();
                break;
            case 3:
                name1.withdraw();
                break;
            case 4:
                cout << "Thanks.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
       }
    } while (choice != 4);

    return 0;
}
