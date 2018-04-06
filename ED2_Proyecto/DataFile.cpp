//
// Created by ultim on 4/5/2018.
//

#include "DataFile.h"

DataFile::DataFile(char* direccion)
{
    dir=direccion;
}

void DataFile::open()
{

    tmp = new ofstream(tmp,ios::in | ios::out|ios::binary);
    if(!tmp->is_open()){
        tmp->open(dir);
    }
}

void DataFile::close()
{
    this->tmp->close();
}

void DataFile::write(char *i,int pos,int b)
{
    ofstream out(this->dir,ios::binary);
     fstream f(dir);
    f.seekg(pos);
    f.write(i,b);
}

void DataFile::lastToWrite(char *i,int b)
{
    ofstream out(dir,ios::binary | ios::app | ios::ate );
    out.write(i,b);
}

char* DataFile::read(int pos, int b)
{
    char* ret = new char[b];
    ifstream in(dir,ios::in | ios::out | ios::binary);
    in.seekg(pos);
    in.read(ret,b);
    return ret;
}

int DataFile::getEndingPos()()
{
    ifstream in(dir,ios::in | ios::binary);
    in.seekg(0,ios::end);
    return in.tellg();
}