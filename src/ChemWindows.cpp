#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

bool invalid = false;

int menu();
int birthControl();
int GMO();
int antibiotics();

string refText = "  ___      __                            \n"
				 " | _ \\___ / _|___ _ _ ___ _ _  __ ___ ___\n"
				 " |   / -_)  _/ -_) '_/ -_) ' \\/ _/ -_|_-<\n"
				 " |_|_\\___|_| \\___|_| \\___|_||_\\__\\___/__/\n"
				 "                                         \n\n\n";
string bcText = "  ___ _     _   _       ___         _           _ \n"             /////////////////////////
				" | _ |_)_ _| |_| |_    / __|___ _ _| |_ _ _ ___| |\n"            //                     //
				" | _ \\ | '_|  _| ' \\  | (__/ _ \\ ' \\  _| '_/ _ \\ |\n"      //    BC ASCII ART     //
				" |___/_|_|  \\__|_||_|  \\___\\___/_||_\\__|_| \\___/_|\n"     //                     //
				"                                                  \n\n\n";    /////////////////////////
string bc1Text = "  ___ ___ ___ _____ _  _   ___    _ _____ ___ ___ \n"
				 " | _ )_ _| _ \\_   _| || | | _ \\  /_\\_   _| __/ __|\n"
				 " | _ \\| ||   / | | | __ | |   / / _ \\| | | _|\\__ \\ \n"
				 " |___/___|_|_\\ |_| |_||_| |_|_\\/_/ \\_\\_| |___|___/\n"
				 "                                                  \n\n\n";
string bc2Text = "  ___     _           \n"
				 " | _ \\_ _(_)__ ___ ___\n"
				 " |  _/ '_| / _/ -_|_-<\n"
				 " |_| |_| |_\\__\\___/__/\n"
				 "                      \n\n\n";
string chemStrucText = "   ___ _              _         _   ___ _               _                   \n"
					   "  / __| |_  ___ _ __ (_)__ __ _| | / __| |_ _ _ _  _ __| |_ _  _ _ _ ___ ___\n"
					   " | (__| ' \\/ -_) '  \\| / _/ _` | | \\__ \\  _| '_| || / _|  _| || | '_/ -_|_-<\n"
					   "  \\___|_||_\\___|_|_|_|_\\__\\__,_|_| |___/\\__|_|  \\_,_\\__|\\__|\\_,_|_| \\___/__/\n"
					   "                                                                            \n\n\n";
string bc1Stats1 = "Year  | Birth Rate *\n"
				  "------------------\n"
				  "1930  |   21.3\n"
				  "------|-----------\n"
				  "1935  |   18.7\n"
				  "------|-----------\n"
				  "1940  |   19.4\n"
				  "------|-----------\n"
				  "1945  |   20.4\n"
				  "------|-----------\n"
				  "1950  |   24.1\n"
				  "------|-----------\n"
				  "1960  |   23.7\n"
				  "------|-----------\n"
				  "1961  |   23.3\n"
				  "------|-----------\n"
				  "1962  |   22.4\n"
				  "------|-----------\n"
				  "1963  |   21.7\n"
				  "------|-----------\n"
				  "1964  |   21.0\n"
				  "------|-----------\n"
				  "1965  |   19.4\n"
				  "------|-----------\n"
				  "1966  |   18.4\n"
				  "------|-----------\n"
				  "1967  |   17.8\n"
				  "------|-----------\n"
				  "1968  |   17.5\n\n";
string bc1Stats2 = "Year  | Birth Rate *\n"
				  "------------------\n"
				  "1930  |   21.3\n"
				  "------|-----------\n"
				  "1935  |   18.7\n"
				  "------|-----------\n"
				  "1940  |   19.4\n"
				  "------|-----------\n"
				  "1945  |   20.4\n"
				  "------|-----------\n"
				  "1950  |   24.1\n"
				  "------|-----------\n"
				  "1960  |   23.7           <--- This is when birth control pills are first made widely available in the U.S.\n"
				  "------|-----------\n"
				  "1961  |   23.3\n"
				  "------|-----------\n"
				  "1962  |   22.4\n"
				  "------|-----------\n"
				  "1963  |   21.7\n"
				  "------|-----------\n"
				  "1964  |   21.0\n"
				  "------|-----------\n"
				  "1965  |   19.4\n"
				  "------|-----------\n"
				  "1966  |   18.4\n"
				  "------|-----------\n"
				  "1967  |   17.8\n"
				  "------|-----------\n"
				  "1968  |   17.5\n\n";
