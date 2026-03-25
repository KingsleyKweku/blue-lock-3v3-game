#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to simulate a match
void playMatch(string playerName) {
    int playerScore = 0;
    int opponentScore = 0;

    cout << "\nMatch Started!\n";

    for (int round = 1; round <= 5; round++) {
        cout << "\nRound " << round << endl;

        int playerMove = rand() % 3;     // 0 = shoot, 1 = dribble, 2 = pass
        int opponentMove = rand() % 3;

        if (playerMove == 0 && opponentMove != 2) {
            cout << playerName << " scored a GOAL! ⚽\n";
            playerScore++;
        } else if (playerMove == 1 && opponentMove == 0) {
            cout << playerName << " dribbled past opponent!\n";
        } else if (playerMove == 2) {
            cout << playerName << " made a great pass!\n";
        } else {
            cout << "Opponent scored! ❌\n";
            opponentScore++;
        }
    }

    cout << "\nFinal Score: " << playerName << " " << playerScore
         << " - " << opponentScore << " Opponent\n";

    if (playerScore > opponentScore)
        cout << "🔥 You Win!\n";
    else if (playerScore < opponentScore)
        cout << "😢 You Lose!\n";
    else
        cout << "🤝 It's a Draw!\n";
}

int main() {
    srand(time(0));

    string playerName;
    int choice;

    cout << "⚽ BLUE LOCK GAME ⚽\n";
    cout << "Enter your player name: ";
    getline(cin, playerName);

    cout << "\nChoose your play style:\n";
    cout << "1. Striker (Better shooting)\n";
    cout << "2. Dribbler (Better control)\n";
    cout << "3. Playmaker (Better passing)\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "\nYou selected: ";
    if (choice == 1) cout << "Striker\n";
    else if (choice == 2) cout << "Dribbler\n";
    else cout << "Playmaker\n";

    playMatch(playerName);

    return 0;
}