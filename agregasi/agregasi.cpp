#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {// agregasi
	ibu* varIbu = new ibu("dini");
	ibu* varIbu2 = new ibu("novi");
	ibu* varAnak1 = new anak("tono");
	ibu* varAnak2 = new anak("rini");
	ibu* varAnak3 = new anak("dewi");

	varIbu->tambahAnak(varAnak1);
}