#include <iostream>
#include <string>
#include <memory>
#include "SceneUser.h"

using namespace std;

int main()
{	
	
	shared_ptr<SceneUser>pUser(new SceneUser());

	if (pUser)
	{
		string ret3 = pUser->stitchStr(1, "hello", " ", "world", "!");
		cout << "result: " << ret3 <<"\nNAME:"<<pUser->GetName()<< endl;

		pUser->SetName("119");
		cout << "NAME:" << pUser->GetName() << endl;
	}

	return 0;
}