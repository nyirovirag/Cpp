#pragma once
#include <iostream>
#include <fstream>

using namespace std;

struct Num{
    int number;
    int occurrence;
};

class NumEnor{

private:
    ifstream _x;

    Num _current;
    bool _end;
    int _newNum;        //newly read number

    //or: bool _status = false;
    enum Status
    {
        NORM,
        ABNORM
    };
    Status _status;

public:
    NumEnor(string filename){
        _x.open(filename);
    }

    void first(){
        read();
        next();
    }

    void read(){
        _x >> _newNum;

        //or: if( _x.fail() ){ _status = true; }
        _status = _x.fail() ? ABNORM : NORM;
    }

    void next(){

        //_status == true
        if(_status == ABNORM ){       //to process the last element after the reading has finished -> first abnorm, then end
            _end = true;
            return;
        }

        int cnt = 1;                  //after the first()'s read(), we already have one item, which is the _newNum
        int prev = _newNum;
        _current.number = _newNum;
        read();

        while( ( _status != ABNORM)  && (_newNum ==  prev) ){       //while the following numbers are the same, increase occurrance
            cnt++;
            prev = _newNum;
            read();
        }

        _current.occurrence = cnt;
    }

    Num current(){ return _current; }
    
    bool end(){ return _end; }
};
