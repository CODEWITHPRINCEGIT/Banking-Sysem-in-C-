#include <iostream>

using namespace std;

int main() {
    int accountNumber, choice, amount;
    float balance = 0.0;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    do {
        cout << "\n\n*** Banking System ***\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Cash\n";
        cout << "3. Withdraw Cash\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nYour Balance is: " << balance << endl;
                break;
            case 2:
                cout << "\nEnter Cash to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "\nAmount deposited successfully!" << endl;
                break;
            case 3:
                cout << "\nEnter Cash to withdraw: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "\nAmount withdrawn successfully!" << endl;
                } else {
                    cout << "\nInsufficient balance!" << endl;
                }
                break;
            case 4:
                cout << "\nThank you for using our banking system!" << endl;
                break;
            default:
                cout << "\nInvalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
