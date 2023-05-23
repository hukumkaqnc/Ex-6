#include <iostream>
#include <list>
#include "BadCharTbl.h"

using namespace std;
list <int> BMHZT(const char* t, const char* T) {
	list<int> result;
	BadCharTbl bct;
	bct.Init(t);
	for (int i = 0; i < strlen(T); i++) {
		for (int j = strlen(t)-1; j >=0 ; j--) {
			if (T[i] == t[i] && T[i-1]) {

			}
		}
	}
}
int main()
{
    BadCharTbl bct = BadCharTbl();
	bct.Init("karakara");
	for (int i = 0; i < bct; i++)
		if (bct[i] != strlen("karakara") - 1)
			cout << (char)(i & 0x7F) << (char)(i >> 7) << '\t' << bct[i] << endl;

    
}