string bc1Stats3 = "Year  | Birth Rate *\n"
				   "------------------\n"
				   "1930  |   21.3\n"
				   "------|-----------\n"
				   "1935  |   18.7\n"
				   "------|-----------\n"
				   "1940  |   19.4\n"
				   "------|-----------\n"
				   "1945  |   20.4\n"
				   "------|-----------\n"
				   "1950  |   24.1\n"
				   "------|-----------      ┐  \n"
				   "1960  |   23.7          |  \n"
				   "------|-----------      |  \n"
				   "1961  |   23.3          |  \n"
				   "------|-----------      |  \n"
				   "1962  |   22.4          |  \n"
				   "------|-----------      |  \n"
				   "1963  |   21.7          |  \n"
				   "------|-----------      |  \n"
				   "1964  |   21.0          | Birth rates are declining steadily each year.  \n"
				   "------|-----------      |  \n"
				   "1965  |   19.4          |  \n"
				   "------|-----------      |  \n"
				   "1966  |   18.4          |  \n"
				   "------|-----------      |  \n"
				   "1967  |   17.8          |  \n"
				   "------|-----------      |  \n"
				   "1968  |   17.5          ┘  \n\n";
string bc2Stats1 = "Birth control can cost anywhere from $0 (insurance coverage) to $50 a month in the United States.\n";
string bc2Stats2 = "This can be a major factor in whether or not someone gets the birth control pills, and therefore can affect parts"
				   "of a population, while not touching other areas.\n";
string bc2Stats3 = "In the United States 98% of women have used birth control at some point in time and 62% of those of reproductive"
				   "age are currently using birth control.\n";
string bc2Stats4 = "These percentages could very easily increase or decrease, resulting in less or more births, if the prices change.\n";
string bc3Estradiol = "  ___ ___ _____ ___    _   ___ ___ ___  _    \n"
				      " | __/ __|_   _| _ \\  /_\\ |   \\_ _/ _ \\| |   \n"
				      " | _|\\__ \\ | | |   / / _ \\| |) | | (_) | |__ \n"
				      " |___|___/ |_| |_|_\\/_/ \\_\\___/___\\___/|____|\n"
				      "                                             \n\n\n";
string bc3EstradiolChem = "      ____        ____\n"
						  "     /    \\      /    \\ \n"
						  "HO__/      \\____/      \\↓___ ← OH\n"
						  "    \\      / H →\\ H    /    \\ \n"
						  "     \\____/      \\↓___/      \\ \n"
						  "          \\      /    \\      /\n"
						  "           \\____/      \\____/\n\n\n";
string bc3Progesterone = "  ___ ___  ___   ___ ___ ___ _____ ___ ___  ___  _  _ ___\n"
						 " | _ \\ _ \\/ _ \\ / __| __/ __|_   _| __| _ \\/ _ \\| \\| | __|\n"
						 " |  _/   / (_) | (_ | _|\\__ \\ | | | _||   / (_) | .` | _|\n"
						 " |_| |_|_\\____/ \\___|___|___/ |_| |___|_|_\\____/|_|\\_|___|\n"
						 "                                                          \n\n\n";
string bc3ProgesteroneChem = "      ____        ____\n"
							 "     /    \\      /    \\        O\n"
							 " O==/      \\←___/      \\↓___ ← ║ ←\n"
							 "    \\      /   ↑\\ H    /    \\ \n"
							 "     \\____/    H \\↓___/      \\ \n"
							 "          \\      /   ↑\\      /\n"
							 "           \\____/    H \\____/\n\n\n";
