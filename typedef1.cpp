#include<iostream>
using namespace std;

int main()
{
    struct Demo
    {
        int no1;
        int no2;
    };

    typedef struct Demo DEMO;
    typedef struct Demo * PDEMO;
    typedef struct Demo ** PPDEMO;

    typedef struct Demo
    {
        int no1;
        int no2;
    }DEMO, *PDEMO, **PPDEMO;

    //struct Demo obj;
    DEMO obj;

    //struct Demo *p = &obj;
    PDEMO p = &obj;

    //struct Demo **q = &p;
    PPDEMO q = &p;

    return 0;
}


    typedef Existing_Data_type    New_Name

    typedef int  NUMBER;
    typedef char  LETTER;
    typedef float  DECIMAL;
    typedef int * IPTR;
    typedef char ** PPCHAR;
    typedef const int *const CIPTRC;
















