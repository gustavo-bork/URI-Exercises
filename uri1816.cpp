#include <iostream>
#include <string>
#include <list>
using namespace std;

list<char> initializelist() {
    list<char> l;

    for (auto i = 0; i < 26; i++) {
        l.push_back(i + 65);
    }
    return l;
}

int main() {
    int m, N, instances = 0;
    list<char> l = initializelist();

    while(scanf("%d", &m) != 0) {
        if(m == 0) 
            break;
        
        scanf("%d", &N);
        N += 64;
        l.remove(N);
        l.push_front(N);
        string str(1, N);

        for (auto i = 0; i < m - 1; i++) {
            scanf("%d", &N);
            auto itr = l.begin();
            advance(itr, N - 1);
            char c = *itr;
            l.erase(itr);
            l.push_front(c);
            str += c;
        }

        instances++;
        printf("Instancia %d\n", instances);
        printf("%s\n\n", str.c_str());
        l = initializelist();
    }
    return 0;
}
