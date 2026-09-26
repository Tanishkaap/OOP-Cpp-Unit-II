#include <iostream>

using namespace std;

// Account keeps balance private
class Account
{
private:
    double balance;

    // Auditor is allowed to access private data
    friend class Auditor;

public:
    explicit Account(double initialBalance)
        : balance(initialBalance) {}
};

// Friend class can access Account's private members
class Auditor
{
public:
    void inspect(const Account& account) const
    {
        cout << "Account Balance: " << account.balance << '\n';
    }
};

int main()
{
    Account account(5000.0);
    Auditor auditor;

    auditor.inspect(account);

    return 0;
}
