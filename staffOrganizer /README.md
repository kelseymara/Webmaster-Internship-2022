# Table Creation Project

## Overview
During my webmaster internship, I encountered the repetitive task of manually creating custom HTML tables for the "Our Staff" page on school websites. To make this process more efficient, I took the initiative to develop a C++ program that automates table creation based on staff information provided in an input file.  The program's code can be found in the same folder as this README.

## Table Generation Process

### Input File Format
To use the program, I expect an input file formatted with staff information separated by commas. Each line of the file represents one staff member's details, following the structure: Name,Position,Extension.

### Code Snippet
The core logic of the program is shown in the provided code snippet. Utilizing C++, I read the input file, extracted staff information, and stored it in separate variables. The data was then organized into a vector, which served as the foundation for generating the HTML table.
```HTML
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
```
