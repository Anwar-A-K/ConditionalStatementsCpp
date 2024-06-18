// ConditionalStatementsCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int playerHealth;
    int enemyHealth;
    
    cout << "Enter player Health: ";
    cin >> playerHealth;
    cout << "Enter enemy health: ";
    cin >> enemyHealth;
    cout << endl;

    if (playerHealth == 100) {
        cout << "Player is full health" << endl;
    }
    else if (playerHealth == 50) {
        cout << "Player is half health" << endl;
    }
    else if (playerHealth <= 0) {
        cout << "Player is dead" << endl;
    }

    if (playerHealth > 0) {
        if (enemyHealth == 100) {
            cout << "Enemy is full health" << endl;
        }
        else if (enemyHealth == 50) {
            cout << "Enemy is half health" << endl;
        }
        else if (enemyHealth <= 0) {
            cout << "Enemy is dead" << endl;
        }
    }

    if (playerHealth == 0 || enemyHealth == 0) {
        cout << "Game Over" << endl;

        if (playerHealth == 0 && enemyHealth == 0) {
            cout << "Game is a draw" << endl;
        }
        else if (playerHealth <= 0) {
            cout << "Enemy Won" << endl;
        }
        else if (enemyHealth <= 0) {
            cout << "Player Won" << endl;
        }
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
