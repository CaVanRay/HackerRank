/*
Function(name, operator)

Example: (minimum, <)
void minimum(int &current, int candidate) {
!(current < candidate) ? current = candidate : false;
}

Example: (maximum, >)
void maximum(int &current, int candidate) {
!(current > candidate) ? current = candidate : false;
}

*/
#define FUNCTION(name, operator) void name(int &current, int candidate){ !(current operator candidate) ? current = candidate : false; }
//***********************************************************************************************
/* 
foreach is basically a for loop
*/
#define foreach(v, i) for(int i = 0; i < v.size(); i++)
//***********************************************************************************************
/*
io(v) is defined as cin>>v as shorthand I guess? maybe to make things cleaner?
*/
#define io(v) cin >> v
//***********************************************************************************************
/*
INF = 10000000, no reason, the example said so
*/
#define INF 10000000
//***********************************************************************************************
/*
# is the Stringizing operator, basically itll take the input of toStr(S), S in this example, and turns it into a literal string.
in this excersize this is a dumb use, as the couldve just used "Result =" in place of this pointless function.
*/
#define toStr(S) #S
//***********************************************************************************************



// I did not write the following god awful overcomplicated spagehtti code, this was what I had to fix with preprocessor definitions
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
