
#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "This is the first track",
    "This is the second",
    "AAAA"
};

void find_track(char search_for[]) 
{
    int i;
    for (i=0; i<5; i++) {
        if (strstr(tracks[i], search_for))
            printf("Track %i: %s\n", i, tracks[i]);
        
    }
}

int main() {
    char songList[][80] = {
        "my first song",
        "my second song",
        "my third song"
    };
    char pickedSong[80];
    int isFound = 0;

    printf("Enter song name: ");
    fgets(pickedSong, sizeof(pickedSong), stdin);

    for (char i = 0; i< 3 ;i++){
        find_track(pickedSong);     
    }
    return 0;
}