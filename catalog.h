/***********************************************
 * Program Filename: catalog.H
 * Author: Michael Decosta
 * Date: 10.13.20
 * Description: INTRODUCES LIBRARIES, FUNCTION
 * HEADERS, AND STRUCT DECLARATIONS TO BE USED
 * IN THE REST OF THE PROGRAM.
 * Input: N/A
 * Output: USABLE HEADER LIBRARY
***********************************************/

#ifndef CATALOG_H
#define CATALOG_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

struct wizard {
        string name;
        int id;
        string password;
        string position_title;
        float beard_length;
};

struct spellbook {
        string title;
        string author;
        int num_pages;
        int edition;
        int num_spells;
        float avg_success_rate;
        struct spell *s;
};

struct spell {
        string name;
        float success_rate;
        string effect;
};
// put in variables and name vars
wizard* create_wizard_info(int counter);
spellbook* create_spellbooks(int counter);
void get_spellbook_data(spellbook *spellbook, int counter , ifstream & file);
spell* create_spells(int num_spell);
void get_spell_data(spell*, int, ifstream &);
void get_wizard_data(wizard * wizard, int counter, ifstream & file);
void swap(spell* x, spell* y);
void effects_sort(spell* arr, int count);
void delete_info(wizard* clean);
void delete_info(wizard *wizard, spellbook *spellbook, int spellbook_num);
int int_check(string m, char a, char b);
void print_sort(int status, spellbook *spellbook, int spellbook_num, string filename, int choice);
int login(wizard* wizard, int wizard_num, int &status);
void num_pages_sort( int status, spellbook *spellbook, int spellbook_num);
void effects_sort(spell *arr, int count);
#endif
