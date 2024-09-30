#include <iostream>
#include <vector>
#include <string>

// Function to translate a character using the provided cypher
char transCh(char inChar, const std::vector<char>& cypher) {
    if (inChar >= 'A' && inChar <= 'Z') { // is a capital letter
        return cypher[inChar - 'A'];
    }
    else if (inChar >= 'a' && inChar <= 'z') { // is a lowercase letter
        char upperCaseLetter = inChar - 32; // convert to uppercase
        char upperCaseCode = cypher[upperCaseLetter - 'A']; // get uppercase code
        return upperCaseCode + 32; // convert code back to lowercase
    }
    else { // is not a letter
        return inChar;
    }
}

int main() {
    // Define the cypher vector
    std::vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    // Get input from the user
    std::string text;
    std::cout << "Input text to cypher: ";
    std::getline(std::cin, text);

    // Translate and print the encoded string
    std::cout << "Encoded message: ";
    for (char c : text) {
        std::cout << transCh(c, cypher);
    }

    std::cout << std::endl;

    return 0;
}
