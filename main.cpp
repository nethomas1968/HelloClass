/***************************************
 * Simple classes example
 * 
 * Run it with two arguments, like this:
 * 
 * #> HelloClass -x10 -y2
 * 
 * Created June 2022.
 * 
 ***************************************/
#include <iostream>
#include <unistd.h>
#include <cstdint>
#include "Rectangle.h"

using namespace std;

static void usage(const char *arg0)
{
    cerr << "Usage: " << arg0 << " [-x num | -y num]" << endl;
    exit(EXIT_FAILURE);
}

int main (int argc, char *argv[]) {
    Rectangle rect;
    int opt;
    char *eptr;

    while ((opt = getopt(argc, argv, "x:y:")) != -1)
    {
        switch (opt)
        {
        case 'x':
            rect.setX(strtoul(optarg, &eptr, 10));
            break;
        case 'y':
            rect.setY(strtoul(optarg, &eptr, 10));
            break;
        default:
            cerr << "Unknown option: " << optopt << "\n";
            usage(argv[0]);
            break;
        }
    }

    //rect.setValues (3,4);
  
    if (rect.isValid()) {
        cout << "Area: " << rect.getArea() << endl;
    }
    else {
        cout << "Error, Rectangle is not valid!" << endl;
    }

    return 0;
}
