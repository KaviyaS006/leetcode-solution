class Solution {
public:

    bool isVowel(char ch) {
        char c = tolower(ch);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i < j) {
            if(isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i], s[j]);
                i++, j--;
            }
            else if(!isVowel(s[i])) i++;
            else j--;
        }
        return s;
    }
};