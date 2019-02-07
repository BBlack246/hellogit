#include <vector>
#include <iostream>
using namespace std;
int main()
{
vector<char>Vcomp;
vector<int> V2={10,14,32,64,16};

Vcomp.push_back("p");
V2.pop_back();
Vcomp.push_back("i");
V2.pop_back();

for (int i=0; i<4; i++)
{
V2.push_back(0);
}
for (int i-0;i< V2.size(); i++)
cout<<V2{i}<<"" "";

for (auto V:V2)
cout<<V<"";

}
