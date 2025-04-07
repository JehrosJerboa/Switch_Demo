#include <iostream>
#include <string>

using namespace std;

int main() {

    /***
    * First Demo - using a standard switch statement for each case
    * Determining the vowels of a sentence.
    */
    string sentence = "This is just a sample sentence to use for testing. It is not anything";
    sentence += " special. A small elphant named Ellie and Oscar the otter here for testing.";

    unsigned int num_vowels = 0,
        num_consonants = 0,
        total_characters;

    total_characters = sentence.size();

    // Iterate through all of the characters in the string, 1 character at a time
    for (const char& c : sentence) {
        cout << "Looking at " << c << " ";
        switch (c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "**Vowel**" << endl;
            num_vowels++;
            break;
        }
        cout << endl;
    }
    cout << num_vowels << " vowels were found." << endl;




    /***
    * Second Demo
    * Making the case for fall-through
    * A letter example and a numeric example
    */
    string response;
    char resp;
    cout << "This is a simple task: enter (Y)es to continue: ";
    cin >> response;
    resp = response[0];

    switch (resp) {
    case 'y': // Falling through
    case 'Y':
        cout << "Continuing..." << endl;
        break; // Leaving the cases
    default:
        cout << "Not moving on..." << endl;
        exit(0);
        //No break because there are no other cases.
    }

    /****
    * A simple calculator
    */
    char op;
    cout << "Choose your operation:\n1. +\n2. -\n3. *\n4. /\n\n: ";
    cin >> op;
    switch (op) {
    case '+':

        break;
    case '-':

        break;
    case '*':

        break;
    case '/':

        break;
    default:
        cout << "Invalid operation chosen.\n";
        exit(1);
    }

    return 0;
}