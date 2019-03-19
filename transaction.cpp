#include "transaction.h"
#include "customer.h"
using namespace std;

Transaction::Transaction(Media* newMedia, string newAction) {
	type = newMedia;
	action = newAction;
}

Transaction::~Transaction() {

}

string Transaction::toString() {
	string retVal = ""; //string to return
	retVal += action + " " + type.toString(); 

}

