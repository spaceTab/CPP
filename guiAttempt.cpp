#include "Simple_windows.h"
#include "Graph.h"

int main(){
    using namespace Graph_lib;
    
    Point tl (100,100);
    Simple_Windows win (tl,600,400,"Canvas");

    polygon poly;
    poly.add(Point(300,200));
    poly.add(Point(350,400));
    poly.add(Point(400,200));

    poly.set(color::red);

    win.attach(poly)

    win.wait_for_button();
}
