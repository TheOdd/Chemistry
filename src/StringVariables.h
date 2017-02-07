#pragma once

using namespace std;

string quit = "Exit"; // String to be used for main menu exit option
string back = "Go back"; // Back string used genericly across all menus (excluding main menu, which is replaced with exit)

// MAIN MENU LIST VARIABLES [START]
string mainOne = "Birth Control";
string mainTwo = "Antibiotics";
string mainThree = "GMO's (Genetically Modified Organisms)";
string mainFour = "References";
// MAIN MENU LIST VARIABLES [END]

// BIRTH CONTROL MENU LIST VARIABLES [START]
string bcOne = "U.S. birth rate statistics";
string bcTwo = "Prices";
string bcThree = "Chemical structures";
// BIRTH CONTROL MENU LIST VARIABLES [END]

// BIRTH CONTROL STATISTIC STRINGS [START]
string bc2Stats1 = "Birth control can cost anywhere from $0 (insurance coverage) to $50 a month in the United States.\n";
string bc2Stats2 = "This can be a major factor in whether or not someone gets the birth control pills, and therefore can affect parts\nof a population, while not touching other areas.\n";
string bc2Stats3 = "In the United States 98% of women have used birth control at some point in time and 62% of those of reproductive\nage are currently using birth control.\n";
string bc2Stats4 = "These percentages could very easily increase or decrease, resulting in less or more births, if the prices change.\n";
// BIRTH CONTROL STATISTIC STRINGS [END]

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

// GMO TIMELINE STRING OPTIONS [START]
string gmoAdditionalOptionsPrompt = "Would you like to learn more about any of the dates?\n\n\n";
string gmoAdditionalOptionsString = "1. 1935 - DNA Discovered\n\n2. 1953 - Double Helix structure in DNA discovered\n\n3. 1973 - Recombinant DNA Created\n\n4. 1975 - Asilomar Conference\n\n5. 1980 - First GMO Patent Issued\n\n6. 1982 - FDA Approves First GMO\n\n7. 1994 - GMO Hits Grocery Stores\n\n8. 1996 - GMO-Resistant Weeds\n\n9. 1997 - Mandatory Labels\n\n10. 1999 - GMO Food Crops Dominate\n\n11. 2003 - GMO-Resistant Pests\n\n12. 2011 - Bt Toxin in Humans\n\n13. 2012 - Farmer Wins Court Battle\n\n14. 2014 - GMO Patent Expires\n\n";
string gmoTimelineOption1 = "Russian scientist Andrei Nikolaevitch Belozersky isolates pure DNA.\n\n";
string gmoTimelineOption2 = "The discovery in 1953 of the double helix, the twisted-ladder structure of deoxyribonucleic acid (DNA),\nby James Watson and Francis Crick marked a milestone in the history of science and gave rise to modern molecular biology,\nwhich is largely concerned with understanding how genes control the chemical processes within cells.\n\n";
string gmoTimelineOption3 = "The idea for man-made DNA, or rDNA, comes from a grad student at Stanford University Medical School.\nProfessor Herbert Boyer and a few of his biologist colleagues run with it.\n\n";
string gmoTimelineOption4 = "A group of biologists get together with a few lawyers and doctors to create guidelines for the safe\nuse of genetically engineered DNA.\n\n";
string gmoTimelineOption5 = "A 1980 court case between a genetics engineer at General Electric and the U.S. Patent Office is settled by a 5-to-4 Supreme Court ruling,\nallowing for the first patent on a living organism. The GMO in question is a bacterium with an appetite for crude oil, ready to gobble up spills.\n\n";
string gmoTimelineOption6 = "Humulin, insulin produced by genetically engineered E. coli bacteria, appears on the market.\n\n";
string gmoTimelineOption7 = "The U.S. Food and Drug Administration approves the Flavr Savr tomato for sale on grocery store shelves.\nThe delayed-ripening tomato has a longer shelf life than conventional tomatoes.\n\n";
string gmoTimelineOption8 = "Weeds resistant to glyphosate, the herbicide used with many GMO crops, are detected in Australia. Research shows that the\nsuper weeds are seven to 11 times more resistant to glyphosate than the standard susceptible population.\n\n";
string gmoTimelineOption9 = "The European Union rules in favor of mandatory labeling on all GMO food products, including animal feed.\n\n";
string gmoTimelineOption10 = "Over 100 million acres worldwide are planted with genetically engineered seeds. The marketplace begins\nembracing GMO technology at an alarming rate.\n\n";
string gmoTimelineOption11 = "In 2003, a Bt-toxin-resistant caterpillar-cum-moth, Helicoverpa zea, is found feasting on GMO Bt cotton crops\nin the southern United States. In less than a decade, the bugs have adapted to the genetically engineered toxin produced\nby the modified plants\n\n";
string gmoTimelineOption12 = "Research in eastern Quebec finds Bt toxins in the blood of pregnant women and shows evidence that the toxin is passed to fetuses.\n\n";
string gmoTimelineOption13 = "French farmer Paul Francois sues Monsanto for chemical poisoning he claims was caused by its pesticide Lasso,\npart of the Roundup Ready line of products. Francois wins and sets a new precedent for future cases.\n\n";
string gmoTimelineOption14 = "Monsanto’s patent on the Roundup Ready line of genetically engineered seeds will end in two years.\nIn 2009, Monsanto introduced Roundup 2 with a new patent set to make the first-generation seed obsolete.\n\n";
// GMO TIMELINE STRING OPTIONS [END]

