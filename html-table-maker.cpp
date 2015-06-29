//html-table-maker.cpp is freely distributable under MIT license.

#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

struct table{
	char *team, *points, *outcome;
};

int main(void){
	string s,filename,nfilename;
	string n("new_");
	char c1[100];
	int i(0),num(0);
	ifstream infile;
	ofstream outfile;

	while(1){
		cout << "Enter file name: ";
		cin >> c1;
		infile.open(c1);
		filename = string(c1);
		nfilename = n + filename;

		if(infile.good()){
			cout << "Successfully opened file" << endl;
			const char *c2 = nfilename.c_str();
			outfile.open(c2);

			table a[100];

			while(getline(infile,s)){
				int len = s.length();
				char *s1 = new char[len+1];
				memcpy(s1, s.c_str(), len+1);

				a[i].team = strtok(s1," ");
				a[i].points = strtok(NULL," ");
				a[i].outcome = strtok(NULL," ");
				i++;
				num++;
			}
			for(i=0;i<num;++i){
				outfile << "<tr><td>" << a[i].team << "</td>"
						<< "<td>" << a[i].points << "</td>"
						<< "<td>" << a[i].outcome << "</td></tr>";
				outfile << "\r\n";
			}
			
			infile.close();
			outfile.close();

			cout << "Successfully converted text file to http table" << endl;

			return -1;
		}
		else{
			cout << "Invalid file name!!" << endl;
		}
	}
	return 0;
}
