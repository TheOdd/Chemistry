#include "Chem.h"

bool invalid = false;

std::string selection; // Variable used to store all menu inputs from user.
int selectionInt;

void gmoTimelineOptions() {
    std::cout << gmoAdditionalOptionsPrompt;
    std::cout << gmoAdditionalOptionsString;
    std::cout <<  "15. " << back << std::endl << std::endl;
    if (invalid) {
        std::cout << "Please enter a valid option!" << std::endl << std::endl;
    }
    std::cin >> selection;
    selectionInt = stoi(selection);
    if (selectionInt < 15 && selectionInt > 0)
    {
      invalid = false;
      system("clear");
      std::cout << gmoTimelineOptionString(selectionInt);
      std::cin.ignore();
      std::cin.get();
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

// Function for timeline animation

void timeLine(int dashes) {
    std::cin.get();
    for (int i = 0; i < dashes; i++) {
        usleep(300000);
        std::cout << "|" << std::endl;
    }
}

////////////////// START MAIN SUBJECT MENU OPTION EVENTS /////////////

void bcOptions(int option) {
    if (option == 1) { // Birth rates
        std::cout << bc1Art;
        std::cout << bc1Stats1;
        std::cout << bcOption1;
        std::cin.ignore();
        std::cin.get();
        system("clear");
        std::cout << bc1Art;
        std::cout << bc1Stats2;
        std::cout << bcOption1;
        std::cin.get();
        system("clear");
        std::cout << bc1Art;
        std::cout << bc1Stats3;
        std::cout << bcOption1;
        std::cin.get();
        system("clear");
        birthControl();
    } else
    if (option == 2) { // Pristd::cing
        std::cout << bc2Art;
        std::cout << bc2Stats1;
        std::cin.ignore();
        std::cin.get();
        std::cout << bc2Stats2;
        std::cin.get();
        std::cout << bc2Stats3;
        std::cin.get();
        std::cout << bc2Stats4;
        std::cin.get();
        system("clear");
        birthControl();
    } else
    if (option == 3) { // Chemical Structures
        std::cout << chemStrucArt;
        std::cout << "Birth control are mostly made of two compounds. Estradiol and Progesterone." << std::endl;
        std::cin.ignore();
        std::cin.get();
        std::cout << "These are naturally-occuring enzymes in female bodies, but the pill has them modified to achieve its specific purpose." << std::endl;
        std::cin.get();
        std::cout << "Here are their chemical structures:" << std::endl;
        std::cin.get();
        system("clear");
        std::cout << chemStrucArt;
        std::cout << bc3EstradiolArt;
        std::cout << bc3EstradiolChemArt;
        std::cin.get();
        system("clear");
        std::cout << chemStrucArt;
        std::cout << bc3ProgesteroneArt;
        std::cout << bc3ProgesteroneChemArt;
        std::cin.get();
        system("clear");
        birthControl();
    }
}

void abOptions(int option) {
    if (option == 1) { // How it works
        std::cout << ab1Art;
        std::cout << "Various types of antibiotics work in either of the following two ways:" << std::endl;
        std::cin.ignore();
        std::cin.get();
        std::cout << bcOption2_1;
        std::cin.get();
        std::cout << bcOption2_2;
        std::cin.get();
        system("clear");
        antibiotics();
    } else
    if (option == 2) { // Most common diseases treated by antibiotics
        std::cout << ab2Art;
        std::cout << "The 10 most common diseases that are treated by antibiotics are: " << std::endl << std::endl;
        std::cout << abOption2;
        std::cin.ignore();
        std::cin.get();
        system("clear");
        antibiotics();
    } else
    if (option == 3) { // Chemical Structures
        std::cout << abOption3;
        std::cin.ignore();
        std::cin.get();
        system("clear");
        antibiotics();
    }
}

void gmoOptions(int option) {
    if (option == 1) { // Effects on food supplies
        system("clear");
        std::cout << gmo1Art;
        std::cout << gmoOption1_1;
        std::cin.ignore();
        std::cin.get();
        std::cout << gmoOption1_2;
        std::cin.get();
        std::cout << gmoOption1_3;
        std::cin.get();
        system("clear");
        GMO();
    } else
    if (option == 2) { // Timeline
        // std::cout timeline text
        std::cout << "1935 - DNA Discovered";
        std::cin.ignore();
        timeLine(19);
        std::cout << "1953 - Double Helix structure in DNA discovered";
        timeLine(20);
        std::cout << "1973 - Recombinant DNA Created";
        timeLine(2);
        std::cout << "1975 - Asilomar Conference";
        timeLine(5);
        std::cout << "1980 - First GMO Patent Issued";
        timeLine(2);
        std::cout << "1982 - FDA Approves First GMO";
        timeLine(12);
        std::cout << "1994 - GMO Hits Grocery Stores";
        timeLine(2);
        std::cout << "1996 - GMO-Resistant Weeds";
        timeLine(1);
        std::cout << "1997 - Mandatory Labels";
        timeLine(2);
        std::cout << "1999 - GMO Food Crops Dominate";
        timeLine(4);
        std::cout << "2003 - GMO-Resistant Pests";
        timeLine(8);
        std::cout << "2011 - Bt Toxin in Humans";
        timeLine(1);
        std::cout << "2012 - Farmer Wins Court Battle";
        timeLine(2);
        std::cout << "2014 - GMO Patent Expires";
        system("clear");
        gmoTimelineOptions();
    } else
    if (option == 3) { // Chemical Structures
        std::cout << "An example of the chemical structure for a GMO is the base formula for a pesticide used in some" << std::endl << 
        "plants to make them more resistent." << std::endl;
        std::cin.ignore();
        std::cin.get();
        system("clear");
        std::cout << "This pesticide was called 'Round Up.' Here's the chemical structure: " << std::endl;
        std::cin.get();
        system("clear");
        std::cout << gmo3RoundUpArt;
        std::cout << gmo3RoundUpChemArt;
        std::cin.get();
        system("clear");
        GMO();
    }
}

///////////////// END MAIN SUBHECT MENU OPTION EVENTS ///////////////

////////////////// START MAIN SUBJECT MENU HANDLERS //////////////////

void birthControlMenu() {
    std::cin >> selection;
    selectionInt = stoi(selection);
    if (selectionInt < 4 && selectionInt > 0) {
      system ("clear");
      bcOptions(selectionInt);
    } else if (selectionInt == 4) {
      system ("clear");
      menu();
    } else { // <-- If user input something other than 1-4
        system ("clear");
        std::cout << bcArt;
        // DISPLAY MENU [START]
        std::cout << "Select an option." << std::endl << std::endl;
        std::cout << "1. " << bcOne << std::endl <<
                "2. " << bcTwo << std::endl <<
                "3. " << bcThree << std::endl <<
                "4. " << back << std::endl << std::endl;
        // DISPLAY MENU [END]
        std::cout << "Please enter a valid option!" << std::endl << std::endl; // Display error when user gives invalid option
        birthControlMenu(); // Re-initializes menu function for option select
    }
}

void antibioticsMenu() {
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
        std::cout << abArt;
        // DISPLAY MENU [START]
        std::cout << "Select an option." << std::endl << std::endl;
        std::cout << "1. " << abOne << std::endl <<
                "2. " << abTwo << std::endl <<
                "3. " << abThree << std::endl <<
                "4. " << back << std::endl << std::endl;
        // DISPLAY MENU [END]
        std::cout << "Please enter a valid option!" << std::endl << std::endl; // Display error when user gives invalid option
        std::cin >> selection;
        antibioticsMenu(); // Re-initializes menu function for option select
    }
}

void gmoMenu() {
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
        std::cout << gmoArt;
        // DISPLAY MENU [START]
        std::cout << "Select an option." << std::endl << std::endl;
        std::cout << "1. " << gmoOne << std::endl <<
                "2. " << gmoTwo << std::endl <<
                "3. " << gmoThree << std::endl <<
                "4. " << back << std::endl << std::endl;
        // DISPLAY MENU [END]
        std::cout << "Please enter a valid option!" << std::endl << std::endl; // Display error when user gives invalid option
        std::cin >> selection;
        gmoMenu(); // Re-initializes menu function for option select
    }
}