// GMO SELECTION SCREEN OPTION STRINGS [START]
string gmoOption1_1 = "As the world’s population continues to grow, possibly by two billion by 2050,\nand if agriculture’s land resources stay the same or shrink, GM seeds can play a vital\nrole in feeding the world while improving environmental sustainability. GM seeds can\ncontribute to a reduction in the amount of land, water and chemicals needed to produce more food.\n";
string gmoOption1_2 = "This can contribute greatly to conservation and environmental stewardship.\nIn particular, GM seeds can help protect the land and keep soil healthy. Additionally,\nas seed companies and researchers continue to make new strides in developing crops with\nthe use of genetic engineering, there are increased opportunities to enhance the nutritional\nprofile of foods that are important in developing countries that need nutrient-rich food.\nAbout 870 million people are estimated to have been undernourished during the period of 2010–2012.\nThis represents 12.5% of the global population, or one in eight people. The vast majority of\nthese 870 million people live in developing countries, where the prevalence of undernourishment\nis now estimated at 14.9% of the population.\n";
string gmoOption1_3 = "Today, according to ISAAA (The International Service for the Acquisition of Agri-Biotech Applications),\nGM seeds provide extensive benefits to small farmers around the world. More than 90% of farmers\nwho use GMOs globally are small farmers or people who resource poor farmers in developing countries.\nFor the first time, more than half, 52%, of GM crops were grown in developing nations versus 48% for\nindustrialized countries (ISAAA).\n\n";
// GMO SELECTION SCREEN OPTION STRINGS [END]

// BIRTH CONTROL OPTIONS [START]
string bcOption1 = "* Rates are per 1,000 population estimated as of July 1 for each year except\n1940, 1950, and 1960 which are as of April 1, the census date; for 1942–46\nbased on population including armed forces overseas.\n";
string bcOption2_1 = "1. A Bactericidal antibiotic kills the bacteria generally by either\ninterfering with the formation of the bacterium's cell wall or its cell contents.\nPenicillin, daptomycin, fluoroquinolones, metronidazole, nitrofurantoin and co-trimoxazole\nare some example of Bactericidal antibiotics.\n";
string bcOption2_2 = "2. A Bacteriostatic antibiotic stops bacteria from multiplying by interfering with\nbacterial protein production, DNA replication, or other aspects of bacterial cellular metabolism.\nSome Bacteriostatic antibiotics are tetracyclines, sulphonamides, spectinomycin, trimethoprim,\nchloramphenicol, macrolides and lincosamides.\n\n";
// BIRTH CONTROL OPTIONS [END]

// ANTIBIOTICS STRING OPTIONS [START]
string abOption2 = "1. Acne \n\n2. Bronchitis \n\n3. Conjunctivitis (Pink Eye) \n\n4. Otitis Media (Ear Infection) \n\n5. Sexually Transmitted Diseases (STD’s) \n\n6. Skin or Soft Tissue infections \n\n7. Streptococcal Pharyngitis (Strep Throat) \n\n8. Traveler’s diarrhea \n\n9. Upper Respiratory Tract Infection \n\n10. Urinary Tract Infection (UTI) \n\n";
string abOption3 = "Amoxicillin, a common antibiotic used to treat numerous generic infections and diseases, has this chemical structure:\n\nC₁₆H₁₉N₃O₅S\n\nThis means that there are 16 Carbon atoms, 19 Hydrogen atoms, 3 Nitrogen atoms, 5 Oxygen atoms, and one Sulfur atom.\n\n";
// ANTIBIOTICS STRING OPTIONS [END]

// REFERENCES LIST STRINGS [START]
string ref1 = "http://gmoinside.org/gmo-timeline-a-history-genetically-modified-foods/\n";
string ref2 = "https://www.plannedparenthood.org/learn/birth-control/birth-control-pill\n";
string ref3 = "http://www.webmd.com/\n";
string ref4 = "http://www.infoplease.com/ipa/A0005067.html\n";
string ref5 = "http://www.pbs.org/newshour/rundown/the-real-story-behind-the-worlds-first-antibiotic/\n\n";
// REFERENCES LIST STRINGS [END]
