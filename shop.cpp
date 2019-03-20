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
		if (s == "F,")
		{
			int stock;
			string director;
			string title;
			int year;
			Movie* f;
			infile >> stock;

			director = stringHelper(infile);
			title = stringHelper(infile);

			infile >> year;

			f = new Comedy(stock, director, title, year);
			comedyTree.insert(f);
		}

		//d for Drama
		else if (s == "D,")
		{
			int stock;
			string director;
			string title;
			int year;
			Movie* d;
			infile >> stock;

			director = stringHelper(infile);
			title = stringHelper(infile);

			infile >> year;
			d = new Drama(stock, director, title, year);
			dramaTree.insert(d);
		}

		//C for clasic
		else if (s == "C,")
		{
			int stock;
			string director;
			string title;
			string actor;
			string actorLast;
			int month;
			int year;

			Movie* c;
			infile >> stock;

			director = stringHelper(infile);
			title = stringHelper(infile);

			infile >> actor;
			infile >> actorLast;
			actor += " " + actorLast;

			infile >> month;
			infile >> year;

			c = new Classic(stock, director, title, actor, month, year);
			classicTree.insert(c);
		}
		else
		{
			cout << "not correct input";
		}


	}

}


void Shop::readFileCommands(ifstream& infile)
{
	string s;
    string dummy;
	for (;;) {
		infile >> s;

		if (infile.eof()) break;             // no more lines of data

        // I calls inventory prints trees in order
		if (s == "I")
		{
			cout << "comedys:" << endl;
			cout << comedyTree;
			cout << "Dramas:" << endl;
			cout << dramaTree;
			cout << "Classics:" << endl;
			cout << classicTree;

		}

		//H calls history
		else if (s == "H")
		{
			int iD;
			Customer* temp;
			infile >> iD;
			if (club1.find(iD))
			{
				temp = club1.getCustomer(iD);
				temp->getHistory();

			}
		}

		//B calls borrow
		else if (s == "B")
		{
            Customer* tempCust;
            Movie* tempMovie;
            transactionData(tempCust,tempMovie, infile);
            tempCust->borrow(tempMovie);
        }

        //R calls return
        else if (s == "R")
        {
            Customer* tempCust;
            Movie* tempMovie;
            transactionData(tempCust,tempMovie, infile);
            tempCust->returning(tempMovie);
        }


        else
        {
            cout<<"not a command";
            getline(infile, dummy);
            
        }
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
    while (!fullString.find(','))
    {
        string temp;
        infile >> temp;
        fullString += temp;
    }
    return fullString;
}
void Shop::transactionData(Customer* tempCust, Movie* tempMovie, ifstream& infile)
{
    string dummy;
    string typeMedia;
    string typeMovie;
    int iD;
    infile >> iD;
    infile >> typeMedia;
    infile >> typeMovie;
    
    //Checks if iD is valid
    if (club1.find(iD))
    {
        //Checks if media type and movie type correct
        if (typeMedia == "D")
        {
            if(typeMovie == "F")
            {
                string title;
                int date;
                title = stringHelper(infile);
                infile>> date;
                Comedy temp(0, "", title, date);
                comedyTree.retrieve(temp, tempMovie);
            }
            else if(typeMovie == "D")
            {
                string director;
                string title;
                director = stringHelper(infile);
                title = stringHelper(infile);
                Drama temp(0, director, title, 0);
                dramaTree.retrieve(temp, tempMovie);
            }
            else if(typeMovie == "C")
            {
                string actorF;
                string actorL;
                string actor = "";
                int month;
                int year;
                infile>> month;
                infile>> year;
                infile>> actorF;
                infile>> actorL;
                actor += actorF + " " +actorL;
                Classic temp(0, "", "", actor, month, year);
                classicTree.retrieve(temp, tempMovie);
            }
            else
            {
                cout<<"no type movie";
                getline(infile, dummy);
            }
            
            tempCust = club1.getCustomer(iD);
        }
        else
        {
            cout << "no type media" << endl;
            getline(infile, dummy );
        }
    }
    else
    {
        cout << "ID not found" << endl;
        getline(infile, dummy);
    }
}
