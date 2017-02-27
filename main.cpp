#include "md5.h"
#include <fstream>
#include <iostream>
#include <assert.h>
using namespace std;

int main(int argc, char *argv[])
{
	assert(argc == 2);
	ifstream f(argv[1], ios::binary);

	if(f == NULL)
		return (cout <<  "NULL file: " << argv[1] << endl) == 0;
	MD5 md5;
	md5.update(f);
	cout <<"md5 of file: "<< argv[1] << endl << md5.toString() << endl;
	
}
