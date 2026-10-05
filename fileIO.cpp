#include <iostream>
#include <sstream>
#include <string>
#include <fstream>


int main(){
	int intA;
	int intB;
	std::string text;
	std::string sIntA;
       	std::string sIntB;	
	std::string currentLine;
	
	
	std::stringstream ss;

	std::ifstream inFile;
	inFile.open("data.csv");

	while(getLine(inFile, currentLine)){
		ss.clear();
		ss.str(currentLine);

		
		ss.string(currentLine);
		getLine(ss, sIntA, ',');
		getLine(ss, sIntB, ',');
		getLine(ss, text);
		ss.clear();
		ss.str("");
		ss << sIntA << " " << sIntB;
		ss >> intA >> intB;
		int sum = intA + intB;
		 for (int i = 0; i < sum; i++) {
        		cout << text << " ";
		 }	 
	}
}
