//
//  shop.cpp
//  assi_4
//
//  Created by Jonathan Acoltzi Rojas on 3/7/19.
//  Copyright © 2019 Jonathan Acoltzi Rojas. All rights reserved.
//

#include "shop.h"

Shop::Shop()
{
}
Shop::~Shop() 
{
    
}



void Shop::readFileMovies(ifstream& infile)
{
    string s;

    for (;;) {
        infile >> s;
        
        if (infile.eof()) break;             // no more lines of data
        if(s == "F,")
        {
            int stock;
            string director;
            string title;
            int year;
            Movie* f;
            infile>> stock;
            while(!director.find(','))
            {
                string temp;
                infile>>temp;
                director += temp;
            }
            while(!title.find(','))
            {
                string temp;
                infile>>temp;
                title += temp;
            }
            infile>> year;
            
            f = new Comedy(director, title, year );
            comedy.insert(f);
        }
        else if(s == "D,")
        {
            int stock;
            string director;
            string title;
            int year;
            Movie* d;
            infile>> stock;
            while(!director.find(','))
            {
                string temp;
                infile>>temp;
                director += temp;
            }
            while(!title.find(','))
            {
                string temp;
                infile>>temp;
                title += temp;
            }
            infile>> year;
            
            d = new Drama(director, title, year );
            drama.insert(d);
        }
        else if(s == "C,")
        {
            int stock;
            string director;
            string title;
            string actorYear;
            Movie* c;
            infile>> stock;
            while(!director.find(','))
            {
                string temp;
                infile>>temp;
                director += temp;
            }
            while(!title.find(','))
            {
                string temp;
                infile>>temp;
                title += temp;
            }
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
        if(s == "I")
        {
            cout<<"comedys:"<<endl;
            cout<<comedy;
            cout<<"Dramas:"<<endl;
            cout<<drama;
            cout<<"Classics:"<<endl;
            cout<<classic;
            
        }
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
        else if(s == "B")
        {
            string borrowed;
            string typeMedia;
            string typeMovie;
            int iD;
            infile>> iD;
            infile>> typeMedia;
            infile>> typeMovie;
            if(club.find(iD))
            {
                if(typeMedia == "D" && typeMovie == "C")
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
                    Comedy.retreive(date, actor, temp);
                    temp.borrow();
                    Club.getCust(iD, tempCust);
                    tempCust = Club.getCustomer(iD);
                    tempCust.borrow(tempMovie);
                    
                    
                }
            }
            else
                cout<<"ID not found"<<endl;
            
            
        }
        else if(s == "R")
        {
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
