#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

string randomWord ();
bool checkResult (char , string , string &, int );
void printResult (string, int);
void hangMan ();

const int max_wrong_guess=7;
const string WORD_LIST[] = {
    "angle", "ant", "apple", "arch", "arm", "army",
    "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
    "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
    "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
    "cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
    "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
    "cow", "cup", "curtain", "cushion",
    "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
    "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
    "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
    "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
    "hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
    "leaf", "leg", "library", "line", "lip", "lock",
    "map", "match", "monkey", "moon", "mouth", "muscle",
    "nail", "neck", "needle", "nerve", "net", "nose", "nut",
    "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
    "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
    "rail", "rat", "receipt", "ring", "rod", "roof", "root",
    "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
    "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
    "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
    "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
    "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
    "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
};
const int word_count = sizeof(WORD_LIST)/sizeof(string);
const string FIGURE[] = {
    " ------------- \n"
    " | \n"
    " | \n"
    " | \n"
    " | \n"
    " | \n"
    " ----- \n",
    " ------------- \n"
    " |           | \n"
    " | \n"
    " | \n"
    " | \n"
    " | \n"
    " ----- \n",
    " ------------- \n"
    " |           | \n"
    " |           O \n"
    " | \n"
    " | \n"
    " | \n"
    " ----- \n",
    " ------------- \n"
    " |           | \n"
    " |           O \n"
    " |           | \n"
    " | \n"
    " | \n"
    " ----- \n",
    " ------------- \n"
    " |           | \n"
    " |           O \n"
    " |          /| \n"
    " | \n"
    " | \n"
    " ----- \n",
    " ------------- \n"
    " |           | \n"
    " |           O \n"
    " |          /|\\ \n"
    " | \n"
    " | \n"
    " ----- \n",
    " ------------- \n"
    " |           | \n"
    " |           O \n"
    " |          /|\\ \n"
    " |          / \n"
    " | \n"
    " ----- \n",
    " ------------- \n"
    " |           | \n"
    " |           O \n"
    " |          /|\\ \n"
    " |          / \\ \n"
    " | \n"
    " ----- \n",
};

int main (){
    srand(time(0));
    char again;
    do {
        hangMan();
        do {
            cout << "Do you want play again? (Y/N) ";
            cin >> again;
        } while (!(again=='Y'||again=='N'));
    } while (again=='Y');
}

void hangMan (){
    string word = randomWord();
    int wordLength = (int)word.length();
    int wrongGuess = 0;
    string result(wordLength, '_');
    while (wrongGuess<max_wrong_guess&&word!=result){
        printResult(result, wrongGuess);
        char guess;
        cin >> guess;
        if (!checkResult( guess, word, result, wordLength)){
            wrongGuess++;
        }
    }
    printResult(result, wrongGuess);
    if (wrongGuess==7){
        cout <<"You lose!"<<endl;
    } else {
        cout <<"You win!"<<endl;
    }
}

string randomWord (){
    int randomIndex = rand() % word_count;
    return WORD_LIST[randomIndex];
}


bool checkResult (char a, string s, string &result, int n){
    bool correctChar = false;
    for (int i=0; i<n; i++){
        if (s[i]== a){
            result[i] = a;
            correctChar = true;
        }
    }
    return correctChar;
}

void printResult (string result, int wrongGuess){
    cout << FIGURE[wrongGuess]<<endl;
    cout << "Number of wrong guesses: "<<wrongGuess<<endl;
    cout << result<<endl<<endl;
}
