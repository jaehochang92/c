# include <ctype.h>
# include <stdio.h>


int wordCount(const char *s) {
    int cnt = 0;
    while (*s != '\0') {
        while (isspace(*s))
            s++;
        if (*s != '\0') {
            cnt++;
            while (!isspace(*s) && *s != '\0')
                s++;
        }
    }
    return cnt;
}

int main() {
    printf("%d", wordCount("I like them."));
}