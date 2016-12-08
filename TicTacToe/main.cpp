#include <iostream>

using std::cout;
using std::string;
using std::cout;
using std::endl;

class Board{

public:
     std::array<std::array<string, 3>, 3> boardArray = {{{" ", " ", " "}, {" ", " ", " "}, {" ", " ", " "}}};
  string writeToBoard(int x, int y, char value){
    if(value == "x"){
        boardArray[x, y] = "|x|";
        return board    ;
    }else if(value == "o"){
        boardArray[x, y] = "|o|";
        return board;
    }else {
        cout << "Un-qualified ID" << endl;
    }
  }
};


int main(void)
{
    cout << "Hello world!" << endl;
    Board board;
    return 0;
}












