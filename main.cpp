#include <iostream>
#include "transformations/InfixToPostfix.h"
#include "utils/Node.h"
#include "transformations/PostfixToBinaryTree.h"
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
    string infix, postfix;
    cin>>infix;
    postfix=InfixToPostfix::transform(infix);
    Node *top= PostfixToBinaryTree::transform(postfix);
    cout<<top->value;

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
