#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "ASCII_Art.h"
#include "StringVariables.h"

using namespace std;

bool invalid = false;

int menu();
int birthControl();
int GMO();
int antibiotics();

string selection; // Variable used to store all menu inputs from user.
int selectionInt;

int gmoTimelineOptions() {
    cout << gmoAdditionalOptionsPrompt;
    cout << gmoAdditionalOptionsString;
    cout <<  "15. " << back << "\n\n";
    if (invalid) {
        cout << "Please enter a valid option!\n\n";
    }
    cin >> selection;
    selectionInt = stoi(selection);
    if (selectionInt < 15 && selectionInt > 0)
    {
      invalid = false;
      system("clear");
      cout << gmoTimelineOptionString(selectionInt);
      cin.ignore();
      cin.get();
      system("clear");
      gmoTimelineOptions();
    } else
    if (selectionInt == 15) {
        invalid = false;
        system("clear");
        GMO();
    } else {
        invalid = true;
        system("clear");
        gmoTimelineOptions();
    }
}

// Function for easier animation for timeline GMO

int timeLine(int dashes) {
    for (int i = 0; i < dashes; i++) {
        usleep(300000);
        cout << "|\n";
    }
}

////////////////// START MAIN SUBJECT MENU OPTION EVENTS /////////////

int bcOptions(int option) {
    if (option == 1) { // Birth rates
        cout << bc1Art;
        cout << bc1Stats1;
        cout << bcOption1;
        cin.ignore();
        cin.get();
        system("clear");
        cout << bc1Art;
        cout << bc1Stats2;
        cout << bcOption1;
        cin.get();
        system("clear");
        cout << bc1Art;
        cout << bc1Stats3;
        cout << bcOption1;
        cin.get();
        system("clear");
        birthControl();
    } else
    if (option == 2) { // Pricing
        cout << bc2Art;
        cout << bc2Stats1;
        cin.ignore();
        cin.get();
        cout << bc2Stats2;
        cin.get();
        cout << bc2Stats3;
        cin.get();
        cout << bc2Stats4;
        cin.get();
        system("clear");
        birthControl();
    } else
    if (option == 3) { // Chemical Structures
        cout << chemStrucArt;
        cout << "Birth control are mostly made of two compounds. Estradiol and Progesterone.\n";
        cin.ignore();
        cin.get();
        cout << "These are naturally-occuring enzymes in female bodies, but the pill has them modified to achieve its specific purpose.\n";
        cin.get();
        cout << "Here are their chemical structures:\n";
        cin.get();
        system("clear");
        cout << chemStrucArt;
        cout << bc3EstradiolArt;
        cout << bc3EstradiolChemArt;
        cin.get();
        system("clear");
        cout << chemStrucArt;
        cout << bc3ProgesteroneArt;
        cout << bc3ProgesteroneChemArt;
        cin.get();
        system("clear");
        birthControl();
    }
}

int abOptions(int option) {
    if (option == 1) { // How it works
        cout << ab1Art;
        cout << "Various types of antibiotics work in either of the following two ways:\n";
        cin.ignore();
        cin.get();
        cout << bcOption2_1;
        cin.get();
        cout << bcOption2_2;
        cin.get();
        system("clear");
        antibiotics();
    } else
    if (option == 2) { // Most common diseases treated by antibiotics
        cout << ab2Art;
        cout << "The 10 most common diseases that are treated by antibiotics are: \n\n";
        cout << abOption2;
        cin.ignore();
        cin.get();
        system("clear");
        antibiotics();
    } else
    if (option == 3) { // Chemical Structures
        cout << abOption3;
        cin.ignore();
        cin.get();
        system("clear");
        antibiotics();
    }
}

