#include <iostream>
#include "ufo_functions.hpp"

int main() {
greet();
std::vector <std::string> codeword_choices = {"applesauce", "cookies", "shampoo", "orthodontist", "horse", "vaccum", "bottle"};
std::string answer = "";
int misses = 0;
std::vector <char> incorrect;
bool guess = false;
char letter;
char play_again = 'Y';

while(play_again = 'Y'){
  std::string codeword = choose_codeword(codeword_choices);
  for (int i = 0; i < codeword.length();i++){
    answer = answer + "_";
  }

while (answer != codeword && misses < 7){
  display_misses(misses);
  display_status(incorrect, answer);
  
  std::cout << "Please enter your guess: ";
  std::cin >> letter;
  letter = tolower(letter);

  for(int i = 0; i < codeword.length(); i++){
    if (letter == codeword[i]){
      answer[i] = letter;
      guess = true;
    }
  }
  if (guess){
    std::cout << "Correct!\n";
  }
  else{
    std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
    incorrect.push_back(letter);
    misses++;
  }
  guess = false;
}

end_game(answer, codeword);

std::cout << "Play again? (Y/N):";
std::cin >> play_again;
play_again = toupper(play_again);
}
}
