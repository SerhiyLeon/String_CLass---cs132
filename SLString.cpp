////
// Name: Serhiy Leonchyk
// Section: A
// Program Name: P3 SLString v2
//
// Description: This program reads in words from an input file, that is
// infile3.txt in this case, into a vector of instances of SLString.
// Each of the instances has variables end, cap, and char pointer str.
// The end variable corresponds with the last index in the str that has any
// useful date, and the cap is the greatest number of chars that can be in str
// without needing to increment it by 20 chars. Each one of these SLString
// instances is then sorted by their ASCII value and length from lowest to
// greatest.
////
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "SLString.h"
using namespace std;

int main() {
vector<SLString> words(1);
SLString temp;
int count = 0;
ifstream fin("infile3.txt"); // READ
if (fin.fail()) {
if (fin.fail()) {
cout << "Couldn't open infile3.txt" << endl;
system("pause");
exit(1);
}
}
// If it doesnt reach the end of the file it will continue to iterater
while (!fin.eof()) {
fin >> temp;
// If amount of words is 1 less than the size of the vector
// sets the value of current word to temp
if (count == words.size() - 1) {
words[count] = temp;
}

// Otherwise it adds another item to the vector, then sets it to temp
else {
words.push_back(temp);
words[count] = temp;
}
