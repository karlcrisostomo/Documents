#include <iostream>
#include <iomanip>

using namespace std;

void balanceAmount(double &balance);
double deposit();
double withdraw(double &balance);

int main()
{
    double balance = 0;
    int choice = 0;

    cout << "*********** Welcome to Gians bank ***************" << endl;
    cout << "Choose 1-4" << endl;
    cout << "1. Check your balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;

    do {
        cin >> choice;
        switch (choice) {
            case 1:
                balanceAmount(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                cout << "Thank you for using this bank" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}

void balanceAmount(double &balance) {
    cout << "Your balance is: " << setprecision(2) << fixed << balance << endl;
}

double deposit() {
    double amount = 0;

    cout << "Enter the amount you deposit: ";
    cin >> amount;

    return amount;
}

double withdraw(double &balance) {
    double amount = 0;

    cout << "Enter the amount you withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient funds" << endl;
        return 0;
    }

    return amount;
}
