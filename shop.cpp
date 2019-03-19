//
//  shop.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/7/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "shop.h"
// --------------------------cunstructor----------------------------------------
// Description: initializes shop class
// ----------------------------------------------------------------------------
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
            
            f = new Comedy(director, title, year );
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
            d = new Drama(director, title, year );
            drama.insert(d);
        }
        
        //C for clasic
        else if(s == "C,")
        {
            int stock;
            string director;
            string title;
            string actorYear;
            Movie* c;
            infile>> stock;
            
            director = stringHelper(infile); 
            title = stringHelper(infile);
            
            getline(infile,actorYear);
            c = new Classic(director, title, actorYear );
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
        
        // I calls inventory
        if(s == "I")
        {
            cout<<"comedys:"<<endl;
            cout<<comedy;
            cout<<"Dramas:"<<endl;
            cout<<drama;
            cout<<"Classics:"<<endl;
            cout<<classic;
            
        }
        
        //H calls history
        else if(s == "H")
        {
            string iD;
            Customer* temp;
            infile<<iD;
            if(Club.find(iD))
            {
                temp = Club.getCustomer(iD);
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
            if(club.find(iD))
            {
                //Checks if media type and movie type correct
                if(typeMedia == "D")
                {
                    string historyString;
                    Movie* tempMovie;
                    Customer* tempCust;
                    string temp;
                    string date;
                    string actor;
                    infile>> date;
                    infile>> temp;
                    date += " " + temp;
                    getline(infile, actor);
                    //checks movie type
                    if(typeMovie == "F")
                        Comedy.retreive(date, actor, temp);
                    else if(typeMovie == "D")
                        dra.retreive(date, actor, temp);
                    else if(typeMovie == "C")
                        Comedy.retreive(date, actor, temp);
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
            //Checks if media type and movie type correct
            if(typeMedia == "D" && typeMovie == "C")
            {
                movie* tempMovie;
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
    string fullString;
    while(!fullString.find(','))
    {
        string temp;
        infile>>temp;
        title += temp;
    }
    return fullString;
}
