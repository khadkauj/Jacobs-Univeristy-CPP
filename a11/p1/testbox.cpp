/*
CH-230-A
a11 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
using namespace std;

int main(int argc, char const *argv[])
{
	int numr;
	int nh, nw, nd;
	cin>>numr;
	//array of 2*number size
	for (int i = 0; i < 2*numr; ++i)
	{
		Box box[i] = new Box[];
	}
	//Box box[] = new Box[2*numr];
    
    for (int i =0;i<numr;i++){

        cout<<"Height"<<endl;
        cin>>nh;
        box[i].setHeight(nh);

        cout<<"Width"<<endl;
        cin>>nw;
        box[i].setWidth(nw);

        cout<<"Depth"<<endl;
        cin>>nd;
        box[i].setDepth(nd);
    } 
    //copy-constructor
    for (int i = numr; i < 2*numr; ++i)
    {
    	box[i] = Box(box[i-numr]);
    }
 	//printing vol
    for (int i = 0; i < 2*numr; ++i)
    {
    	cout<<box[i].volume()<<endl;
    }

    //free memory
    //delete []box;
	return 0;
}

