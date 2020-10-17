/*****************************************************
 * Program Filename: catalog.CPP
 * Author: Michael Decosta
 * Date: 10/13/20
 * Description: SPECIFIC FILE USED FOR FUNCTION HOUSING
 * FOR FILE I/O ASSIGNMENT. ASSIGNMENT TAKES IN A FILE
 * AS COMMAND LINE ARG AND SORTS DATA THAT USERS CAN
 * LOOK THROUGH FOR HIGHLIGHT INFORMATION.
 * Input: INTEGERS, INFILES AND STRUCTS
 * Output: DELETION OF MEMORY LEAKS, FILE READING
*****************************************************/



#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <fstream>
#include "catalog.h"

using namespace std;
/************************
//get function to input the spellbook info
void get_spellbook_data(spellbook* spellbook, int counter, ifstream & file) {
    string title;
    string author;
    int num_pages;
    string edition;
    int num_spells;
    for ( int i = 0; i < counter; i++) {

    file >> spellbook[i].title;
    file >> spellbook[i].author;
    file >> spellbook[i].num_pages;
    file >> spellbook[i].edition;
    file >> spellbook[i].num_spells;
    }
}
spellbook* create_spellbook(int counter) {
spellbook* spellbook_db = new spellbook[counter];

    }

//get function to input the info on each wizard
void get_wizard_data(wizard* wizard, int counter, ifstream & file) {

    string name;
    int id;
    string password;
    string position_title;
    string beard_lenght;
    for (int i = 0; i <counter; i++) {
        file >> wizard[i].name;
        file >> wizard[i].id;
        file >> wizard[i].password;
        file >> wizard[i].position_title;
        file >> wizard[i].beard_length;
    }
}

//creates wizard
wizard*  create_wizard_info(int counter) {
   wizard* wizard_db = new wizard[counter];
   return wizard_db;
}
//swap function that holds in temp then switches
void swap(spell* x, spell* y) {
    spell* temp = x;
    x = y;
    y = temp;
}

//a function to bubble sort the effects of the spells
//this function groups the spells effects in groups starting with bubble...
void effects_sort(spell* arr, int count) {

   int bubble_counter = 0;
   int memory_loss_counter = 0;
   int fire_counter = 0;
   int poison_counter = 0;
   int death_counter = 0;
    for ( int i = 0; i < count; i++) {
            if (arr[i].effect == "bubble") {
                bubble_counter++;
         }
             else if (arr[i].effect == "memory_loss") {
                memory_loss_counter++;
        }
            else if (arr[i].effect == "fire") {
                    fire_counter++;
        }
            else if (arr[i].effect == "poison") {
                    poison_counter++;
        }
            else if (arr[i].effect == "death") {
                    death_counter++;
        }
    }
        spell* bubble = new spell[bubble_counter];
        spell* memory_loss = new spell[memory_loss_counter];
        spell* fire = new spell[fire_counter];
        spell* poison = new spell[poison_counter];
        spell* death = new spell[death_counter];



    string filename;
    int bubble_spell = 0;
    int memory_loss_spell = 0;
    int fire_spell = 0;
    int poison_spell = 0;
    int death_spell = 0;
    int choice;
    for (int i = 0; i < count; i++) {
        if (arr[i].effect == "bubble") {
            bubble[bubble_spell] = arr[i];
            bubble_spell++;
        }
        else if (arr[i].effect == "memory_loss") {
            memory_loss[memory_loss_spell] = arr[i];
            memory_loss_spell++;
        }
        else if (arr[i].effect == "fire") {
            fire[fire_spell] = arr[i];
            fire_spell++;
        }
        else if (arr[i].effect == "poison") {
            poison[poison_spell] = arr[i];
            poison_spell++;
        }
        else if (arr[i].effect == "death") {
            death[death_spell] = arr[i];
            death_spell++;
        }

    }

    cout << "How would you like this information to be displayed?" << endl;
    cout << "print to screen (Press 1)" << endl;
    cout << "print to file (Press 2)" << endl;
    cin >> choice;
   // ofstream ofs;
    if  (choice == 2); {
        cout << "please enter a file name";
        cin >> filename;
    }
   // if (ofs.open(filename) == false) {
     //  cout <<  "File does not exist, creating new file called" << filename;
   // }
    if (choice == 1) {
        cout << bubble_spell;
        cout << memory_loss_spell;
        cout << fire_spell;
        cout << poison_spell;
        cout << death_spell;
    }
}

void delete_info(wizard* clean) {
delete[] clean;
}
*******************************/
/******
// cant get to compile need to comment out
spell * create_spells(int num_spell) {
        spell* spell_arr = new spell[num_spell];
        return spell_arr;
    }

    int login(wizard wizard_data, int wizard_num, int &status) {
        string username;
        string password;
        cin >> username;
        cin >> password;
        for (int i = 0; i < 3; i++) {
        for (int m = 0; m < username.length(); m++) {
            if (username[m] != '0' or username[m] != '1' or username[m] != '2' or username[m] != '3' or username[m] != '4' or username[m] != '5' or username[m] != '6' or username[m] != '7' or username[m] != '8' or username[m] != '9') {
            cout << "please enter all integers" << endl;
            }
            else {
            cout <<"Please enter your user Id: " << endl;
            cout << "Please enter your password: " << endl;


            }

            for (int j = 0; j < wizard_num; j++) {
           //     if (username == wizard[j].id && password == wizard[j].password)  {
           // cout << "\nWelcome " << wizard[j].id << endl;
           // cout << "Status: " << wizard[j].position_title << endl;
             //   if (wizard[j].position_title== "Student") {
                    status = 1;
              //  }
          //  cout << "Beard Length: " << wizard[j].beard_length << endl;
            return 0;
       // }
    }
  //  cout << "nIncorrect username or password" << " you have " << 3 - (i+1) << "try's left\n" << endl;
    }
   // cout << "Too many incorrect attempts, please quit program" << endl;
    return 1;
    }
        }

/****************************************
 * Function: int_check
 * Description: makes sure that a valid int has been entered
 * Parameters: string m and a lower and b upper params
 * Pre-Condition: params must be given before called
 * Post-Condition: will loop until a valid int is given
 * *****************************/
   // int int_check(string m, char a, char b) {
     //   string store;
       /// bool err;
       // int total;
       // do {
         //   err = false;
           // cout << m << "\n" << endl;
           // getline(cin, store);
           // for (int i = 0; i < store.size(); i++) {
             //   if ( a > '0'){
              //  if (!(store.at(i) >= a && store.at(i) <= b)) {
                //        err = true;
                  //      cout << "Your input must be a valid integer" << endl;
              // break;
  /*             //     }
                }
                if (!(store.at(i) >= '0' && store.at(i) <= '9')) {
                    err = true;
                    cout << "Your input must be ALL integers " << endl;
                 break;
                    }
                 }
            } while(err);
            total = atoi(store.c_str());
            return total;
    }
***********/
/*************************
 * Function: delete_info
 * Description: frees memory on the heap
 * Parameters: wizard, spellbook, and num of spellbooks
 * Pre-Condition: must be called an arrays initialized
 * Post-Condition: all memory is freed
 * *********************/