int gmoOptions(int option) {
    if (option == 1) { // Effects on food supplies
        system("clear");
        cout << gmo1Art;
        cout << gmoOption1_1;
        cin.ignore();
        cin.get();
        cout << gmoOption1_2;
        cin.get();
        cout << gmoOption1_3;
        cin.get();
        system("clear");
        GMO();
    } else
    if (option == 2) { // Timeline
        // cout timeline text
        cout << "1935 - DNA Discovered";
        cin.ignore();
        cin.get();
        timeLine(19);
        cout << "1953 - Double Helix structure in DNA discovered";
        cin.get();
        timeLine(20);
        cout << "1973 - Recombinant DNA Created";
        cin.get();
        timeLine(2);
        cout << "1975 - Asilomar Conference";
        cin.get();
        timeLine(5);
        cout << "1980 - First GMO Patent Issued";
        cin.get();
        timeLine(2);
        cout << "1982 - FDA Approves First GMO";
        cin.get();
        timeLine(12);
        cout << "1994 - GMO Hits Grocery Stores";
        cin.get();
        timeLine(2);
        cout << "1996 - GMO-Resistant Weeds";
        cin.get();
        timeLine(1);
        cout << "1997 - Mandatory Labels";
        cin.get();
        timeLine(2);
        cout << "1999 - GMO Food Crops Dominate";
        cin.get();
        timeLine(4);
        cout << "2003 - GMO-Resistant Pests";
        cin.get();
        timeLine(8);
        cout << "2011 - Bt Toxin in Humans";
        cin.get();
        timeLine(1);
        cout << "2012 - Farmer Wins Court Battle";
        cin.get();
        timeLine(2);
        cout << "2014 - GMO Patent Expires";
        cin.get();
        system("clear");
        gmoTimelineOptions();
    } else
    if (option == 3) { // Chemical Structures
        cout << "An example of the chemical structure for a GMO is the base formula for a pesticide used in some\n"
        "plants to make them more resistent.\n";
        cin.ignore();
        cin.get();
        system("clear");
        cout << "This pesticide was called 'Round Up.' Here's the chemical structure: \n";
        cin.get();
        system("clear");
        cout << gmo3RoundUpArt;
        cout << gmo3RoundUpChemArt;
        cin.get();
        system("clear");
        GMO();
    }
}

///////////////// END MAIN SUBHECT MENU OPTION EVENTS ///////////////

////////////////// START MAIN SUBJECT MENU HANDLERS //////////////////

int birthControlMenu() {
    cin >> selection;
    selectionInt = stoi(selection);
    if (selectionInt < 4 && selectionInt > 0) {
      system ("clear");
      bcOptions(selectionInt);
    } else if (selectionInt == 4) {
      system ("clear");
      menu();
    } else { // <-- If user input something other than 1-4
        system ("clear");
        cout << bcArt;
        // DISPLAY MENU [START]
        cout << "Select an option.\n\n";
        cout << "1. " << bcOne << "\n"
                "2. " << bcTwo << "\n"
                "3. " << bcThree << "\n"
                "4. " << back << "\n\n";
        // DISPLAY MENU [END]
        cout << "Please enter a valid option!\n\n"; // Display error when user gives invalid option
        birthControlMenu(); // Re-initializes menu function for option select
    }
}

int antibioticsMenu() {
    if (selection == "1") {
        system ("clear");
        abOptions(1);
    } else
    if (selection == "2") {
        system ("clear");
        abOptions(2);
    } else
    if (selection == "3") {
        system ("clear");
        abOptions(3);
    } else
    if (selection == "4") {
        system ("clear");
        menu();
    } else { // <-- If user input something other than 1-4
        system ("clear");
        cout << abArt;
        // DISPLAY MENU [START]
        cout << "Select an option.\n\n";
        cout << "1. " << abOne << "\n"
                "2. " << abTwo << "\n"
                "3. " << abThree << "\n"
                "4. " << back << "\n\n";
        // DISPLAY MENU [END]
        cout << "Please enter a valid option!\n\n"; // Display error when user gives invalid option
        cin >> selection;
        antibioticsMenu(); // Re-initializes menu function for option select
    }
}

