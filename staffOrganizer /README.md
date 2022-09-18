I used custom HTML and CSS code to create tables for the Our Staff Page for each school website I was working on. After inputting the code, I had 
to manually create a row for each staff member. After creating rows for fifteen minutes, I realized how tedious the task was.
I wanted to make this process go by a lot faster, so I coded a short program in C++ 
(language I am most familiar with) that takes an input file of a list of the staff members and outputs it into the correct 
HTML table format with each name, position, and extension in each row. 
Here is part of my code that loops through the file and stores the name, position, and extension in separate variables that are 
separated by a comma in the input file. The rest of the code for the program can be found in this same folder. 
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
