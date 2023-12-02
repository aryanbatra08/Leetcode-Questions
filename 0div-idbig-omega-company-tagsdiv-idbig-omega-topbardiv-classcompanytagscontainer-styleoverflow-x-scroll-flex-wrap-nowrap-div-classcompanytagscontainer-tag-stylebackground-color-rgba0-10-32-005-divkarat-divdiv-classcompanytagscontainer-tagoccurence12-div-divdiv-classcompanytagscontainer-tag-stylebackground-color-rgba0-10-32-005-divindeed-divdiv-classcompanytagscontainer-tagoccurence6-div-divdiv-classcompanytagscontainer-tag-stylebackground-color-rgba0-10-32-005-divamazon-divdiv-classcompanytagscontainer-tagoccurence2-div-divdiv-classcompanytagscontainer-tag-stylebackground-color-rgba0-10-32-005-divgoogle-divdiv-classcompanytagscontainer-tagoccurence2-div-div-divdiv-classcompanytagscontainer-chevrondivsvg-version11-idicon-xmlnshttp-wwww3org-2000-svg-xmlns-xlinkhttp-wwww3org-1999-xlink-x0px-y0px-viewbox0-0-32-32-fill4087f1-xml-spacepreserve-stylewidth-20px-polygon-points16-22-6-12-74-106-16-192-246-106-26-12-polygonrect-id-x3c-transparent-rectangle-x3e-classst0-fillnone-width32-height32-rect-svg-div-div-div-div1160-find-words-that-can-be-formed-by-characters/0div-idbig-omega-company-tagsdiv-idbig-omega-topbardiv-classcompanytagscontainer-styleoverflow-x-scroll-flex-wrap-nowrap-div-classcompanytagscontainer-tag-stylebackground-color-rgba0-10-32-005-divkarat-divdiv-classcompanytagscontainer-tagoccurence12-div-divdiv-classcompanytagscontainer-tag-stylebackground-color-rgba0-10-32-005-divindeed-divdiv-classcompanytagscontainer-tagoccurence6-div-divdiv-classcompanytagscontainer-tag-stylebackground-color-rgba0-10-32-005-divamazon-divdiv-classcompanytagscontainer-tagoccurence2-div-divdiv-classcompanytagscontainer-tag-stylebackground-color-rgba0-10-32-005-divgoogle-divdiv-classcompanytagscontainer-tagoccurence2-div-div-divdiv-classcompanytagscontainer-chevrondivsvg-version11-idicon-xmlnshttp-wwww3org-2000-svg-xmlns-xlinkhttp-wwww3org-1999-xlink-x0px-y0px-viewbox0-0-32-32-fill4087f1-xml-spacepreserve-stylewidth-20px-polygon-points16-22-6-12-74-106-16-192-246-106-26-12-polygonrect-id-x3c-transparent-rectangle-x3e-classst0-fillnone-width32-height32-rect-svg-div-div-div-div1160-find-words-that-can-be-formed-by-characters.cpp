#include <vector>
#include <string>
class Solution {
public:

    int countCharacters(const std::vector<std::string>& words, const std::string& chars) {
        int ans = 0;
        std::vector<int> charFrequency(256, 0);

        // Count the frequency of each character in chars
        for (char c : chars) {
            charFrequency[c]++;
        }

        // Check each word in words
        for (const std::string& word : words) {
            std::vector<int> wordFrequency(256, 0);
            bool valid = true;

            // Count the frequency of each character in the current word
            for (char c : word) {
                wordFrequency[c]++;
                if (wordFrequency[c] > charFrequency[c]) {
                    valid = false;
                    break;
                }
            }

            // If the word is valid, add its length to the answer
            if (valid) {
                ans += word.size();
            }
        }

        return ans;
    }
};
