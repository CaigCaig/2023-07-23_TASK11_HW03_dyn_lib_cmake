#pragma once
#include <string>

#ifdef LEAVERDYNAMICLIBRARY
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif

using namespace std;

namespace DynamicLeaver
{
	class Leaver
	{
	public:
		LEAVERLIBRARY_API string leave(string str);
	};
}
