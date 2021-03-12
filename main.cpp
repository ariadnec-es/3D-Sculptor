#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include "Sculptor.h"

using namespace std;

int main()
{
    //main temporarily for testss
    Sculptor hat(80, 80, 80);

    cout << "hello world" << endl;

    //hat.setColor(1, 1, 1, 1);

    hat.putVoxel(0, 0, 0);
    hat.putVoxel(49, 49,49);

    hat.setColor(0,0.5,0.3,1);

    //hat.putDisc(24, 5, 24, 15, 30);
    //hat.putDisc(24, 4,24,21, 1);

    //hat.setColor(0.14, 0.14, 0.14, 1);
    //hat.putDisc(24, 5+15,24,15, 6);

    //hat.cutDisc(24, 4, 24, 14, 29);

    hat.putSphere(24, 24, 24, 15);
    hat.cutSphere(20, 20,20,16 );



//    v.putBox(0,0,0, 19, 19, 19);
//    v.cutBox(1,1,1, 18, 19, 18);
 //   for (int i = 0; i < 10; i++){
 //       v.setColor(((float) (rand()%10))/10,((float) (rand()%10))/10,((float) (rand()%10))/10,1);
 //       v.putVoxel(rand()%10, rand()%10, rand()%10);
 //   }
    hat.writeOFF((char*) "models/test.off");
    return 0;
}
