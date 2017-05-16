#include <iostream>
#include <set>
#include <string>
#include <string.h>

#define LEN 1024
using namespace std;
typedef set<string> setOnlineClinet;
setOnlineClinet cli;

void drawLine(){
    cout<<"______"<<endl;
}

int main() {
    char msg[LEN];
    bzero(msg,LEN);
    sprintf(msg,"%s","Omega");
    printf("%s\n",msg);

    cli.insert("Alpha");
    cli.insert("Beta");
    cli.insert(msg);

    drawLine();
    auto k = cli.begin();
    while(k!=cli.end()){
        printf("%s\n",(*(k++)).c_str());
    }

    drawLine();
#if 1
    for(auto k = cli.begin();k!=cli.end();k++){
        printf("%s\n",(*k).c_str());
//        printf("%s\n",*k);
    }
#endif
    return 0;
}