/********
    void delete_info(wizard * wizard, spellbook *spellbook, int spellbook_num) {
               for (int i = 0; i < spellbook_num; i++) {
                   delete[] spellbook;
                   delete[] spellbook[i].s;
               }

        }


/**************************
 * Function: print_sort
 * Description: prints sorted results to console or a file, also checks if student can view
 * Parameters:  status, spellbook, spellbook number, filename, choice
 * Pre-Condition: must be called by num_pages_sort and initialized
 * Post-Condition:  num_pages_sort will be printed to console or file
 **************************/
         /*  void print_sort(int status, spellbook *spellbook, int spellbook_num, string filename, int choice)
           {
            bool student;
            for (int i = 0; i < spellbook_num; i++) {
                student = false;
                for (int j = 0; j <spellbook[i].num_spells; j++) {
                    if (((spellbook[i].s[j].effect.compare("poison") == 0) || spellbook[i].s[j].effect.compare("death") ==0) && status ==1) {
                        student = true;
                        }
                }
                if (student == false && choice ==1) {
                    cout << spellbook[i].title << " ";
                    cout << spellbook[i].num_pages << endl;
                }
                else if (student == false && choice == 2) {
                    ofstream file;
                //    file.open(filename.c.str(), ios::app);
                    file << spellbook[i].title << " ";
                    file << spellbook[i].num_pages << endl;
                    file.close();
                }
            }
          }
          *****/
/***************************
 * Function: num_pages_sort
 * Description: sorts spellbook by number of pages in each book
 * Parameters: status,spellbook, spellbook number
 * Pre-Condition: must be selected by user and parameters must all be initialized
 * Post-Condition: spellbook will be sorted and sent to be printed
 * ************************/
  /*  void num_pages_sort(int status, spellbook *spellbook, int spellbook_num) {

        spellbook temp;
        int choice;
        string filename;
        for (int i = 0;i < spellbook_num - 1; i++) {
              for (int j = 0; j < spellbook_num - i - 1; j++) {
                  if (spellbook[j].num_pages > spellbook[j+1].num_pages) {
                      temp = spellbook[j+1];
                      spellbook[j+1] = spellbook[j];
                      spellbook[j] = temp;
                    }
              }
        }
        choice = int_check("would you like to output to the screen or to a file? (Press 1 or press 2)", '1','2');
        if (choice == 2) {
            cout << "Please enter a file to append to: " << endl;
            getline(cin,filename);
        }
        print_num_pages_sort(status, spellbook, spellbook_num, filename, choice);
    }
*****/


