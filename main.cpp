#include <iostream>

using namespace std;

int main() {

  int favoriteNumber;

  do {
    cout << "What is your favorite number between 1 and 100?" << endl;
    cin >> favoriteNumber;
  } while (favoriteNumber < 1 || favoriteNumber > 100);

  cout << "Amazing!! That's my favorite number too!" << endl;

  cout << "No really!! " << favoriteNumber << " is my favorite number too"
       << endl;

  return 0;
}