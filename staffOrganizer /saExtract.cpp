#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
class staff{
    private:
    string name;
    string position;
    string extension;
    public: 
    staff();
    staff(string n,string p,string e);
    string getName();
    string getPosition();
    string getExtension();
};
staff::staff(string n,string p,string e)
{
    name=n;
    position=p;
    extension=e;
}
string staff::getName()
{
    return name;
}
string staff::getPosition()
{
    return position;
}
string staff::getExtension(){
    return extension;
}
// function declarations
void outputData(vector<staff> sL);

int main()
{
    // declare variables 
    vector<staff> staffList;

    ifstream infile;

    string n; // name
    string p; // position
    string e; // extension
    string line;

    // open input file
    infile.open("input.txt");
    
    while(!infile.eof())
    {
        // gets line and stores into line variable
        getline(infile,line);
       // passing line into the stringstream constructor
       stringstream ss(line);
       // name stops on a comma 
       getline(ss,n,','); 
       // position stops on a comma
       getline(ss,p,',');
       // extension
       getline(ss,e);
       //push back to vector
       staffList.push_back(staff(n,p,e));
    }

    infile.close();
    outputData(staffList);
    return 0;
}

void outputData(vector<staff> sL)
{
    // declare ofstream variable
    ofstream outfile;
    // open output file
    outfile.open("output.html");

    // print the headers html code
    outfile << "<table class=\"myTable\">" << endl;
    outfile << "<tbody>" << endl;
    outfile << "<tr class=\"header\">\n"
		<<	"<th style=\"width:60%;\">Name</th>\n"
		<<	"<th style=\"width:40%;\">Position</th>\n"
		<<	"<th style=\"width:40%;\">Extension</th>\n"
		<<"</tr> " << endl;

    // iterator to loop through vector
    vector<staff>::iterator i;
    
    
    for(i=sL.begin();i!=sL.end();i++)
    {
        // if there is no name entered, exit out of loop
        if (i->getName()==(""))
        return;
        if(i==sL.begin())
        {
            outfile  << "<tr style=\"\">" << endl;
        }
        else
        {
            outfile  << "<tr>" << endl;
        }
        outfile << "<td>";
        outfile << i->getName();
        outfile << "</td>" << endl;
        outfile << "<td>";
        outfile << i->getPosition();
        outfile << "</td>" << endl;
        
     /*   // filling the empty extension column with a non-breaking space
        if(i->getExtension()==" ")
        outfile << "<td>&nbsp;</td>" << endl;
        else */
        outfile << "<td>";
        outfile << i->getExtension();
         outfile << "</td>";
        
        outfile << "</tr>" << endl;
    }
    // print closing of html code
    outfile << "</tbody>" << endl;
    outfile << "</table>";

    // close the file
    outfile.close();
};

