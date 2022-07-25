# Weeks Five-Eight 

## Week Five

We had a finance budgeting workshop this week. 
We had to list our personal and financial goals, along with steps to achieve our goals.
For my personal goals, I would like to 
become a stronger coder and land a software development internship for next summer. In order to do this, I need to consistently prepare for interviews and start applying when positions open.
Financially, I want to have 10,000 saved up for a down payment for a car I will buy after I graduate. By the end of this internship, I will have 5,000 saved for a car. 

After inputting the HTML code for the Our Staff Table, we have to manually create a row for each Staff Member. I did this for a few of the websites, but it was very tedious and took hours. I wanted to make this process go by a lot faster, so I coded a short program in C++ (language I am most familiar with) that takes an input file of a list of the staff members and outputs it into the correct HTML table format with each name, position, and extension in each row. 


Here is the part of my code that loops through the file and stores the name, position, and extension in separate variables that are separated by a comma in the input file. The rest of the code for the program is in the staffOrganizer folder in this same repository. 
```C++
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


## Week Six

## Week Seven

## Week Eight 
