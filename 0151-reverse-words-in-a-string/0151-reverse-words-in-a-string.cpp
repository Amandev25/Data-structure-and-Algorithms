class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        int i = 0;

        while (i < n) {

            // Skip spaces
            while (i < n && s[i] == ' ') {
                i++;
            }

            if (i >= n) break;

            // Find the end of the word
            int j = i;

            while (j < n && s[j] != ' ') {
                j++;
            }

            // Store the word
            words.push_back(s.substr(i, j - i));

            // Move i to the next position
            i = j;
        }

        reverse(words.begin(), words.end());

        string ans;

        for (int i = 0; i < words.size(); i++) {
            if (i > 0) {
                ans += " ";
            }

            ans += words[i];
        }

        return ans;
    }
};