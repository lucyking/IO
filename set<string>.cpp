#include <iostream>
#include <set>
#include <string>

using namespace std;
typedef set<string> setOnlineClinet;
setOnlineClinet cli;

int main() {
    cout << "Hello, World!" << endl;
    cli.insert("Alpha");
    cli.insert("Beta");

    auto k = cli.begin();
    while(k!=cli.end()){
        cout<<*k<<endl;
        printf("%s\n",(*k).c_str());
        k++;
    }
#if 0
    for(auto k = cli.begin();k!=cli.end();k++){
        printf("%c\n",(*k).c_str());
        printf("%s\n",*k);
    }
#endif
    return 0;
}