// cyoa.cpp
// Name: Desire Hernandez

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << "You're in your apartment and you look out your window and see your"
          "city is being attacked by Galactic Flame. You run outside to find"
          "somewhere safer. You bump into a man and he guarantees you this"
          "building has a safe underground bunker."
       << endl;
  cout << "WHAT DO YOU DO?" << endl;
  
  cout << "Pick your choice:\n"
          "\t1 - KEEP RUNNING\n"
          "\t2 - FOLLOW HIM\n";
  int run;
  cin >> run;
  
  if (run == 1) {
    cout << "You follow a group of people going up the parking structure. You"
            "all sit in panic. A helicopter arrives and you all hop on. They"
            "take you to safety. YOU SURVIVED"  
         << endl;
  } else if (run == 2) {
    cout << "You find yourself in a high tech room. He tells you he can make"
            "anyone into a superhero. He asks you if you are willing to save"
            "your city by transforming you."
         << endl;
    cout << "WHAT WILL BE YOUR DECISION?" << endl;
    cout << "Pick your choice:\n"
            "\t1 - REJECT OFFER\n"
            "\t2 - BECOME A SUPERHERO\n";
    int hero;
    cin >> hero;
   
    if (hero == 1) {
      cout << "He understands your decision and let's you stay. You watch your "
              "city get destroyed on TV and feel regret, but you're safe. YOU "
              "SURVIVED" 
           << endl;
    } else if (hero == 2) {
      cout << "Choose your superpower:\n"
              "\t1 - WATER MANIPULATION\n"
              "\t2 - LASER BEAM\n"
              "\t3 - STRENGTH\n";
      int superpower;
      cin >> superpower;
        
      if (superpower == 1) {
        cout << "Your superhero name is Hydro Blast." << endl;
        cout << "DO YOU KEEP IT OR SWITCH IT TO AQUA BLAST?" << endl;
        cout << "Choose your superhero name:\n"
                "\t1 - HYDRO BLAST\n"
                "\t2 - AQUA BLAST\n";
        int hero_1;
        cin >> hero_1;

        string hero1_name = "Hydro Blast";
            
        if (hero_1 == 1) {
        } else if (hero_1 == 2) {
          string new_hero1_name = "Aqua";
          hero1_name.erase(0, 5);
          hero1_name.insert(0, new_hero1_name);
        } else {
          cout << "Not an option. Try again." << endl;
          return 1;
        }
        cout << "Your offical superhero name is " << hero1_name
             << "! You go out to face the Galactic Flame." << endl;
        cout << "WHICH SPECIAL MOVE DO YOU CHOOSE?" << endl;
        cout << "Choose your move:\n"
                "\t1 - HURRICANE BLAST\n"
                "\t2 - AQUA HAMMER\n";
        int hero_1_move;
        cin >> hero_1_move;
        int galactic_health = 100;

        if (hero_1_move == 1) {
          int damage = 70;
          cout << "Wow! You damaged the Galactic Flame " << damage << "%."
               << endl; 
                
          cout << "Now it's at " << galactic_health - damage
               << "%. It's too weak to fight back. You use another move and "
                  "defeat the Galactic Flame. YOU SURVIVED" 
               << endl;
        } else if (hero_1_move == 2) {
          int damage_2 = 20;
          cout << "You lowered the Galactic Flame damage by " << damage_2
               << "%." << endl;

          cout << "Now it's health is at " << galactic_health - damage_2
               << "%. It uses it's ultimate combo move and you were killed. "
                  "GAME OVER"
               << endl;
        } else {
          cout << "Not an option. Try again." << endl;
          return 1;
        }
      } else if (superpower == 2) {
        cout << "Your superhero name is Atomic Star. You go to fight the "
                "Galactic Flame. He knocks down your health 30%."
             << endl;
        cout << "DO YOU USE SUPER BEAM OR LASER FIST?" << endl;
        cout << "Choose your move:\n"
                "\t1 - SUPER BEAM\n"
                "\t2 - LASER FIST\n";
        int hero_2_move;
        cin >> hero_2_move;
              
        if (hero_2_move == 1) {
          cout << "Nice! You defeated the Galactic Flame. You saved your city! "
                  "YOU SURVIVED"
               << endl;
        } else if (hero_2_move == 2) {
          int my_health = 100;
          int damage_3 = 30;
          my_health = my_health - damage_3;
          if (my_health > 50) {
            cout << "Oh no! You took " << my_health
                 << "% damage from it's reverse attack. You missed your chance "
                    "at knocking him out. He throws flames at you and you burn "
                    "to death. GAME OVER"
                 << endl;
          }
        } else {
          cout << "Not an option. Try again." << endl;
          return 1;
        }
      } else if (superpower == 3) {
        cout << "Your superhero name is Silver Man." << endl;
        cout << "DO YOU KEEP IT OR SWITCH IT TO SILVER WOMAN?" << endl;
        cout << "Choose your superhero name:\n"
                "\t1 - SILVER MAN\n" 
                "\t2 - SILVER WOMAN\n";
        int hero_3;
        cin >> hero_3;
              
        string hero3_name = "Silver Man";
        string new_hero3_name = "Wo";
        if (hero_3 == 1) {               
        } else if (hero_3 == 2) {
          hero3_name[7] = tolower(hero3_name[7]);
          hero3_name.insert(7, new_hero3_name);
        } else {
          cout << "Not an option. Try again." << endl;
          return 1;
        }
        cout << "Your offical superhero name is " << hero3_name
             << "! You go out to face the Galactic Flame." << endl;
        cout << "WHAT MOVE DO YOU CHOOSE?" << endl;
        cout << "Pick your choice:\n"
                "\t1 - MEGA PUNCH\n"
                "\t2 - ULTRA POUND\n";
        int hero3_move;
        cin >> hero3_move;
                
        if (hero3_move == 1) {
          cout << "You damaged the Galactic Flame by 65%. And it damages you "
                  "by 50%."
               << endl;
          cout << "WHO HAS MORE HEALTH?" << endl;
          cout << "Choose who has more health:\n"
                  "\t1 - ME\n"
                  "\t2 - GALACTIC FLAME\n";
          int hero3_health;
          cin >> hero3_health;

          if (hero3_health == 1) {
            int galactic_health_2 = 100;
            int my_health_3 = 100;
            int punch_damage = 65;
            int flame_damage = 50;

            my_health_3 = my_health_3 - flame_damage;
            galactic_health_2 = galactic_health_2 - punch_damage;

            if (my_health_3 > galactic_health_2) {
              cout << "Correct! You have enough strength to defeat it. You "
                      "save your city! YOU SURVIVED"
                   << endl;
            }
          } else if (hero3_health == 2) {
            cout << "Wrong. You miscalculated your power and died. GAME OVER"
                 << endl;
          } else {
            cout << "Not an option. Try again." << endl;
            return 1;
          }
        } else if (hero3_move == 2) {
          cout << "Amazing! One big ultra pound knocked out Galactic Flame adn "
                  "you were able to destroy it. YOU SURVIVED"
               << endl;

        } else {
          cout << "Not an option. Try again." << endl;
          return 1;
        }
      } else {
        cout << "Not an option. Try again." << endl;
        return 1;
      }
    } else {
      cout << "Not an option. Try again." << endl;
      return 1;
    }
  } else {
    cout << "Not an option. Try again." << endl;
    return 1;
  }
  
  return 0;
}