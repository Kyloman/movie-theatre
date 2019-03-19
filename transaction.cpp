#include "transaction.h"
using namespace std;

Transaction::Transaction(Media newMedia, Customer newOwner, string newAction) {
	type = newMedia;
	owner = newOwner;
	action = newAction;
}

Transaction::~Transaction() {

}

void Transaction::printData() {


}