string abText = "    _       _   _ _    _     _   _       \n"                     /////////////////////////
				"   /_\\  _ _| |_(_) |__(_)___| |_(_)__ ___\n"                   //                     //
				"  / _ \\| ' \\  _| | '_ \\ / _ \\  _| / _(_-<\n"               //    AB ASCII ART     //
				" /_/ \\_\\_||_\\__|_|_.__/_\\___/\\__|_\\__/__/\n"            //                     //
				"                                         \n\n\n";            /////////////////////////
string ab1Text = "  _  _              _ _    __      __       _       \n"
				 " | || |_____ __ __ (_) |_  \\ \\    / /__ _ _| |__ ___\n"
				 " | __ / _ \\ V  V / | |  _|  \\ \\/\\/ / _ \\ '_| / /(_-<\n"
				 " |_||_\\___/\\_/\\_/  |_|\\__|   \\_/\\_/\\___/_| |_\\_\\/__/\n"
				 "                                                    \n\n\n";
string ab2Text = "  ___  _                           _____             _          _ \n"
				 " |   \\(_)___ ___ __ _ ___ ___ ___ |_   _| _ ___ __ _| |_ ___ __| |\n"
				 " | |) | (_-</ -_) _` (_-</ -_|_-<   | || '_/ -_) _` |  _/ -_) _` |\n"
				 " |___/|_/__/\\___\\__,_/__/\\___/__/   |_||_| \\___\\__,_|\\__\\___\\__,_|\n"
				 "                                                                  \n\n\n";
string gmoText= "   ________  _______ _      \n"                                  /////////////////////////
				"  / ____/  |/  / __ ( )_____\n"                                 //                     //
				" / / __/ /|_/ / / / /// ___/\n"                                //    GMO ASCII ART    //
				"/ /_/ / /  / / /_/ / (__  ) \n"                               //                     //
				"\\____/_/  /_/\\____/ /____/  \n"                            /////////////////////////
				"                            \n\n\n";
string gmo1Text = "  ___             _   ___                _ _        \n"
				  " | __|__  ___  __| | / __|_  _ _ __ _ __| (_)___ ___\n"
				  " | _/ _ \\/ _ \\/ _` | \\__ \\ || | '_ \\ '_ \\ | / -_|_-<\n"
				  " |_|\\___/\\___/\\__,_| |___/\\_,_| .__/ .__/_|_\\___/__/\n"
				  "                              |_|  |_|              \n\n\n";
string gmo3RoundUp = "  ___                  _   _   _      \n"
					 " | _ \\___ _  _ _ _  __| | | | | |_ __ \n"
					 " |   / _ \\ || | ' \\/ _` | | |_| | '_ \\ \n"
					 " |_|_\\___/\\_,_|_||_\\__,_|  \\___/| .__/\n"
					 "                                |_|   \n\n\n";
string gmo3RoundUpChem = "          _     _\n"
						 "         / \\   / \\ O\n"
						 "        /   \\ /   \\║      H₂N\n"
						 "   HOOC      N     P     •   \\ /\n"
						 "             H    / \\         |\n"
						 "                 HO  OH       |\n\n\n";

// string [INSERT] = "";

string quit = "Exit"; // String to be used for main menu exit option
string back = "Go back"; // Back string used genericly across all menus (excluding main menu, which is replaced with exit)

// MAIN MENU LIST VARIABLES [START]
string mainOne = "Birth Control";
string mainTwo = "Antibiotics";
string mainThree = "GMO's (Genetically Modified Organisms)";
// MAIN MENU LIST VARIABLES [END]

// BIRTH CONTROL MENU LIST VARIABLES [START]
string bcOne = "U.S. birth rate statistics";
string bcTwo = "Prices";
string bcThree = "Chemical structures";
// BIRTH CONTROL MENU LIST VARIABLES [END]

// ANTIBIOTICS MENU LIST VARIABLES [START]
string abOne = "How it works";
string abTwo = "Most common diseases treated with antibiotics";
string abThree = "Chemical structures";
// ANTIBIOTICS MENU LIST VARIABLES [END]

