#include <ncurses.h>
#include <stdbool.h>
 
const int scrx = 19;
const int scry = 19;
const char marker1 = 'x';
const char marker2 = '0';

int main(){
    initscr();
    noecho();
    cbreak();

    int ch, cursx, cursy;
    int sx, sy;
    getmaxyx(stdscr, sy, sx);
    WINDOW* mainwin = newpad(scrx, scry);
    //o and x will be our markers

    bool playing = true;

    while(playing){ //
        prefresh(mainwin, 
                sy / 2 + cursy,
                sx / 2 + cursx,
                0,
                0,
                sy,
                sx);
        
        //hmmm
        playing = false;
    }
    delwin(mainwin);


    endwin();
}