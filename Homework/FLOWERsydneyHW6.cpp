/*
Sydney Flower
CE 122
Homework 6
14 March 2025
*/

/*
Sydney Flower
CE 122
Homework 6
14 March 2025
*/

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

// Function prototypes
bool isPrime(int n);
void findPrimes();
void menuSystem();
void collatzConjecture(int x);
bool isVowel(char ch);
int countVowels();

int main() 
{
    findPrimes();
    
    cout << "Running menu system." << endl;
    menuSystem();
    
    cout << "Testing Collatz Conjecture." << endl;
    collatzConjecture(56);
    cout << "----------------------" << endl;
    collatzConjecture(112);
    cout << "----------------------" << endl;
    collatzConjecture(235);
    cout << "----------------------" << endl;
    collatzConjecture(1023);
    cout << "----------------------" << endl;
    collatzConjecture(1024);
    cout << "----------------------" << endl;
    collatzConjecture(73421);
    cout << "----------------------" << endl;

    cout << "Counting vowels." << endl;
    cout << "Number of vowels: " << countVowels() << endl;

    return 0;
}

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void findPrimes() 
{
    ofstream file("primes.txt");
    if (file) {
        for (int i = 2; i < 2000; i++) {
            if (isPrime(i)) {
                file << i << " ";
            }
        }
        file << endl;
        file.close();
    } else 
    {
        cout << "Error opening file." << endl;
    }
}

void menuSystem() 
{
    ofstream receipt("receipt.txt");
    if (receipt) 
    {
        int choice;
        double total = 0;
        out << "Welcome to my restaurant! Here's the menu:" << endl << endl;
        cout << setw(10) << left << "Burger" << "$" << fixed << setprecision(2) << 8.99 << endl;
        cout << setw(10) << "Fries" << "$" << 3.00 << endl;
        cout << setw(10) << "Shake" << "$" << 4.22 << endl << endl;
        
        while (true)
            {
            cout << "Enter your choice (1-3 to order, 4 to exit): ";
            cin >> choice;

            if (choice == 4) break;

            switch (choice)
                {
                case 1:
                    total += 8.99;
                    receipt << "Burger - $5.99" << endl;
                    break;
                case 2:
                    total += 3.00;
                    receipt << "Fries - $3.00" << endl;
                    break;
                case 3:
                    total += 4.22;
                    receipt << "Shake - $4.22" << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    continue;
            }
        }
        
        receipt << "Total: $" << total << endl;
        receipt.close();
    } else {
        cout << "Error opening receipt file." << endl;
    }
}

void collatzConjecture(int x) 
{
    cout << "Collatz sequence for " << x << ": ";
    int count = 0;
    while (x != 1)
        {
        cout << x << " ";
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = 3 * x + 1;
        }
        count++;
    }
    cout << "1" << endl;
    cout << "Steps to reach 1: " << count << endl;
}

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countVowels() {
    string input;
    cout << "Enter a sequence of characters ";
    cin.ignore();
    getline(cin, input);

    int vowelCount = 0;
    for (char ch : input) {
        if (isVowel(ch)) vowelCount++;
    }
    return vowelCount;
}
