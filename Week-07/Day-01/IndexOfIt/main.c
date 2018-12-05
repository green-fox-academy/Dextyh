#include <stdio.h>
#include <string.h>

int isIn(char* sentence, char* word);

int main() {

    char *sentence = "An apple a day keeps the doctor away.";
    char *word = "doctor";

    printf("%d", isIn(sentence, word));

    return 0;
}

int isIn(char * sentence, char * word)
{
    int wordCounter = 0;

    for (int i = 0; sentence[i] != '\0'; ++i) {
        if(sentence[i] == ' ') {
            wordCounter++;
        } else if(sentence[i] == word[0]) {
            int bool = 1;
            int newI = i;

            for (int j = 0; j < strlen(word); ++j) {
                if(sentence[newI] != word[j]) {
                    bool = 0;
                    break;
                }
                newI++;
            }
            if (bool == 1) {
                printf("Your world is in the sentence! Index number of the word: ");
                return wordCounter;
            }
        }
    }
    printf("Your world is NOT in the sentence!");
    return 0;
}
