class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        int secretCount[10] = {0};
        int guessCount[10] = {0};

        // Pass 1: bulls nikalo, baaki digits ki frequency store karo
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                secretCount[secret[i] - '0']++; //secret[i] - '0': character '7' ko number 7 me convert karta hai, taaki array index bana sake.
                guessCount[guess[i] - '0']++;  //guess[i] - '0': character '7' ko number 7 me convert karta hai, taaki array index bana sake.
            }
        }

        // Pass 2: har digit ke liye min(secret, guess) = cows
        for (int d = 0; d < 10; d++) {
            cows += min(secretCount[d], guessCount[d]);
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};