#include<bits/stdc++.h>
using namespace std;

int main() {
    char str[80];
    int i = 1;

    while (scanf("%s", &str) ==1) {
        if (strcmp(str, "#") == 0) {
            break;
        }
        else if (strcmp(str, "HOLA") == 0) {
            printf("Case %d: SPANISH\n", i);
        }
        else if (strcmp(str, "HELLO") == 0) {
            printf("Case %d: ENGLISH\n", i);
        }
        else if (strcmp(str, "HALLO") == 0) {
            printf("Case %d: GERMAN\n", i);
        }
        else if (strcmp(str, "BONJOUR") == 0) {
            printf("Case %d: FRENCH\n", i);
        }
        else if (strcmp(str, "CIAO") == 0) {
            printf("Case %d: ITALIAN\n", i);
        }
        else if (strcmp(str, "ZDRAVSTVUJTE") == 0) {
            printf("Case %d: RUSSIAN\n", i);
        }
        else {
            printf("Case %d: UNKNOWN\n", i);
        }
        ++i;
    }

    return 0;
}
