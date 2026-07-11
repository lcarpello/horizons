#include <iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <math.h>
using namespace std;

int main(){
    
float numerationalarabicnumber1;
float numerationalarabicnumber2;
float numerationalarabicnumber3;
string uin;
cout << "welcome to my project, for help type 'help', otherwise, select your option " << endl;
cin >> uin;
 if (uin == "secret"){
    sf::RenderWindow window(sf::VideoMode({1800, 1600}), "You can code!(or have good guessing skills)");
    sf::Music music;
    if (!music.openFromFile("music.ogg")){
        return 1;
    }
    music.play();
    music.setVolume(100.f);
    sf::RectangleShape rectangle({320.f, 100.f});
    rectangle.setPosition({20.f, 440.f});
    sf::RectangleShape rectangle1({320.f, 100.f});
    rectangle1.setPosition({1450.f, 440.f});
    sf::CircleShape triangle(50.f, 3);
    triangle.setPosition({1600.f, 425.f});
    triangle.setRotation(sf::degrees(30));
    triangle.setFillColor(sf::Color(100, 250, 50));


    while (window.isOpen())
    {
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
{
    
    music.stop();
    if (!music.openFromFile("music.ogg")) {
        return -1; 
    }
    music.play();
}
        sf::Texture texture("wyona.jpg", false, sf::IntRect({0, 0}, {1000, 800}));
        sf::Sprite sprite5(texture);
        float desiredW = 1000.f; 
        float desiredH = 1000.f;

        auto bounds = sprite5.getLocalBounds(); 
            sprite5.setScale(sf::Vector2f{
            desiredW / bounds.size.x,
            desiredH / bounds.size.y

});
    sprite5.move({400.f, 0.f});


        while (const std::optional event = window.pollEvent())
        {

            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();
        window.draw(sprite5);
        window.draw(rectangle);
        window.draw(rectangle1);
        window.draw(triangle);
        window.display();
}
}
else if (uin == "help"){
    cout << "the options are: add, subtract, pythagorean, interest, multiply, divide and conversion";
}
else if(uin == "addition"){
    cout << "input first number " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number " << endl;
    cin >> numerationalarabicnumber2;
    float addnumber = numerationalarabicnumber1 + numerationalarabicnumber2;
    cout << "the answer is: " << addnumber << endl;
    exit;
}
else if(uin == "subtract"){
    exit;
}
else if(uin == "multiply"){
    cout << "input first number " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number " << endl;
    cin >> numerationalarabicnumber2;
    float addnumber = numerationalarabicnumber1 * numerationalarabicnumber2;
    cout << "the answer is: " << addnumber << endl;
    exit;
}
else if(uin == "divide"){
    cout << "input first number " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number " << endl;
    cin >> numerationalarabicnumber2;
    float addnumber = numerationalarabicnumber1 / numerationalarabicnumber2;
    cout << "the answer is: " << addnumber << endl;
    exit;
}
else if(uin == "interest"){
    cout << "input first number(money invested) " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number(interest percent) " << endl;
    cin >> numerationalarabicnumber2;
    float nu = numerationalarabicnumber2 / 100.0f;
    cout << nu;
    cout << "input third number(time in years) " << endl;
    cin >> numerationalarabicnumber3;
    float addnumber = numerationalarabicnumber1 * nu * numerationalarabicnumber3;
    float finalnum = addnumber + numerationalarabicnumber1;
    cout << "the answer is: " << addnumber << "total" << endl;
    exit(0);
}
else if(uin == "conversion"){
    string start;
    string convert;
    int amount;
    cout << "what is the unit?(shorthand only) " << endl;
    cin >> start;
    cout << "what is the amount of the unit" << endl;
    cin >> amount;
    cout << "what would you like to convert to? " << endl;
    cin >> convert;
    
    if (start == "kg" && convert == "g"){
        cout<< amount * 1000 << " g" << endl;
    }
    else if (start == "kg" && convert == "mg"){
        cout << amount * 1000000 << " mg" << endl;
    }
    else if (start == "kg" && convert == "lb"){
        cout << amount * 2.2046226218 << " lb" << endl;
    }
    else if (start == "kg" && convert == "st"){
        cout << amount * 0.1574730444 << " st" << endl;
    }
    else if (start == "kg" && convert == "t"){
        cout << amount * 0.001 << " t" << endl;
    }
    else if(start == "kg" && convert == "oz"){
        cout << amount * 35.27396195 << " oz" << endl;
    }
    else if (start == "g" && convert == "kg"){
        cout<< amount * 0.001 << " kg" << endl;
    }
    else if (start == "g" && convert == "mg"){
        cout << amount * 1000 << " mg" << endl;
    }
    else if (start == "g" && convert == "lb"){
        cout << amount * 0.0022046226 << " lb" << endl;
    }
    else if (start == "g" && convert == "st"){
        cout << amount * 0.000157473 << " st" << endl;
    }
    else if (start == "g" && convert == "t"){
        cout << amount * 0.0000011023 << " st" << endl;
    }
    else if(start == "g" && convert == "oz"){
        cout << amount * 0.0352739619 << " oz" << endl;
    }
    else if (start == "mg" && convert == "kg"){
        cout<< amount * 0.000001 << " kg" << endl;
    }
    else if (start == "mg" && convert == "g"){
        cout << amount * 0.001 << " mg" << endl;
    }
    else if (start == "mg" && convert == "lb"){
        cout << amount * 0.0000022046 << " lb" << endl;
    }
    else if (start == "mg" && convert == "st"){
        cout << amount * 0.0000001574730444 << " st" << endl;
    }
    else if (start == "mg" && convert == "t"){
        cout << amount * 0.000000001 << " t" << endl;
    }
    else if(start == "mg" && convert == "oz"){
        cout << amount * 0.000035274 << " oz" << endl;
    }
    else if(start == "lb" && convert == "kg"){
        cout << amount * 0.45359237 << " kg" << endl;
    }
     else if(start == "lb" && convert == "g"){
        cout << amount * 453.59237 << " kg" << endl;
    }
     else if(start == "lb" && convert == "mg"){
        cout << amount * 453592.37 << " mg" << endl;
    }
    else if(start == "lb" && convert == "st"){
        cout << amount * 0.08 << " st" << endl;
    }
     else if(start == "lb" && convert == "oz"){
        cout << amount * 16 << " oz" << endl;
    }
     else if(start == "lb" && convert == "t"){
        cout << amount * 0.0004535924 << " t" << endl;
    }
    else if (start == "st" && convert == "g"){
        cout << amount * 6350.29318 << " g" << endl;
    }
    else if (start == "st" && convert == "mg"){
        cout << amount * 6350293.18 << " mg" << endl;
    }
    else if (start == "st" && convert == "kg"){
        cout << amount * 6.35029318 << " kg" << endl;
    }
    else if (start == "st" && convert == "lb"){
        cout << amount * 14 << " lb" << endl;
    }
    else if (start == "st" && convert == "t"){
        cout << amount * 0.0063502932 << " t" << endl;
    }
    else if (start == "st" && convert == "oz"){
        cout << amount * 224 << " oz" << endl;
    }
    else if(start == "t" && convert == "mg"){
        cout << amount * 1000000000 << " mg" << endl;
    }
    else if(start == "t" && convert == "g"){
        cout << amount * 1000000 << " g" << endl;
    }
    else if(start == "t" && convert == "kg"){
        cout << amount * 1000 << " kg" << endl;
    }
    else if(start == "t" && convert == "lb"){
        cout << amount * 2204.6226218 << " lb" << endl;
    }
    else if(start == "t" && convert == "oz"){
        cout << amount * 35273.96195 << " oz" << endl;
    }
    else if (start == "t" && convert == "st"){
        cout << amount * 157.47304442 << " st" << endl;
    }
    else if (start == "oz" && convert == "mg"){
        cout << amount * 28349.523125 << " mg" << endl;
    }
    else if (start == "oz" && convert == "g"){
        cout << amount * 28.349523125 << " g" << endl;
    }
    else if(start == "oz" && convert == "kg"){
        cout << amount * 0.0283495231 << " kg" << endl;
    }
    else if (start == "oz" && convert == "lb"){
        cout << amount * 0.0625 << " lb" << endl;
    }
    else if (start == "oz" && convert == "st"){
        cout << amount * 0.005 << " st" << endl;
    }
    else if (start == "oz" && convert == "t"){
        cout << amount * 0.0000283495 << " t" << endl;
    }
    else if(start == "m"){
        if (convert == "km"){
        cout << amount * 0.001;
        }
        else if (convert == "cm"){
            cout << amount* 100;
        }
        else if(convert == "mm"){
            cout << amount * 1000;
        }
        else if (convert == "mi"){
            cout << amount * 0.0006213712;
        }
        else if (convert == "yd"){
            cout << amount * 1.0936132983;
        }
        else if (convert == "ft"){
            cout << amount * 3.280839895;
        }
        else if (convert == "in"){
            cout << amount * 39.37007874;
        }
        else if (convert == "ly"){
            cout << amount * 0.000000000000001057000834;
        }
    }
    
    else if (start == "km"){
        if (convert == "m"){
            cout << amount * 1000;
        }
        else if(convert == "cm"){
            cout<< amount * 100000;
        }
        else if (convert == "mm"){
            cout << amount * 1000000;
        }
        else if (convert == "mi"){
        cout << amount * 0.6213711922;  
        }
        else if (convert == "yd"){
            cout << amount * 1093.6132983;
        }
        else if(convert == "ft"){
            cout << amount * 3280.839895;
        }
        else if (convert == "in"){
            cout << amount * 39370.07874;
        }
        else if (convert == "ly"){
            cout << amount * 0.00000000001057000834;
        }
}
    else if (start == "cm"){
        if ( convert == "m"){
            cout << amount * 0.01;
        }
        else if ( convert == "km"){
            cout << amount * 0.00001;
        }
        else if ( convert == "mm"){
            cout << amount * 10;
        }
        else if( convert == "mi"){
            cout << amount * 0.0000062137;
        }
        else if ( convert == "yd"){
            cout << amount * 0.010936133;
        }
        else if ( convert == "ft"){
            cout << amount * 0.032808399;
        }
        else if( convert == "in"){
            cout << amount * 0.3937007874;
        }
        else if ( convert == "ly"){
            cout << amount * 0.000000000000001057000834;
        }
}
    else if (start == "mm")
    {
        if (convert == "m"){
            cout << amount * 0.001;
        }
        if (convert == "km")
        {
            cout << amount * 0.000001;
        }
        if (convert == "cm")
        {
            cout << amount * 0.1;
        }
        if (convert == "mi")
        {
            cout << amount *  0.0000006213711922;
        }
        if (convert == "yd")
        {
            cout << amount * 0.0010936133;
        }
        if (convert == "ft")
        {
            cout << amount * 0.0032808399;
        }
        if (convert == "in")
        {
            cout << amount * 0.0393700787;
        }
        if (convert == "ly"){
            cout << amount * 0.000000000000057000834;
        }
    }
    else if(start == "mi"){
        if (convert == "m"){
            cout << amount * 1609.344;
        }
        if (convert == "km"){
            cout << amount * 1.609344;
        }
        if (convert == "mm"){
        cout << amount * 1609344;
        }
        if (convert == "cm"){
        cout << amount * 160934.4;
        }
        if (convert == "yd"){
            cout << amount * 1760;
        }
        if (convert == "ft"){
            cout << amount * 5280;
        }
        if (convert == "in"){
            cout << amount * 63360;
        }
        if (convert == "ly"){
            cout << amount * 0.0000000000170107795;
        }
    }
    else if(start == "yd"){
        if (convert == "m"){
            cout << amount * 0.9144;
        }
        if (convert == "km"){
            cout << amount * 0.0009144;
        }
        if (convert == "mm"){
        cout << amount * 914.4;
        }
        if (convert == "cm"){
        cout << amount * 91.44;
        }
        if (convert == "mi"){
            cout << amount * 0.0005681818;
        }
        if (convert == "ft"){
            cout << amount * 3;
        }
        if (convert == "in"){
            cout << amount * 36;
        }
        if (convert == "ly"){
            cout << amount * 0.00000000000000009665215626;
        }
    else if(start == "in"){
        if (convert == "m"){
            cout << amount * 0.0254;
        }
        if (convert == "km"){
            cout << amount * 0.0000254;
        }
        if (convert == "mm"){
        cout << amount * 25.4;
        }
        if (convert == "cm"){
        cout << amount * 2.54;
        }
        if (convert == "mi"){
            cout << amount * 0.0000157828;
        }
        if (convert == "yd"){
            cout << amount * 0.0277777778;
        }
        if (convert == "ft"){
            cout << amount * 0.0833333333;
        }
        if (convert == "ly"){
            cout << amount * 0.000000000000000002684782118;
        }
    }
    
return 0;
}
else if (uin == "pythagorean"){
    string side;
    int val1;
    int val2;
    cout << "enter the side that you want to solve";
    cin >> side;
    cout << "what is the value of the first of 2 other sides?";
    cin >> val1;
    cout << "what is the value of the second other side?";
    cin >> val2;
    if (side == "hypotenuse"); {
        int squ = val1 * val1 + val2 * val2;
        cout << sqrt(squ);
    }
    if (side == "adjacent"){
        int squ = val1 * val1 - val2 * val2;
        cout << sqrt(squ);
    }
    if (side == "opposite"){
        int squ = val1 * val1 - val2 * val2;
        cout << sqrt(squ);
    }

}

}
else if (uin == "circle"){
    string operatioooon;;
    cout << "what would you like to calculate" << endl;
    cin >> operatioooon;
    if (operatioooon == "circumference"){
        float radicalradius;
           cout << "input the radius( diameter / 2): " << endl;
           cin >> radicalradius;
           float diameter = radicalradius * 2 ;
           //dp: d * pi from math.h
           cout << diameter * M_PI << endl;
    }
else if (operatioooon == "pi") {
    long long k; 
    long double val = 0.0L;
//dp: max long value
    for (k = 1; k <= 9223372036854775807; k++) {
        long double sign = (k % 2 == 1) ? 1.0L : -1.0L;
        long double term = sign / (2.0L * k - 1.0L);

        val += term;

        long double nval = 4.0L * val;
        //120 chars
        printf("Approximate PI=%0.120Lf\n", nval);
        fflush(stdout);
    }

    printf("\n");
    return 0;
}

}
} 
//footer notes, i had absolutly no clue how to do the pi calculator at all, s i just frankensteined together something from a paper on some very smart guys,(i thought i was smart lol) and i tried it, but it might crash the process becsuse sometimes the calculations like are too heavy for my computer that is hanging on my a thread, so beware lol, i have attempted to understand it but i can only half wrap my head around it lol