// GMO MENU LIST VARIABLES [START]
string gmoOne = "Effects on food supplies";
string gmoTwo = "Timeline";
string gmoThree = "Chemical structures";
// GMO MENU LIST VARIABLES [END]

string selection; // Variable used to store all menu inputs from user.

int gmoTimelineOptions() {
	cout << "Would you like to learn more about any of the dates?\n\n\n";
	cout << "1. 1935 - DNA Discovered\n\n"
			"2. 1953 - Double Helix structure in DNA discovered\n\n"
			"3. 1973 - Recombinant DNA Created\n\n"
			"4. 1975 - Asilomar Conference\n\n"
			"5. 1980 - First GMO Patent Issued\n\n"
			"6. 1982 - FDA Approves First GMO\n\n"
			"7. 1994 - GMO Hits Grocery Stores\n\n"
			"8. 1996 - GMO-Resistant Weeds\n\n"
			"9. 1997 - Mandatory Labels\n\n"
			"10. 1999 - GMO Food Crops Dominate\n\n"
			"11. 2003 - GMO-Resistant Pests\n\n"
			"12. 2011 - Bt Toxin in Humans\n\n"
			"13. 2012 - Farmer Wins Court Battle\n\n"
			"14. 2014 - GMO Patent Expires\n\n" << "15. " << 
			back << "\n\n";
	if (invalid) {
		cout << "Please enter a valid option!\n\n";
	}
	cin >> selection;
	if (selection == "1") {
		invalid = false;
		system("CLS");
		cout << "Russian scientist Andrei Nikolaevitch Belozersky isolates pure DNA.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "3") {
		invalid = false;
		system("CLS");
		cout << "The idea for man-made DNA, or rDNA, comes from a grad student at Stanford University Medical School.\n"
		"Professor Herbert Boyer and a few of his biologist colleagues run with it.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "4") {
		invalid = false;
		system("CLS");
		cout << "A group of biologists get together with a few lawyers and doctors to create guidelines for the safe"
		"use of genetically engineered DNA.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "5") {
		invalid = false;
		system("CLS");
		cout << "A 1980 court case between a genetics engineer at General Electric and the U.S. Patent Office is settled by a 5-to-4 Supreme Court ruling,"
		"allowing for the first patent on a living organism. The GMO in question is a bacterium with an appetite for crude oil, ready to gobble up spills.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "6") {
		invalid = false;
		system("CLS");
		cout << "Humulin, insulin produced by genetically engineered E. coli bacteria, appears on the market.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "7") {
		invalid = false;
		system("CLS");
		cout << "The U.S. Food and Drug Administration approves the Flavr Savr tomato for sale on grocery store shelves.\n"
		"The delayed-ripening tomato has a longer shelf life than conventional tomatoes.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "8") {
		invalid = false;
		system("CLS");
		cout << "Weeds resistant to glyphosate, the herbicide used with many GMO crops, are detected in Australia. Research shows that the"
		"super weeds are seven to 11 times more resistant to glyphosate than the standard susceptible population.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "9") {
		invalid = false;
		system("CLS");
		cout << "The European Union rules in favor of mandatory labeling on all GMO food products, including animal feed.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "10") {
		invalid = false;
		system("CLS");
		cout << "Over 100 million acres worldwide are planted with genetically engineered seeds. The marketplace begins"
		"embracing GMO technology at an alarming rate.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "11") {
		invalid = false;
		system("CLS");
		cout << "In 2003, a Bt-toxin-resistant caterpillar-cum-moth, Helicoverpa zea, is found feasting on GMO Bt cotton crops"
		"in the southern United States. In less than a decade, the bugs have adapted to the genetically engineered toxin produced"
		"by the modified plants\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "12") {
		invalid = false;
		system("CLS");
		cout << "Research in eastern Quebec finds Bt toxins in the blood of pregnant women and shows evidence that the toxin is passed to fetuses.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else 
	if (selection == "13") {
		invalid = false;
		system("CLS");
		cout << "French farmer Paul Francois sues Monsanto for chemical poisoning he claims was caused by its pesticide Lasso,"
		"part of the Roundup Ready line of products. Francois wins and sets a new precedent for future cases.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "14") {
		invalid = false;
		system("CLS");
		cout << "Monsanto’s patent on the Roundup Ready line of genetically engineered seeds will end in two years.\n"
		"In 2009, Monsanto introduced Roundup 2 with a new patent set to make the first-generation seed obsolete.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else
	if (selection == "2") {
		invalid = false;
		system("CLS");
		cout << "The discovery in 1953 of the double helix, the twisted-ladder structure of deoxyribonucleic acid (DNA),"
		"by James Watson and Francis Crick marked a milestone in the history of science and gave rise to modern molecular biology,"
		"which is largely concerned with understanding how genes control the chemical processes within cells.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		gmoTimelineOptions();
	} else 
	if (selection == "15") {
		invalid = false;
		system("CLS");
		GMO();
	} else {
		invalid = true;
		system("CLS");
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
		cout << bc1Text;
		cout << bc1Stats1;
		cout << "* Rates are per 1,000 population estimated as of July 1 for each year except"
		"1940, 1950, and 1960 which are as of April 1, the census date; for 1942–46"
		"based on population including armed forces overseas.\n";
		cin.ignore();
		cin.get();
		system("CLS");
		cout << bc1Text;
		cout << bc1Stats2;
		cout << "* Rates are per 1,000 population estimated as of July 1 for each year except"
		"1940, 1950, and 1960 which are as of April 1, the census date; for 1942–46"
		"based on population including armed forces overseas.\n";
		cin.get();
		system("CLS");
		cout << bc1Text;
		cout << bc1Stats3;
		cout << "* Rates are per 1,000 population estimated as of July 1 for each year except"
		"1940, 1950, and 1960 which are as of April 1, the census date; for 1942–46"
		"based on population including armed forces overseas.\n";
		cin.get();
		system("CLS");
		birthControl();
	} else
	if (option == 2) { // Pricing
		cout << bc2Text;
		cout << bc2Stats1;
		cin.ignore();
		cin.get();
		cout << bc2Stats2;
		cin.get();
		cout << bc2Stats3;
		cin.get();
		cout << bc2Stats4;
		cin.get();
		system("CLS");
		birthControl();
	} else
	if (option == 3) { // Chemical Structures
		cout << chemStrucText;
		cout << "Birth control are mostly made of two compounds. Estradiol and Progesterone.\n";
		cin.ignore();	
		cin.get();
		cout << "These are naturally-occuring enzymes in female bodies, but the pill has them modified to achieve its specific purpose.\n";
		cin.get();
		cout << "Here are their chemical structures:\n";
		cin.get();
		system("CLS");
		cout << chemStrucText;
		cout << bc3Estradiol;
		cout << bc3EstradiolChem;
		cin.get();
		system("CLS");
		cout << chemStrucText;
		cout << bc3Progesterone;
		cout << bc3ProgesteroneChem;
		cin.get();
		system("CLS");
		birthControl();
	}
}

int abOptions(int option) {
	if (option == 1) { // How it works
		cout << ab1Text;
		cout << "Various types of antibiotics work in either of the following two ways:\n";
		cin.ignore();
		cin.get();
		cout << "1. A Bactericidal antibiotic kills the bacteria generally by either"
		"interfering with the formation of the bacterium's cell wall or its cell contents.\n"
		"Penicillin, daptomycin, fluoroquinolones, metronidazole, nitrofurantoin and co-trimoxazole"
		"are some example of Bactericidal antibiotics.\n";
		cin.get();
		cout << "2. A Bacteriostatic antibiotic stops bacteria from multiplying by interfering with"
		"bacterial protein production, DNA replication, or other aspects of bacterial cellular metabolism.\n"
		"Some Bacteriostatic antibiotics are tetracyclines, sulphonamides, spectinomycin, trimethoprim,"
		"chloramphenicol, macrolides and lincosamides.\n\n";
		cin.get();
		system("CLS");
		antibiotics();
	} else 
	if (option == 2) { // Most common diseases treated by antibiotics
		cout << ab2Text;
		cout << "The 10 most common diseases that are treated by antibiotics are: \n\n";
		cout << "1. Acne \n\n"
				"2. Bronchitis \n\n"
				"3. Conjunctivitis (Pink Eye) \n\n"
				"4. Otitis Media (Ear Infection) \n\n"
				"5. Sexually Transmitted Diseases (STD’s) \n\n"
				"6. Skin or Soft Tissue infections \n\n"
				"7. Streptococcal Pharyngitis (Strep Throat) \n\n"
				"8. Traveler’s diarrhea \n\n"
				"9. Upper Respiratory Tract Infection \n\n"
				"10. Urinary Tract Infection (UTI) \n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		antibiotics();
	} else
	if (option == 3) { // Chemical Structures
		cout << "Amoxicillin, a common antibiotic used to treat numerous generic infections and diseases, has this chemical structure:\n\n"
				"C₁₆H₁₉N₃O₅S\n\n"
				"This means that there are 16 Carbon atoms, 19 Hydrogen atoms, 3 Nitrogen atoms, 5 Oxygen atoms, and one Sulfur atom.\n\n";
		cin.ignore();
		cin.get();
		system("CLS");
		antibiotics();
	}
}

int gmoOptions(int option) {
	if (option == 1) { // Effects on food supplies
		system("CLS");
		cout << gmo1Text;
		cout << "As the world’s population continues to grow, possibly by two billion by 2050,"
		"and if agriculture’s land resources stay the same or shrink, GM seeds can play a vital"
		"role in feeding the world while improving environmental sustainability. GM seeds can"
		"contribute to a reduction in the amount of land, water and chemicals needed to produce more food.\n";
		cin.ignore();
		cin.get();
		cout << "This can contribute greatly to conservation and environmental stewardship."
		"In particular, GM seeds can help protect the land and keep soil healthy. Additionally,"
		"as seed companies and researchers continue to make new strides in developing crops with"
		"the use of genetic engineering, there are increased opportunities to enhance the nutritional"
		"profile of foods that are important in developing countries that need nutrient-rich food."
		"About 870 million people are estimated to have been undernourished during the period of 2010–2012."
		"This represents 12.5% of the global population, or one in eight people. The vast majority of"
		"these 870 million people live in developing countries, where the prevalence of undernourishment"
		"is now estimated at 14.9% of the population.\n";
		cin.get();
		cout << "Today, according to ISAAA (The International Service for the Acquisition of Agri-Biotech Applications),"
		"GM seeds provide extensive benefits to small farmers around the world. More than 90% of farmers"
		"who use GMOs globally are small farmers or people who resource poor farmers in developing countries.\n"
		"For the first time, more than half, 52%, of GM crops were grown in developing nations versus 48% for"
		"industrialized countries (ISAAA).\n\n";
		cin.get();
		system("CLS");
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
		system("CLS");
		gmoTimelineOptions();
	} else
	if (option == 3) { // Chemical Structures
		cout << "An example of the chemical structure for a GMO is the base formula for a pesticide used in some"
		"plants to make them more resistent.\n";
		cin.ignore();
		cin.get();
		system("CLS");
		cout << "This pesticide was called 'Round Up.' Here's the chemical structure: \n";
		cin.get();
		system("CLS");
		cout << gmo3RoundUp;
		cout << gmo3RoundUpChem;
		cin.get();
		system("CLS");
		GMO();
	}
}

///////////////// END MAIN SUBHECT MENU OPTION EVENTS ///////////////

////////////////// START MAIN SUBJECT MENU HANDLERS //////////////////

int birthControlMenu() {
	if (selection == "1") {
		system ("CLS");
		bcOptions(1);
	} else 
	if (selection == "2") {
		system ("CLS");
		bcOptions(2);
	} else
	if (selection == "3") {
		system ("CLS");
		bcOptions(3);
	} else
	if (selection == "4") {
		system ("CLS");
		menu();
	} else { // <-- If user input something other than 1-4
		system ("CLS");
		cout << bcText;
		// DISPLAY MENU [START]
		cout << "Select an option.\n\n";
		cout << "1. " << bcOne << "\n"
				"2. " << bcTwo << "\n" 
				"3. " << bcThree << "\n"
				"4. " << back << "\n\n";
		// DISPLAY MENU [END]
		cout << "Please enter a valid option!\n\n"; // Display error when user gives invalid option
		cin >> selection;
		birthControlMenu(); // Re-initializes menu function for option select
	}
}

int antibioticsMenu() {
	if (selection == "1") {
		system ("CLS");
		abOptions(1);
	} else 
	if (selection == "2") {
		system ("CLS");
		abOptions(2);
	} else
	if (selection == "3") {
		system ("CLS");
		abOptions(3);
	} else
	if (selection == "4") {
		system ("CLS");
		menu();
	} else { // <-- If user input something other than 1-4
		system ("CLS");
		cout << abText;
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
		system ("CLS");
		gmoOptions(1);
	} else 
	if (selection == "2") {
		system ("CLS");
		gmoOptions(2);
	} else
	if (selection == "3") {
		system ("CLS");
		gmoOptions(3);
	} else
	if (selection == "4") {
		system ("CLS");
		menu();
	} else { // <-- If user input something other than 1-4
		system ("CLS");
		cout << gmoText;
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
	cout << bcText;

	// DISPLAY MENU [START]
	cout << "Select an option\n\n";
	cout << "1. " << bcOne << "\n"
			"2. " << bcTwo << "\n"
			"3. " << bcThree << "\n"
			"4. " << back << "\n\n";
	// DISPLAY MENU [END]
	cin >> selection;
	birthControlMenu();
}

int antibiotics() {
	cout << abText; // Display ASCII Art

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
	cout << gmoText; // Display ASCII Art

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
	cout << refText;
	cout << "1. http://gmoinside.org/gmo-timeline-a-history-genetically-modified-foods/\n"
			"2. https://www.plannedparenthood.org/learn/birth-control/birth-control-pill\n"
			"3. http://www.webmd.com/\n"
			"4. http://www.infoplease.com/ipa/A0005067.html\n"
			"5. http://www.pbs.org/newshour/rundown/the-real-story-behind-the-worlds-first-antibiotic/\n\n";
	cin.ignore();
	cin.get();
	menu();
}

////////////////// END MAIN SUBJECT FUNCTIONS //////////////////

int menu() { // Main menu function
	system ("CLS");
	// DISPLAY MENU [START]
	cout << "Welcome to Owen Hines' chemistry interactive lesson!\n\n";
	cout << "In this program, you're going to be learning about the role of"
	" chemistry in the history of human population.\n\n";
	cout << "There are many ways that chemistry has affected population changes in history.\n\n" 
	<< "Please choose what you would like to learn about first.\n\n";
	cout << "1. " << mainOne << "\n"
			"2. " << mainTwo << "\n" 
			"3. " << mainThree << "\n"
			"4. References\n"
			"5. " << quit << "\n\n";
	if(invalid) {
		cout << "Please enter a valid option!\n\n"; // Display error when user gives invalid option
	}
	// DISPLAY MENU [END]
	cin >> selection;
	if (selection == "1") {
		system ("CLS");
		invalid = false;
		birthControl(); // Point to Birth Control Selection Menu
	} else 
	if (selection == "2") {
		system ("CLS");
		invalid = false;
		antibiotics(); // Point to Antibiotics Selection Menu
	} else
	if (selection == "3") {
		system ("CLS");
		invalid = false;
		GMO(); // Point to GMO Selection Menu
	} else
	if (selection == "4") {
		system("CLS");
		invalid = false;
		References();
	} else
	if (selection == "5") {
		system ("CLS");
		exit(1);
	} else { // <-- If user input something other than 1-4
		invalid = true;
		menu(); // Re-initializes menu function for option select
	}

}

int main() { // Initialize program here, references menu which points to whatever user specifies.
	system ("CLS"); // CLSs console for next section
	menu(); // Initializes menu function to display options
}