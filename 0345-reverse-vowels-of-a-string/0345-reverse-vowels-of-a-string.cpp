class Solution {
public:
    // Ek helper function jo check karega ki character vowel hai ya nahi
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;


        while (i < j) {
            // Agar s[i] vowel nahi hai, toh aage badho
            if (!isVowel(s[i])) {
                i++;
            } 
            // Agar s[j] vowel nahi hai, toh peeche aao
            else if (!isVowel(s[j])) {
                j--;
            } 
            // Agar dono vowels hain, toh swap karo
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        
        return s; // Modified string ko return karna zaroori hai
    }
};