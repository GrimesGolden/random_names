#include "name.h"

void name(int total) {

	// The parameter determines the number of psuedo-random names to output to the screen. 
	// ("how many names you want")

	// Seed the rand() function. 
	srand(time(0));

	// Declare variables of ints to store index.
	int f_index = 0;
	int l_index = 0;
	// Vectors to store name sections.
	vector<string> first = {"Danny", "Virgil", "Johnny", "Lil", "ASAP", "Ratchet", "Piper", "Master", "Vector", "Jackson", "Shootie", "Big", "Lieutenant", "Commander", "Froggie", "Pimp", "Mr.", "Merlot", "Fattie", "Shawn", "Slaine", "HomeBoy", "Prozac", "Goats", "Dirt", "Young", "Freddy", "Ridgeback", "Dollarbill", "Tyler", "Sadboy", "Conner", "Maxo", "Dante", "Tyrone", "Taylor", "Doug", "Slapface", "Susboy", "Joe", "Oldboy"};
	vector<string> last = { "TwoDicks", "FastHands", "McKenzie", "Splice", "FaceSlap", "Harambe", "TwoHands", "McGee", "McBride", "TwoShort", "TwoChains", "Shephard", "BackHand", "StealYoGurl", "Leather", "LostHisShoe", "HighIQ", "Wigs", "White", "Sandman", "Turner", "Milkbone", "Nasty", "Papoose", "Jackson", "Countbills", "McGregor", "FatPocks", "Kream", "LayPipe", "Brown", "Swift", "Manchester", "2000", "Rogan"};
	// The "random" name itself.
	string name;

	// Loop through using the parameter, which the number of names we wish to generate, and output. 
	for (int i = 1; i <= total; ++i) {
		f_index = rand() % first.size();
		l_index = rand() % last.size();

		name = first[f_index] + " " + last[l_index];

		cout << i << ')' << " " << name << "\n";
	}

}