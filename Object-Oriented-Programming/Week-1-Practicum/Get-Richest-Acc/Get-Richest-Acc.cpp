#include <iostream>

struct Account {
	const char* name;
	int age;
	double balance;
	bool hasCreditStory;

	Account() {
		this->name = new char[32];
		this->name = "name is undefined";
		this->age = 0;
		this->balance = 0;
		this->hasCreditStory = false;
	}

	Account(const char* name, int age, double balance, bool hasCreditHistory) {
		this->name = new char[sizeof(name) / sizeof(char)];
		this->name = name;
		this->age = age;
		this->balance = balance;
		this->hasCreditStory = hasCreditHistory;
	}

	void printAccount() {
		std::cout << "Name: "<< name << std::endl;
		std::cout << "Age: "<< age << std::endl;
		std::cout << "Balance: " << balance << std::endl;
		std::cout << "Has credit history: " << std::boolalpha << hasCreditStory << std::endl;
	}
};
template <typename T>

void swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}


Account* getRichestAccounts(Account* accounts, const int& size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (accounts[j].balance > accounts[j + 1].balance) {
				swap(accounts[j], accounts[j + 1]);
			}
		}
	}

	Account* richestAccs = new Account[3];
	for (int i = 0; i < 3; i++)
	{
		richestAccs[i] = accounts[size - i - 1];
	}
	return richestAccs;
}

int main()
{
	Account accounts[5];

	Account toni("Toni Storaro", 44, 0.37, 0);
	Account koceto("Koceto", 44, 998.56, 1);
	Account sofka("Sofka", 45, 564.34, 0);
	Account dessita("Dessita", 19, 231.78, 1);
	Account vanko1("Vanko1", 45, 3124.45, 1);

	accounts[0] = toni;
	accounts[1] = koceto;
	accounts[2] = sofka;
	accounts[3] = dessita;
	accounts[4] = vanko1;

	Account* richestAccs = getRichestAccounts(accounts, 5);

	for (int i = 0; i < 3; i++)
	{
		richestAccs[i].printAccount();
	}
	delete[] richestAccs;
}
