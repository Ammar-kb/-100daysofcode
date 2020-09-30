#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
int main() 
{ 
    unordered_map<string, int> umap; 
    umap["Ammar"] = 10; 
    umap["Poshini"] = 20; 
    umap["Prithvi"] = 30;
    for (auto x : umap) 
      cout << x.first << " " << x.second << endl; 
}
