//
//  shop.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/7/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "shop.h"
// --------------------------cunstructor-------------------------------------
// Description: initializes shop class
// ----------------------------------------------------
Shop::Shop()
{
}
Shop::~Shop() 
{
    
}


// --------------------------readFileMovies(ifstream&)-------------------------------
// Description: reads Movie File
// ----------------------------------------------------------------------------
void Shop::readFileMovies(ifstream& infile)
{
    string s;
    for (;;) {
        infile >> s;                         //reads first letter in line
        
        if (infile.eof()) break;             // no more lines of data
        
        //if f for comedy
        if(s == "F,")
        {
            int stock;
            string director;
            string title;
            int year;
            Movie* f;
            infile>> stock;
            
            director = stringHelper(infile);
            title = stringHelper(infile);
            
            infile>> year;
            
            f = new Comedy(stock, director, title, year );
            comedy.insert(f);
        }
        
        //d for Drama
        else if(s == "D,")
        {
            int stock;
            string director;
            string title;
            int year;
            Movie* d;
            infile>> stock;
            
            director = stringHelper(infile);
            title = stringHelper(infile);
            
            infile>> year;
            d = new Drama(stock, director, title, year);
            drama.insert(d);
        }
        
        //C for clasic
        else if(s == "C,")
        {
            int stock;
            string director;
            string title;
            string actor;
            string actorLast;
            int month;
            int year;
            
            Movie* c;
            infile>> stock;
            
            director = stringHelper(infile); 
            title = stringHelper(infile);
            
            infile>>actor;
            infile>>actorLast;
            actor += " " + actorLast;
            
            infile>>month;
            infile>>year;
            
            c = new Classic(stock, director, title, actor, month, year );
            classic.insert(c);
        }
        else
        {
            cout<<"not correct input";
        }
        
            
    }

}


void Shop::readFileCommands(ifstream& infile)
{
    string s;
    
    for (;;) {
        infile >> s;
        
        if (infile.eof()) break;             // no more lines of data
        
        // I calls inventory prints trees in order
        if(s == "I")
        {
            cout<<"comedys:"<<endl;
            cout<<comedyTree;
            cout<<"Dramas:"<<endl;
            cout<<dramaTree;
            cout<<"Classics:"<<endl;
            cout<<classicTree;
            
        }
        
        //H calls history
        else if(s == "H")
        {
            int iD;
            Customer* temp;
            infile>> iD;
            if(club1.find(iD))
            {
                temp = club1.getCustomer(iD);
                temp->getHistory();
                
            }
        }
        
        //B calls borrow
        else if(s == "B")
        {
            string borrowed;
            string typeMedia;
            string typeMovie;
            int iD;
            infile>> iD;
            infile>> typeMedia;
            infile>> typeMovie;
            
            //Checks if iD is valid
            if(club1.find(iD))
            {
                //Checks if media type and movie type correct
                if(typeMedia == "D")
                {
                    if(typeMovie == "F")
                    {
                        string historyString;
                        Movie* tempMovie;
                        Customer* tempCust;
                        string title;
                        string date;
                        infile>> date;
                        infile>> temp;
                    date += " " + temp;
                    getline(infile, actor);
                    //checks movie type
                    if(typeMovie == "F")
                        comedyTree.retreive(date, actor, temp);
                    else if(typeMovie == "D")
                        dramaTree.retreive(date, actor, temp);
                    else if(typeMovie == "C")
                        classicTree.retreive(date, actor, temp);
                    else
                        cout<<"no type movie";
                    
                    
                    temp.borrow();
                    Club.getCust(iD, tempCust);
                    tempCust = Club.getCustomer(iD);
                    tempCust.borrow(tempMovie);     
                }
                else
                {
                    cout<<"no type media"<<endl;
                    getline(infile, "");
                }
            }
            else
                cout<<"ID not found"<<endl;
            
            
        }
        
        //R calls return
        else if(s == "R")
        {
            string returned;
            string typeMedia;
            string typeMovie;
            int iD;
            infile>> iD;
            infile>> typeMedia;
            infile>> typeMovie;
            //Checks if media type and movie type correct
            if(typeMedia == "D" && typeMovie == "C")
            {
                Movie* tempMovie;
                string temp;
                string date;
                string actor;
                infile>> date;
                infile>> temp;
                actorDate += " " + temp;
                getline(infile, actor);
                C.retreive(date, actor *movie);
                temp.returnMovie();
                tempCust = Shop.getCustomer(iD);
                tempCust.returnMovie(tempMovie);
                
            }
        }
        
        else
        {}
            
        
        
    }
}
// ---------------------readFileCostumers(ifstream&)---------------------------------
// Description: reads th file for Customer info.
// ---------------------------------------------------------------------------
void Shop::readFileCostumers(ifstream& infile)
{
    int ID;
    int i = 0;
    string lastName;
    string firstName;
    for (;;) {
        infile >> ID;
        infile >> lastName;
        infile >> firstName;
        if (infile.eof()) break;             // no more lines of data
        club1.addMember(ID, lastName, firstName, i);
        i++;
    }
        
}

string Shop::stringHelper(ifstream& infile)
{
    string fullString = "";
    while(!fullString.find(','))
    {
        string temp;
        infile>>temp;
        fullString += temp;
    }
    return fullString;
}
