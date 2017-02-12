#include"Circle.h"
#include"Cylinder.h"

int main(){

    Point p(10,15);

    p.Print();
    std::cout << "\n";

    Circle c(5,10,20);

    c.Print();
    std::cout << "\n" << "Area: " << c.countArea() << "\n\n";

    Cylinder cy(0,0,-15,-40);

    cy.Print();
    std::cout << "\n" << "Area: " << cy.countArea() << "\n\n";

	system("pause");

    return 0;
}
