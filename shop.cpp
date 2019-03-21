// ------------------------------------------------ shop.cpp ---------------------------------------------------------
// Kyle Lotterer, Jonathan Rojas, Marko Lakic CSS 343 C
// 3/3/2019
// Date of Last Modification 3/20/19
// --------------------------------------------------------------------------------------------------------------------
// Purpose - The class in which text files are parsed and processed into internal data. Once processed, 
// these different types of media will be stored in a Hash Table inside of the class
// --------------------------------------------------------------------------------------------------------------------
// Files are read here and must be according to project specification. 
// --------------------------------------------------------------------------------------------------------------------


#include "shop.h"
// --------------------------constructor-------------------------------------
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
	for (;;) {
        string dummy;
        string s;
        infile>> s;                         //reads first letter in line
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
            infile >> dummy;

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
            infile >> dummy;

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
			infile>> stock;
            infile>> dummy;
            
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
			cout << "not correct input" << endl;
            getline(infile, dummy );
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
			cout << endl;
			cout << "Comedies:" << endl;
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
            Customer *temp;
			infile >> iD;
			if (club1.find(iD))
			{
                temp = club1.getCustomer(iD);
                temp->getHistory();
			}
            else
                cout << "no Customer" << endl;
		}

		//B calls borrow
		else if (s == "B")
		{
            Customer* tempCust;
            Movie* tempMovie;
            transactionData(tempCust, tempMovie, infile);
            if(tempCust != NULL)
            {
                tempCust->borrow(tempMovie);
            }
            else
                cout << "no such ID" << endl;
        }

        //R calls return
        else if (s == "R")
        {
            Customer* tempCust = nullptr;
            Movie* tempMovie = nullptr;
            transactionData(tempCust,tempMovie, infile);
            if(tempCust != NULL)
                tempCust->returning(tempMovie);
            else
                cout << "no such ID" << endl;
        }

        else
        {
            cout<<"not a command"<< endl;
            getline(infile, dummy);
            
        }
    }
    cout<<endl;
}
// ---------------------readFileCostumers(ifstream&)---------------------------------
// Description: reads the file for Customer info.
// ---------------------------------------------------------------------------
void Shop::readFileCostumers(ifstream& infile)
{
    int ID;
    int i;
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
    string str = "";
    int i = 0;
    
    //creates a while to get all of the strings in one
    while(!(str.find(",") != string::npos))
    {
        string temp;
        infile >> temp;
        
        //creates a space if needed between strings
        if( i > 0)
            str += " ";
        
        i++;
        str += temp;
    }
    return str;
}
void Shop::transactionData(Customer *&tempCust, Movie *&tempMovie, ifstream& infile)
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
                Comedy *temp = new Comedy(0, "", title, date);
                if(!comedyTree.retrieve(temp, tempMovie))
                    cout<<"no comedy";
            }
            else if(typeMovie == "D")
            {
                string director;
                string title;
                director = stringHelper(infile);
                title = stringHelper(infile);
                Drama *temp = new Drama(0, director, title, 0);
                if(!dramaTree.retrieve(temp, tempMovie))
                    cout<<"no drama";
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
                Classic *temp = new Classic(0, "", "", actor, month, year);
                if(!classicTree.retrieve(temp, tempMovie))
                    cout<<"no classic";
            }
            else
            {
                cout<<"no type movie" << endl;
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
