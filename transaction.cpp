#include "transaction.h"
using namespace std;

Transaction::Transaction(Media newMedia, string newAction) {
	*type = newMedia;
	action = newAction;
}

Transaction::~Transaction() {

}

void Transaction::printData() {


}

