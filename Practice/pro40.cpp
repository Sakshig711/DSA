#include <iostream>
#include <string>
#include  <sstream>
#include <vector>
#include <algorithm>

int main() {
    std::string input_string = "Hello, World!";
    std::istringstream iss(input_string);
    std::vector<std::string> words;

    // Split the input string into words
    for (std::string word; iss >> word; ) {
        words.push_back(word);
    }

    // Reverse the order of the words
    std::reverse(words.begin(), words.end());

    // Reassemble the reversed words into a new string
    std::string reversed_string;
    for (const std::string& word : words) {
        reversed_string += word + " ";
    }

    // Remove the trailing space
    if (!reversed_string.empty()) {
        reversed_string.pop_back();
    }

    // Print the reversed string by words
    std::cout << reversed_string << std::endl;

    return 0;
}

