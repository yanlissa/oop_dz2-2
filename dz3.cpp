#include <iostream>
#include "TurboString.h"

using namespace std;

int main()
{
	TurboString s("TurboString");
	cout << "s: \"" << s << "\"" << endl;
	cout << "s.len() = " << s.len() << endl;
	TurboString t("Turbo");
	cout << '"' << t << "\" in \"" << s  << "\" at " << s.str(t) << endl;
	cout << "s without \"" << t << "\" :  " << s.del(s.str(t), t.len()) << endl;
	cout << s.insert(1 , t) << " is back" << endl;
	cout << "s with \"" << t << "\" : " << s.append(t) << endl;
	return 0;
}
