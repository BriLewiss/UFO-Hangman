#include <iostream>
#include <vector>


void greet(){
  std::cout << "=============\nUFO: The Game\n=============\nInstructions: Save your friend from the alien abduction by guessing the letters in the codeword.\n";
}

void end_game(std::string answer, std::string codeword){
  if (answer == codeword){
  std::cout << "Hooray! You saved the person and eraned a medal of honor!";
}
else {
  std::cout << "Oh no! The UFO just flew away with another person! Codeword was: " << codeword << "\n";
}
}

void display_status(std::vector<char> incorrect, std::string answer){
  std::cout << "Incorrect Guesses:";
  for (int i = 0; i < incorrect.size(); i++){
    std::cout << incorrect[i] << " ";
  }
 std::cout << "\n";

  std::cout << "Codeword: ";
  for(int i = 0; i < answer.length(); i++){
    std::cout << answer[i] << " ";
  }
  std::cout << "\n";
}

std::string choose_codeword (std::vector <std::string> codeword_choices){
  int randomIndex = rand() % codeword_choices.size();
  return codeword_choices[randomIndex];
}

void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }

}
