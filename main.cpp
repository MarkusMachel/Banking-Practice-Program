#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 3400;
    int choice = 0;

    do
    {
        std::cout << "Welcome to the ATM" << std::endl;
        std::cout << "Enter 1 to deposit, 2 to withdraw, 3 to check balance, or 4 to exit" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                std::cout << "Thank you for using the ATM" << std::endl;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    } while (choice != 4);
    
    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit()
{
    double amount = 0.0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    return amount;
}

double withdraw(double balance)
{
    double amount = 0.0;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if (amount > balance)
    {
        std::cout << "Insufficient funds" << std::endl;
        return 0.0;
    }
    else
    {
        return amount;
    }
}