int gmoMenu() {
    if (selection == "1") {
        system ("clear");
        gmoOptions(1);
    } else
    if (selection == "2") {
        system ("clear");
        gmoOptions(2);
    } else
    if (selection == "3") {
        system ("clear");
        gmoOptions(3);
    } else
    if (selection == "4") {
        system ("clear");
        menu();
    } else { // <-- If user input something other than 1-4
        system ("clear");
        cout << gmoArt;
        // DISPLAY MENU [START]
        cout << "Select an option.\n\n";
        cout << "1. " << gmoOne << "\n"
                "2. " << gmoTwo << "\n"
                "3. " << gmoThree << "\n"
                "4. " << back << "\n\n";
        // DISPLAY MENU [END]
        cout << "Please enter a valid option!\n\n"; // Display error when user gives invalid option
        cin >> selection;
        gmoMenu(); // Re-initializes menu function for option select
    }
}

////////////////// END MAIN SUBJECT MENU HANDLERS //////////////////

////////////////// START MAIN SUBJECT FUNCTIONS //////////////////

int birthControl() { // Display ASCII Art
    cout << bcArt;

    // DISPLAY MENU [START]
    cout << "Select an option\n\n";
    cout << "1. " << bcOne << "\n"
            "2. " << bcTwo << "\n"
            "3. " << bcThree << "\n"
            "4. " << back << "\n\n";
    // DISPLAY MENU [END]
    birthControlMenu();
}

int antibiotics() {
    cout << abArt; // Display ASCII Art

    // DISPLAY MENU [START]
    cout << "Select an option\n\n";
    cout << "1. " << abOne << "\n"
            "2. " << abTwo << "\n"
            "3. " << abThree << "\n"
            "4. " << back << "\n\n";
    // DISPLAY MENU [END]
    cin >> selection;
    antibioticsMenu();
}

int GMO() {
    cout << gmoArt; // Display ASCII Art

    // DISPLAY MENU [START]
    cout << "Select an option\n\n";
    cout << "1. " << gmoOne << "\n"
            "2. " << gmoTwo << "\n"
            "3. " << gmoThree << "\n"
            "4. " << back << "\n\n";
    // DISPLAY MENU [END]
    cin >> selection;
    gmoMenu();
}

int References() {
    cout << refArt;
    cout << "1. " << ref1 <<
            "2. " << ref2 <<
            "3. " << ref3 <<
            "4. " << ref4 <<
            "5. " << ref5;
    cin.ignore();
    cin.get();
    menu();
}

////////////////// END MAIN SUBJECT FUNCTIONS //////////////////

int menu() { // Main menu function
    system ("clear");
    // DISPLAY MENU [START]
    cout << "Welcome to Owen Hines' chemistry interactive lesson!\n\n"
    "In this program, you're going to be learning about the role of "
    "chemistry in the history of human population.\n\n"
    "There are many ways that chemistry has affected population changes in history.\n\n"
    "Please choose what you would like to learn about first.\n\n";
    cout << "1. " << mainOne << "\n"
            "2. " << mainTwo << "\n"
            "3. " << mainThree << "\n"
            "4. " << mainFour << "\n"
            "5. " << quit << "\n\n";
    if(invalid) {
        cout << "Please enter a valid option!\n\n"; // Display error when user gives invalid option
    }
    // DISPLAY MENU [END]
    cin >> selection;
    if (selection == "1") {
        system ("clear");
        invalid = false;
        birthControl(); // Point to Birth Control Selection Menu
    } else
    if (selection == "2") {
        system ("clear");
        invalid = false;
        antibiotics(); // Point to Antibiotics Selection Menu
    } else
    if (selection == "3") {
        system ("clear");
        invalid = false;
        GMO(); // Point to GMO Selection Menu
    } else
    if (selection == "4") {
        system("clear");
        invalid = false;
        References();
    } else
    if (selection == "5") {
        system ("clear");
        exit(1);
    } else { // <-- If user input something other than 1-4
        invalid = true;
        menu(); // Re-initializes menu function for option select
    }

}

int main() { // Initialize program here, references menu which points to whatever user specifies.
    system ("clear"); // clears console for next section
    menu(); // Initializes menu function to display options
}