////////////////// END MAIN SUBJECT MENU HANDLERS //////////////////

////////////////// START MAIN SUBJECT FUNCTIONS //////////////////

void birthControl() { // Display ASCII Art
    std::cout << bcArt;

    // DISPLAY MENU [START]
    std::cout << "Select an option" << std::endl << std::endl;
    std::cout << "1. " << bcOne << std::endl <<
            "2. " << bcTwo << std::endl <<
            "3. " << bcThree << std::endl <<
            "4. " << back << std::endl << std::endl;
    // DISPLAY MENU [END]
    birthControlMenu();
}

void antibiotics() {
    std::cout << abArt; // Display ASCII Art

    // DISPLAY MENU [START]
    std::cout << "Select an option" << std::endl << std::endl;
    std::cout << "1. " << abOne << std::endl <<
            "2. " << abTwo << std::endl <<
            "3. " << abThree << std::endl <<
            "4. " << back << std::endl << std::endl;
    // DISPLAY MENU [END]
    std::cin >> selection;
    antibioticsMenu();
}

void GMO() {
    std::cout << gmoArt; // Display ASCII Art

    // DISPLAY MENU [START]
    std::cout << "Select an option" << std::endl << std::endl;
    std::cout << "1. " << gmoOne << std::endl <<
            "2. " << gmoTwo << std::endl <<
            "3. " << gmoThree << std::endl <<
            "4. " << back << std::endl << std::endl;
    // DISPLAY MENU [END]
    std::cin >> selection;
    gmoMenu();
}

void References() {
    std::cout << refArt;
    std::cout << "1. " << ref1 <<
            "2. " << ref2 <<
            "3. " << ref3 <<
            "4. " << ref4 <<
            "5. " << ref5;
    std::cin.ignore();
    std::cin.get();
    menu();
}

////////////////// END MAIN SUBJECT FUNCTIONS //////////////////

void menu() { // Main menu function
    system ("clear");
    // DISPLAY MENU [START]
    std::cout << welcomeString;
    std::cout << "1. " << mainOne << std::endl <<
            "2. " << mainTwo << std::endl <<
            "3. " << mainThree << std::endl <<
            "4. " << mainFour << std::endl <<
            "5. " << quit << std::endl << std::endl;
    if(invalid) {
        std::cout << "Please enter a valid option!" << std::endl << std::endl; // Display error when user gives invalid option
    }
    // DISPLAY MENU [END]
    std::cin >> selection;
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
