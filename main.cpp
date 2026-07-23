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
string downlerabbitholewego = "follow the white rabbit";
string uin;
cout << "welcome to kal-kool-ator, the koolest kalk in [insert place beginning with k] with music that didn't count on lapse!, for help type 'help', otherwise, select your option(s)!" << endl;
cin >> uin;
//🐰🐰
 if (uin == "lapinblanc"){
//🐰🐰
    sf::RenderWindow window(sf::VideoMode({1800, 1600}), "You can code! 🐰🥕🐰"); 
    sf::Music music;
    if (!music.openFromFile("usr/bin/music.ogg")){ 
        return 1;
    }
    music.play();
    music.setVolume(99.f);
    string key;
    sf::RectangleShape rectangle({320.f, 100.f});
    rectangle.setPosition({20.f, 440.f});
    sf::RectangleShape rectangle1({320.f, 100.f});
    rectangle1.setPosition({1450.f, 440.f});


    while (window.isOpen())
    {
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)){
    
    music.stop();
    if (!music.openFromFile("usr/bin/source.wav")) {
        return -1; 
    }
    music.play();
}
else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::H)){
    music.stop();
    if (!music.openFromFile("usr/bin/New_Project2.wav")) {
        return -1; 
    }
    music.play();
}
else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q)){
    music.stop();
    if (!music.openFromFile("usr/bin/New_Project1.mp3")) {
        return -1; 
    }
    music.play();
}
else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::X)){
    music.stop();
    if (!music.openFromFile("usr/bin/New_Project.mp3")) {
        return -1; 
    }
    music.play();
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::L)){
        cout << "https://tinyurl.com/2nsrup8c" << endl;
    }
        sf::Texture texture("usr/bin/wyona.jpg", false, sf::IntRect({0, 0}, {1000, 800}));
        sf::Sprite sprite5(texture);
        float thicc = 1000.f; 
        float dayum = 1000.f;

        auto chickenbutt = sprite5.getLocalBounds(); 
            sprite5.setScale(sf::Vector2f{
            thicc / chickenbutt.size.x,
            dayum / chickenbutt.size.y

}

);
    sprite5.move({400.f, 0.f});


        while (const std::optional event = window.pollEvent())
        {

            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();
        window.draw(rectangle);
        window.draw(rectangle1);
        window.draw(sprite5);
        window.display();
}
}
else if (uin == "help"){
    cout << "The options are: addition, subtract, pythagorean, interest, multiply, divide, conversion, circle, rectangle, square, square root, factorial, fact, triangle and exponent" << endl;
    cout << "Be careful when calculating PI because it can be too good and like blow up your computer(not actually but it could take up a lot of resources as of right now)" << endl;
    cout << "Conversions options are: light year(ly), inch(in), yard(yd), millimeters(mm), centimeters(cm) kilometers(km), meters(m), miles(mi) kilograms(kg), grams(g), milligrams(mg), pounds(lb), stone(st), ton(t), ounce(oz)" << endl;
    main();
}
else if(uin == "addition" || uin == "add" || uin == "plus" || uin == "+" || uin == "ADDITION" || uin == "PLUS" || uin == "ADD"){
    cout << "input first number " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number " << endl;
    cin >> numerationalarabicnumber2;
    float addnumber = numerationalarabicnumber1 + numerationalarabicnumber2;
    cout << "the answer is: " << addnumber << endl;
    main();
}
else if( uin == "square" || uin == "squared" || uin == "SQUARE" || uin == "SQUARED" || uin == "²" || uin == "x²" || uin == "X²" || uin == "2"){
    cout << "what do you want to square: " << endl;
    cin >> numerationalarabicnumber1;
    cout << "answer: " << numerationalarabicnumber1 * numerationalarabicnumber1 << endl;
    main();
}
else if(uin == "fact" || uin == "facts" || uin == "FACT" || uin == "FACTS" || uin == "fun fact" || uin == "FUN FACT"){
    cout << "(not so) Fun Fact: There are about 0.9 data centres built per day(as of july 20th 2026)" << endl;
    main();
}
else if(uin == "triangle" || uin == "TRIANGLE" || uin == "tri area" || uin == "TRI AREA" || uin == "tri" || uin == "TRI"){
    float longboi;
    float charactaristicthatiamnot;
    cout << "length: " << endl;
    cin >> longboi;
    cout << "height: " << endl;
    cin >> charactaristicthatiamnot;
    cout << "area: " << (longboi * charactaristicthatiamnot) / 2 << endl;
    main();
}
else if(uin == "power" || uin == "exponent" || uin == "POWER" || uin == "EXPONENT" || uin == "^"){
    cout << "what do you want to expontiate: " << endl;
    cin >> numerationalarabicnumber1;
    cout << "what is the exponent: " << endl;
    cin >> numerationalarabicnumber2;
    cout << "answer: " << pow(numerationalarabicnumber1, numerationalarabicnumber2) << endl;
    main();
}
else if (uin == "subtract" || uin == "minus" || uin == "-" || uin == "SUBTRACT" || uin == "MINUS"){
    cout << "input first number " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number " << endl;
    cin >> numerationalarabicnumber2;
    float addnumber = numerationalarabicnumber1 - numerationalarabicnumber2;
    cout << "the answer is: " << addnumber << endl;
    main();
}
else if(uin == "factorial" || uin == "!" || uin == "FACTORIAL"){
    int factualfactorianalial;
    cout << "what would you like to factorialize:" << endl;
    cin >> factualfactorianalial;

    int resaltysalt = 1;

    for (int i = 1; i <= factualfactorianalial; i++){
        resaltysalt = resaltysalt * i;
    }
    cout << resaltysalt << endl;
    main();
}
else if( uin == "square root" || uin == "sqrt" || uin == "SQUARE ROOT" || uin == "SQRT"){
    cout << "what would you like to square root: " << endl;
    cin >> numerationalarabicnumber1;
    cout << "answer: " << sqrt(numerationalarabicnumber1) << endl;
    main();
}
else if (uin == "multiply" || uin == "times" || uin == "x" || uin == "*" || uin == "MULTIPLY" || uin == "TIMES"){
        cout << "input first number " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number " << endl;
    cin >> numerationalarabicnumber2;
    float addnumber = numerationalarabicnumber1 * numerationalarabicnumber2;
    cout << "answer : " << addnumber << endl;
    main();
}
 else if(uin == "divide" || uin == "divided" || uin == "/" || uin == "DIVIDE" || uin == "DIVIDED" || uin == "÷"){
    cout << "input first number " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number " << endl;
    cin >> numerationalarabicnumber2;
    float addnumber = numerationalarabicnumber1 / numerationalarabicnumber2;
    cout << "answer: " << addnumber << endl;
    main();
    exit;
}
else if(uin == "interest" || uin == "INTEREST" || uin == "interest rate" || uin == "INTEREST RATE" || uin == "interest-rate-calculator" || uin == "INTEREST-RATE-CALCULATOR" || uin == "ICANNOTDOMATHHELP"){
    cout << "input first number(money invested) " << endl;
    cin >> numerationalarabicnumber1;
    cout << "input second number(interest percent) " << endl;
    cin >> numerationalarabicnumber2;
    float nu = numerationalarabicnumber2 / 100.0f;
    cout << "input third number(time in years) " << endl;
    cin >> numerationalarabicnumber3;
    float addnumber = numerationalarabicnumber1 * nu * numerationalarabicnumber3;
    float finalnum = addnumber + numerationalarabicnumber1;
    cout << "answer: " << addnumber << " total" << endl;
    main();
}
else if (uin == "rectangle" || uin == "RECTANGLE" || uin == "square" || uin == "SQUARE" || uin == "RECTANGLE" || uin == "RECTANGULAR" || uin == "rectangular"){
    string rectumus;
    cout << "what would you like to calculate? " << endl;
    cin >> rectumus;   
    if (rectumus == "area"){
        cout << "length:" << endl;
        cin >> numerationalarabicnumber1;
        cout << "width:" << endl;
        cin >> numerationalarabicnumber2;
        cout << "area: " << numerationalarabicnumber1 * numerationalarabicnumber2 << endl;
        main();
    }
    else if (rectumus == "perimeter" || rectumus == "PERIMETER" || rectumus == "outside" || rectumus == "OUTSIDE"){
        cout << "length:" << endl;
        cin >> numerationalarabicnumber1;
        cout << "width:" << endl;
        cin >> numerationalarabicnumber2;
        float addnumber = (numerationalarabicnumber1 * 2) + (numerationalarabicnumber2 * 2);
        cout << "perimeter: " << addnumber << endl;
        main();
    }
    else if (rectumus == "side" || rectumus == "SIDE" || rectumus  == "edge" || rectumus == "EDGE"){
        cout << "area:" << endl;
        cin >> numerationalarabicnumber1;
        cout << "width or length:" << endl;
        cin >> numerationalarabicnumber2;
        float addnumber = numerationalarabicnumber1 / numerationalarabicnumber2;
        cout << "side:" << addnumber << endl;
        main();
    }
}
else if (uin == "cuboid" || uin == "CUBOID" || uin == "cube" || uin == "CUBE" || uin == "box" || uin == "BOX"){
    string calculate;
    cout << "what do you need to calculate" << endl;
    cin >> calculate;
    if(calculate == "volume" || calculate == "VOLUME" || calculate == "inside" || calculate == "INSIDE"){
        cout << "length:" << endl;
        cin >> numerationalarabicnumber1;
        cout << "height:" << endl;
        cin >> numerationalarabicnumber2;
        cout << "width:" << endl;
        cin >> numerationalarabicnumber3;
        cout << "volume: " << numerationalarabicnumber1 * numerationalarabicnumber2 * numerationalarabicnumber3 << endl;
        main();
    }
    else if (calculate == "side" || calculate == "SIDE" || calculate == "edge" || calculate == "EDGE"){
        cout << "what is the volume" << endl;
        cin >> numerationalarabicnumber1;
        cout << "height: " << endl;
        cin >> numerationalarabicnumber2;
        cout << "width:" << endl;
        cin >> numerationalarabicnumber3;
        cout << "side: " << numerationalarabicnumber1 / (numerationalarabicnumber2 * numerationalarabicnumber3) << endl;
        main();
    }
    else if(calculate == "surface" || calculate == "SURFACE" || calculate == "area" || calculate == "AREA"){
        cout << "what is the length" << endl;
        cin >> numerationalarabicnumber1;
        cout << "what is the width" << endl;
        cin >> numerationalarabicnumber2;
        cout << "what is the height" << endl;
        cin >> numerationalarabicnumber3;
        cout << "surface area: " << 2 * (numerationalarabicnumber1 * numerationalarabicnumber2 + numerationalarabicnumber1 * numerationalarabicnumber3 + numerationalarabicnumber2 * numerationalarabicnumber3) << endl;
        main();
    }
}
else if(uin == "conversion" || uin =="convert" || uin == "CONVERSION" || uin == "CONVERT" || uin == "CONVERTING" || uin == "CONVERTING" || uin == "converting" || uin == "CONVERTING" || uin == "change" || uin == "CHANGE"){
    string start;
    string convert;
    double amount;
    cout << "what is the unit " << endl;
    cin >> start;
    cout << "amount of the unit: " << endl;
    cin >> amount;
    cout << "what would you like to convert to: " << endl;
    cin >> convert;

    if (start == "kg" && convert == "g" || start == "KG" && convert == "G" || start == "KG" && convert == "g" || start == "kg" && convert == "G" || start == "kilograms" && convert == "grams" || start == "KILOGRAMS" && convert == "GRAMS" || start == "kilograms" && convert == "GRAMS" || start == "KILOGRAMS" && convert == "grams"){
        cout<< amount * 1000 << " g" << endl;
        main();
    }
    else if (start == "kg" && convert == "mg" || start == "KG" && convert == "MG" || start == "KG" && convert == "mg" || start == "kg" && convert == "MG" || start == "kilograms" && convert == "milligrams" || start == "KILOGRAMS" && convert == "MILLIGRAMS" || start == "kilograms" && convert == "GRAMS" || start == "KILOGRAMS" && convert == "grams"){
        cout << amount * 1000000 << " mg" << endl;
        main();
    }
    else if (start == "kg" && convert == "lb" || start == "KG" && convert == "LB" || start == "kg" && convert == "LB" || start == "KG" && convert == "lb" || start == "kilograms" && convert == "pounds" || start == "KILOGRAMS" && convert == "POUNDS" || start == "KILOGRAMS" && convert == "pounds" || start == "kilogams" && convert == "POUNDS"){
        cout << amount * 2.2046226218 << " lb" << endl;
        main();
    }
    else if (start == "kg" && convert == "st" || start == "KG" && convert == "ST" || start == "KG" && convert == "st" || start == "kg" && convert == "ST" || start == "kilograms" || convert == "stone" || start == "KILOGRAMS" && convert == "STONE" || start == "KILOGRAM" && convert == "stone" || start == "kilograms" && convert == "STONE"){
        cout << amount * 0.1574730444 << " st" << endl;
        main();
    }
    else if (start == "kg" && convert == "t" || start == "KG" && convert == "T" || start == "kg" && convert == "T" || start == "KG" && convert == "t" || start == "kilograms" && convert == "tonnes" || start == "KILOGRAMS" && convert == "TONNES" || start == "KILOGRAMS" && convert == "tonnes" || start == "kilograms" && convert == "TONNES"){
        cout << amount * 0.001 << " t" << endl;
        main();
    }
    else if(start == "kg" && convert == "oz" || start == "KG" && convert == "OZ" || start == "KG" && convert == "oz" || start == "kg" && convert == "OZ" || start == "kilograms" && convert == "ounces" || start == "KILOGRAMS" && convert == "OUNCES" || start == "KILOGRAMS" && convert == "ounces" || start == "kilograms" && start == "OUNCES"){
        cout << amount * 35.27396195 << " oz" << endl;
        main();
    }
    else if (start == "g" && convert == "kg" || start == "G" && convert == "KG" || start == "g" && convert == "KG" || start == "G" && convert == "kg" || start == "grams" && convert == "kilograms" || start == "GRAMS" && convert == "kilograms" || start == "GRAMS" && convert == "kilograms" || start == "grams" && convert == "KILOGRAMS"){
        cout<< amount * 0.001 << " kg" << endl; 
        main();
    }
    else if (start == "g" && convert == "mg" || start == "G" && convert == "MG" || start == "G" && convert == "mg" || start == "g" && convert == "MG" || start == "grams" && convert == "milligrams" || start == "GRAMS" && convert == "MILLIGRAMS" || start == "GRAMS" && convert == "milligrams" || start == "grams" && convert == "MILLIGRAMS"){
        cout << amount * 1000 << " mg" << endl;
        main();
    }
    else if (start == "g" && convert == "lb" || start == "G" && convert == "LB" || start == "G" && convert == "lb" || start == "g" && convert == "LB" || start == "grams" && convert == "pounds" || start == "GRAMS" && convert == "POUNDS" || start == "GRAMS" && convert == "pounds" || start == "grams" && convert == "POUNDS"){
        cout << amount * 0.0022046226 << " lb" << endl;
        main();
    }
    else if (start == "g" && convert == "st" || start == "G" && convert == "ST" || start == "g" && convert == "ST" || start == "G" && convert == "st" || start == "grams" && convert == "stone" || start == "GRAMS" && convert == "STONE" || start == "GRAMS" & convert == "stone" || start == "grams" && convert == "STONE"){
        cout << amount * 0.000157473 << " st" << endl;
        main();
    }
    else if (start == "g" && convert == "t" || start == "G" && convert == "T" || start == "G" && convert == "t" || start == "g" && convert == "T" || start == "grams" && convert == "tonnes" || start == "GRAMS" && convert == "TONNES" || start == "GRAMS" && convert == "tonnes" || start == "grams" && convert == "TONNES"){
        cout << amount * 0.0000011023 << " t" << endl;
        main();
    }
    else if(start == "g" && convert == "oz" || start == "G" && convert == "OZ" ||  start == "G" && convert == "oz" || start == "g" && convert == "OZ" || start == "grams" && convert == "ounces" || start == "GRAMS" && convert == "OUNCES" || start == "GRAMS" && convert == "ounces" || start == "grams" && convert == "OUNCES"){
        cout << amount * 0.0352739619 << " oz" << endl;
        main();
    }
    else if (start == "mg" && convert == "kg" || start == "MG" && convert == "KG" || start == "MG" && convert == "kg" || start == "mg" && convert == "KG" || start == "milligrams" && convert == "kilograms" || start == "MILLIGRAMS" && convert == "KILOGRAMS" || start == "MILLIGRAMS" && convert == "kilograms" || start == "milligrams" && convert == "KILOGRAMS"){
        cout<< amount * 0.000001 << " kg" << endl;
        main();
    }
    else if (start == "mg" && convert == "g" || start == "MG" && convert == "G" || start == "MG" && convert == "g" || start == "mg" && convert == "G" || start == "milligrams" && convert == "grams" || start == "MILLIGRAMS" && convert == "GRAMS" || start == "MILLIGRAMS" && convert == "grams" || start == "milligrams" && convert == "GRAMS"){
        cout << amount * 0.001 << " g" << endl;
        main();
    }
    else if (start == "mg" && convert == "lb" || start == "MG" && convert == "LB" || start == "MG" && convert == "lb" || start == "mg" && convert == "LB" || start == "milligrams" && convert == "pounds" || start == "MILLIGRAMS" && convert == "POUNDS" || start == "MILLIGRAMS" && convert == "pounds" || start == "milligrams" && convert == "POUNDS"){
        cout << amount * 0.0000022046 << " lb" << endl;
        main();
    }
    else if (start == "mg" && convert == "st" || start == "MG" && convert == "ST" || start == "mg" && convert == "ST" || start == "MG" && convert == "st" || start == "milligrams" && convert == "stone" || start  == "MILLIGRAMS" && convert == "STONE" || start == "MILLIGRAMS" && convert == "stone" || start == "milligrams" && convert == "STONE"){
        cout << amount * 0.0000001574730444 << " st" << endl;
        main();
    }
    else if (start == "mg" && convert == "t" || start == "MG" && convert == "T" || start == "MG" && convert == "t" || start == "mg" && convert == "T" || start == "milligrams" && convert == "tonnes" || start == "MILLIGRAMS" && convert == "TONNES" || start == "MILLIGRAMS" && convert == "tonnes" || start == "milligrams" && convert == "TONNES"){
        cout << amount * 0.000000001 << " t" << endl;
        main();
    }
    else if(start == "mg" && convert == "oz" || start == "MG" && convert == "OZ" || start == "MG" && convert == "oz" || start == "mg" && convert == "oz" || start == "milligrams" && convert == "ounces" || start == "MILLIGRAMS" && convert == "OUNCES" || start == "MILLIGRAMS" && convert == "ounces" || start == "milligrams" && convert == "OUNCES"){
        cout << amount * 0.000035274 << " oz" << endl;
        main();
    }
    else if(start == "lb" || start == "LB" || start == "LBs" || start == "LBS" || start == "lbs" || start == "pounds" || start == "POUNDS" || start == "POUND" || start == "pound"){
     
        if(convert == "kg" || convert == "KG" || convert == "kgs" || convert == "KGS" || convert == "KGs" || convert == "kilogram" || convert == "KILOGRAM" || convert == "kilograms" || convert == "KILOGRAMS"){
        cout << amount * 0.45359237 << " kg" << endl;
        main();
    }
     else if(convert == "g" || convert == "G" || convert == "gs" || convert == "Gs" || convert == "GS" || convert == "gram" || convert == "GRAM" || convert == "GRAMS" || convert == "grams"){
        cout << amount * 453.59237 << " g" << endl;
        main();
    }
     else if(start == "lb" && convert == "mg" || start == "LB" && convert == "MG" || start == "lb" && convert == "MG" || start == "LB" && convert == "mg" || start == "pounds" && convert == "milligrams" || start == "POUNDS" && convert == "MILLIGRAMS" || start == "POUNDS" && convert == "milligrams" || start == "pounds" && convert == "MILLIGRAMS"){
        cout << amount * 453592.37 << " mg" << endl;
        main();
    }
    else if(start == "lb" && convert == "st" || start == "LB" && convert == "ST" || start == "LB" && convert == "st" || start == "lb" && convert == "ST" || start == "pounds" && convert == "stone" || start == "POUNDS" && convert == "STONE" || start == "POUNDS" && convert == "stone" || start == "pounds" && convert == "STONE"){
        cout << amount * 0.08 << " st" << endl;
        main();
    }
     else if(start == "lb" && convert == "oz" || start == "LB" && convert == "OZ" || start == "lb" && convert == "OZ" || start == "LB" && convert == "oz" || start == "pounds" && convert == "ounces" || start == "POUNDS" && convert == "OUNCES" || start == "POUNDS" && convert == "onces" || start == "pounds" && convert == "OUNCES"){
        cout << amount * 16 << " oz" << endl;
        main();
    }
     else if(start == "lb" && convert == "t" || start == "LB" && convert == "T" || start == "LB" && convert == "t" || start == "lb" && convert == "T" || start == "pounds" && convert == "tonnes" || start == "POUNDS" && convert == "TONNES" || start == "POUNDS" && convert == "tonnes" || start == "pounds" && convert == "TONNES"){
        cout << amount * 0.0004535924 << " t" << endl;
        main();
    }}
    else if(start == "stone" || start == "STONE" || start == "ST" || start == "st"){
        
    if (convert == "g" || convert == "G" || convert == "gram" || convert == "GRAM" || convert == "Gs" || convert == "gs" || convert == "GS" || convert == "grams" || convert == "GRAMS"){
        cout << amount * 6350.29318 << " g" << endl;
        main();
    }
    else if (convert == "mg" || convert == "MG" || convert == "mgs" || convert == "MGs" || convert == "MGS" || convert == "milligram" || convert == "MILLIGRAM" || convert == "milligrams" || convert == "MILLIGRAMS"){
        cout << amount * 6350293.18 << " mg" << endl;
        main();
    }
    else if (convert == "kg" || convert == "KG" || convert == "KGs" || convert == "KGS" || convert == "kgs" || convert == "kilogram" ||convert == "KILOGRAM" || convert == "kilograms" || convert == "KILOGRAMS"){
        cout << amount * 6.35029318 << " kg" << endl;
        main();
    }
    else if (convert == "lb" || convert == "LB" || convert == "LBs" || convert == "lbs" || convert == "LBS" || convert == "pound" || convert == "POUND" || convert == "pounds" || convert == "POUNDS"){
        cout << amount * 14 << " lb" << endl;
        main();
    }
    else if (convert == "t" || convert == "T" || convert == "Ts" || convert == "ts" || convert == "ton" || convert == "TON" || convert == "TONNES" || convert == "tonnes" || convert == "TS"){
        cout << amount * 0.0063502932 << " t" << endl;
        main();
    }
    else if (convert == "oz" || convert == "OZ" || convert == "ounce" || convert == "OUNCE" || convert == "ozs" || convert == "OZs" || convert == "OZS" || convert == "OUNCES" || convert == "ounnces"){
        cout << amount * 224 << " oz" << endl;
        main();
    }    }
    else if (start == "t" || start == "T" || start == "ton" || start == "TON" || start == "tonnes" || start == "TONNES"){

    if(convert == "mg" || convert == "MG" || convert == "MGs" || convert == "mgs" || convert == "MGS" || convert == "milligram" || convert == "MILLIGRAM" || convert == "milligrams" || convert == "MILLIGRAMS"){
        cout << amount * 1000000000 << " mg" << endl;
        main();
    }
    else if(convert == "g" || convert == "G" || convert == "gs" || convert == "Gs" || convert == "GS" || convert == "gram" || convert == "grams" || convert == "GRAM" || convert == "GRAMS"){
        cout << amount * 1000000 << " g" << endl; 
        main();
    }
    else if(convert == "kg" || convert == "KG" || convert == "kgs" || convert == "KGs" || convert == "kilogram" || convert == "kilograms" || convert == "KILOGRAM" || convert == "KILOGRAMS"){
        cout << amount * 1000 << " kg" << endl;
        main();
    }
    else if(convert == "pound" || convert == "POUND" || convert == "POUNDS" || convert == "pounds" || convert == "lb" || convert == "LBS" || convert == "lbs" || convert == "LBs" || convert == "LB"){
        cout << amount * 2204.6226218 << " lb" << endl;
        main();
    }
    else if(convert == "OUNCE" || convert == "OUNCES" || convert == "ounce" || convert == "ounces" || convert == "oz" || convert == "OZ" || convert == "ozs" || convert == "OZs" || convert == "OZS"){
        cout << amount * 35273.96195 << " oz" << endl;
        main();
    }
    else if (convert == "stone" || convert == "STONE" || convert == "st" || convert == "ST"){
        cout << amount * 157.47304442 << " st" << endl;
        main();
    }
    }
    else if (start == "oz" || start == "OZ" || start == "ounces" || start == "ounce" || start == "OUNCES" || start == "OUNCE"){
     if (convert == "mg" || convert == "MG" || convert == "milligrams" || convert == "MILLIGRAMS"){
        cout << amount * 28349.523125 << " mg" << endl; 
        main();
    }
    else if (convert == "g"|| convert == "G" || convert == "grams" || convert == "GRAMS"){
        cout << amount * 28.349523125 << " g" << endl;
        main();
    }
    else if(convert == "kilogram" || convert == "kilograms" || convert == "KILOGRAM" || convert == "KILOGRAMS" || convert == "kg" || convert == "KG" || convert == "KGs" || convert == "KGS" || convert == "kgs"){
        cout << amount * 0.0283495231 << " kg" << endl;
        main(); 
    }
    else if (convert == "pounds" || convert == "pound" || convert == "lb" || convert == "lbs" || convert == "POUND" || convert == "POUNDS" || convert == "LBS" || convert == "LB" || convert == "LBs"){
        cout << amount * 0.0625 << " lb" << endl;
        main();
    }
    else if (convert == "stone" || convert == "STONE" || convert == "st" || convert == "ST" || convert == "St"){
        cout << amount * 0.005 << " st" << endl;
        main();

    }
    else if (convert == "t" || convert == "T" || convert == "ton" || convert == "TON" || convert == "tonnes" || convert == "TONNES"){
        cout << amount * 0.0000283495 << " t" << endl;
        main();
    }}
    else if(start == "m" || start == "M" || start == "METERS" || start == "meters" || start == "metres" || start == "METRES" || start == "meter" || start == "METER" || start == "metre" || start == "METRE"){
        if (convert == "km" || convert == "KM"){
        cout << amount * 0.001 << " km" << endl;
        main();
        }
        else if (convert == "cm" || convert == "CM" || convert == "centimeters" || convert == "CENTIMETERS" || convert == "centimeter" || convert == "CENTIMETER"){
            cout << amount* 100 << " cm" << endl;
            main();
        }
        else if(convert == "mm" || convert == "MM" || convert == "millimeters" || convert == "MILLIMETERS" || convert == "millimeter" || convert == "MILLIMETER"){
            cout << amount * 1000 << " mm" << endl;
            main;
        }
        else if (convert == "mi" || convert == "MI" || convert == "miles" || convert == "MILES" || convert == "mile" || convert == "MILE"){
            cout << amount * 0.0006213712 << " mi" << endl;
            main();
        }
        else if (convert == "yd" || convert == "YD" || convert == "yards" || convert == "YARDS" || convert == "yard" || convert == "YARD"){
            cout << amount * 1.0936132983 << " yd" << endl;
            main();
        }
        else if (convert == "ft" || convert == "FT" || convert == "feet" || convert == "FEET" || convert == "foot" || convert == "fOOT" || convert == "foots" || convert == "FOOTS" || convert == "feets" || convert == "FEETS"){
            cout << amount * 3.280839895 << " ft" << endl;
            main();
        }
        else if (convert == "in" || convert == "IN" || convert == "inches" || convert == "INCHES" || convert == "inch" || convert == "INCH"){
            cout << amount * 39.37007874 << " in" << endl;
            main();
        }
        else if (convert == "ly" || convert == "LY" || convert == "light-year" || convert == "light year" || convert == "lightyear" || convert == "LIGHT-YEAR" || convert == "LIGHTYEAR" || convert == "LIGHTYEAR" || convert == "light-years" || convert == "lightyears" || convert == "light years"){
            cout << amount * 0.000000000000001057000834 << " ly" << endl;
            main();
        }
    }
    else if (start == "km" || start == "KM" || start == "kilometers" || start == "KILOMETERS" || start == "kilometer" || start == "KILOMETER" || start == "kilometre" || start == "KILOMETRE"){

        if (convert == "m" || convert == "M" || convert == "meter" || convert == "METER" || convert == "metre" || convert == "METRE"){
            cout << amount * 1000 << " m" << endl;
            main();
        }
        else if(convert == "cm" || convert == "CM" || convert == "centimeter" || convert == "CENTIMETER" || convert == "centimetre" || convert == "CENTIMETRE" || convert == "centimeters" || convert == "CENTIMETERS" || convert == "centimetres" || convert == "CENTIMETRES"){
            cout<< amount * 100000 << " cm" << endl;
            main();
        }
        else if (convert == "mm" || convert == "MM" || convert == "millimeter" || convert == "MILLIMETER" || convert == "MILLIMETERS" || convert == "millimeters" || convert == "millimetre" || convert == "millimetres" || convert == "MILLIMETRE" || convert == "MILLIMETRES"){
            cout << amount * 1000000 << " mm" << endl;
            main();
        }
        else if (convert == "mi" || convert == "MI" || convert == "miles" || convert == "MILES" || convert == "mile" || convert == "MILE"){
        cout << amount * 0.6213711922 << " mi" << 
        main();
        }
        else if (convert == "yd" || convert == "YD" || convert == "yard" || convert == "YARD" || convert == "yards" || convert == "YARDS"){
            cout << amount * 1093.6132983 << " yd" << endl;
            main();
        }
        else if(convert == "ft" || convert == "FT" || convert == "foot" || convert == "FOOT" || convert == "feet" || convert == "FEET" || convert == "foots" || convert == "FOOTS" || convert == "feets" || convert == "FEETS" || convert == "fts" || convert == "FTS" || convert == "FTs"){
            cout << amount * 3280.839895 << " ft" << endl;
            main();
        }
        else if (convert == "in" || convert == "IN" || convert == "inches" || convert == "INCHES" || convert == "inch" || convert == "INCH" || convert == "inchs" || convert == "INCHS" || convert == "ins" || convert == "INs" || convert == "INS"){
            cout << amount * 39370.07874 << " in" << endl;
            main();
        }
        else if (convert == "ly" || convert == "LY" || convert == "light-year" || convert == "LIGHT-YEAR" || convert == "LIGHT-YEARS" || convert == "light-years" || convert == "lightyear" || convert == "LIGHTYEAR" || convert == "LIGHTYEARS" || convert == "lightyears" || convert == "light year" || convert == "light years" || convert == "LIGHT YEAR" || convert == "LIGHT YEARS" || convert == "lys" || convert == "LYs" || convert == "LYS"){
            cout << amount * 0.00000000001057000834 << " ly" << endl;
            main();
        }
}
    else if (start == "cm" || start == "CM" || start == "centimeter" || start == "CENTIMETER" || start == "centimeters" || start == "CENTIMETERS" || start == "centimetres" || start == "CENTIMETRES" || start == "centimetre" || start == "CENTIMETRE" || start == "cms" || start == "CMs" || start == "CMS"){
        
        if ( convert == "m" || convert == "M" || convert == "meter" || convert == "METER" || convert == "meters" || convert == "METERS" || convert == "metre" || convert == "METRE" || convert == "metres" || convert == "METRES" || convert == "ms" || convert == "Ms" || convert == "MS"){
            cout << amount * 0.01 << " m" << endl;
            main();
        }
        else if ( convert == "km" || convert == "KM" || convert == "kilometer" || convert == "KILOMETER" || convert == "kilometers" || convert == "KILOMETERS" || convert == "kilometre" || convert == "KILOMETRE" || convert == "kilometres" || convert == "KILOMETRES" || convert == "kms" || convert == "KMs" || convert == "KMS"){
            cout << amount * 0.00001 << " km" << endl;
            main();
        }
        else if ( convert == "mm" || convert == "MM" || convert == "millimeter" || convert == "MILLIMETER" || convert == "millimeters" || convert == "MILLIMETRES" || convert == "millimetres" || convert == "MILLIMETRES" || convert == "mms" || convert == "MMs" || convert == "MMS"){
            cout << amount * 10 << " mm" << endl;
            main();
        }
        else if( convert == "mi" || convert == "MI" || convert == "mile" || convert == "MILE" || convert == "miles" || convert == "MILES" || convert == "mis" || convert == "MIs" || convert == "MIS"){
            cout << amount * 0.0000062137 << " mi" << endl;
            main();
        }
        else if ( convert == "yd" || convert == "YD" || convert == "YD" || convert == "yard" || convert == "YARD" || convert == "yards" || convert == "YARDS" || convert == "yds" || convert == "YDs" || convert == "YDS"){
            cout << amount * 0.010936133 << " yd" << endl;
            main();
        }
        else if ( convert == "ft" || convert == "FT" || convert == "foot" || convert == "FOOT" || convert == "feet" || convert == "FEET" || convert == "FEETS" || convert == "feets" || convert == "foots" || convert == "FOOTS" || convert == "fts" || convert == "FTs" || convert == "FTS"){
            cout << amount * 0.032808399 << " ft" << endl;
            main();
        }
        else if( convert == "in" || convert == "IN" || convert == "inch" || convert == "INCH" || convert == "INCHES" || convert == "inches" || convert == "inchs" || convert == "INCHS" || convert == "ins" || convert == "INs" || convert == "INS"){
            cout << amount * 0.3937007874 << " in" << endl;
            main();
        }
        else if ( convert == "ly" || convert == "LY" || convert == "light-year" || convert == "LIGHT-YEAR" || convert == "lightyear" || convert == "LIGHTYEAR" || convert == "light year" || convert == "LIGHT YEAR" || convert == "light-years" || convert == "LIGHT-YEARS" || convert == "lightyears" || convert == "LIGHTYEARS" || convert == "light years" || convert == "LIGHT YEARS" || convert == "lys" || convert == "LYs" || convert == "LYS"){
            cout << amount * 0.000000000000001057000834 << " ly" << endl;
            main();
        }
}
    else if (start == "mm" || start == "MM" || start == "millimeters" || start == "millimeter" || start == "MILLIMETERS" || start == "MILLIMETER" || start == "millimetres" || start == "millimetre" || start == "MILLIMETRE" || start == "MILLIMETRES" || start == "mms" || start == "MMs" || start == "MMS")
    {
        if (convert == "m" || convert == "M" || convert == "meter" || convert == "METER" || convert == "meters" || convert == "METERS" || convert == "metre" || convert == "METRE" || convert == "metres" || convert == "METRES" || convert == "ms" || convert == "Ms" || convert == "MS"){
            cout << amount * 0.001 << " m" << endl;
            main();
        }
        if (convert == "km" || convert == "KM" || convert == "kilometer" || convert == "KILOMETER" || convert == "kilometers" || convert == "KILOMETERS" || convert == "kilometre" || convert == "KILOMETRE" || convert == "kilometres" || convert == "KILOMETRES" || convert == "kms" || convert == "KMs" || convert == "KMS"){
            cout << amount * 0.000001 << " km" << endl ;
            main();
        }
        if (convert == "cm" || convert == "CM" || convert == "centimeter" || convert == "CENTIMETER" || convert == "centimeters" || convert == "CENTIMETERS" || convert == "centimetres" || convert == "CENTIMETRES" || convert == "centimetre" || convert == "CENTIMETRE" || convert == "cms" || convert == "CMs" || convert == "CMS"){
            cout << amount * 0.1 << " cm" << endl;
            main();
        }
        if (convert == "mi" || convert == "MI" || convert == "mile" || convert == "MILE" || convert == "miles" || convert == "MILES" || convert == "mis" || convert == "MIs" || convert == "MIS"){
            cout << amount *  0.0000006213711922 << " mi" << endl;
            main();
        }
        if (convert == "yd" || convert == "YD" || convert == "yard" || convert == "YARD" || convert == "yards" || convert == "YARDS" || convert == "yds" || convert == "YDs" || convert == "YDS"){
            cout << amount * 0.0010936133 << " yd" << endl;
            main();
        }
        if (convert == "ft" || convert == "FT" || convert == "foot" || convert == "FOOT" || convert == "foots" || convert == "FOOTS" || convert == "feet" || convert == "FEET" || convert == "feets" || convert == "FEETS" || convert == "fts" || convert == "FTs" || convert == "FTS"){
            cout << amount * 0.0032808399 << " ft" << endl;
            main();
        }
        if (convert == "in" || convert == "IN" || convert == "inch" || convert == "INCH" || convert == "INCHES" || convert == "inches" || convert == "inchs" || convert == "INCHS" || convert == "ins" || convert == "INs" || convert == "INS"){
            cout << amount * 0.0393700787 << " in" << endl;
            main();
        }
        if (convert == "ly" || convert == "LY" || convert == "light-year" || convert == "LIGHT-YEAR" || convert == "lightyear" || convert == "LIGHTYEAR" || convert == "light year" || convert == "LIGHT YEAR" || convert == "light-years" || convert == "LIGHT-YEARS" || convert == "lightyears" || convert == "LIGHTYEARS" || convert == "light years" || convert == "LIGHT YEARS" || convert == "LYs" || convert == "lys" || convert == "LYS"){
            cout << amount * 0.000000000000057000834 << " ly" << endl;
            main();
        }
    }
    else if(start == "mi" || start == "MI" || start == "mile" || start == "MILE" || start == "MILES" || start == "miles" || start == "mis" || start == "MIs" || start == "MIS"){

        if (convert == "m" || convert == "M" || convert == "meter" || convert == "METER" || convert == "meters" || convert == "METERS" || convert == "metre" || convert == "METRE" || convert == "METRES" || convert == "metres" || convert == "ms" || convert == "Ms" || convert == "MS"){
            cout << amount * 1609.344 << " m" << endl;;
            main();
        }
        if (convert == "km" || convert == "KM" || convert == "kilometer" || convert == "KILOMETER" || convert == "kilometers" || convert == "KILOMETERS" || convert == "kilometres" || convert == "KILOMETRES" || convert == "kilometre" || convert == "KILOMETRE" || convert == "kms" || convert == "KMs" || convert == "KMS"){
            cout << amount * 1.609344 << " km" << endl;
            main();
        }
        if (convert == "mm" || convert == "MM" || convert == "millimeters" || convert == "MILLIMETERS" || convert == "millimeter" || convert == "MILLIMETER" || convert == "millimetre" || convert == "MILLIMETRE" || convert == "millimetres" || convert == "MILLIMETRES" || convert == "mms" || convert == "MMs" || convert == "MMS"){
            cout << amount * 1609344 << " mm" << endl;
            main();
        }
        if (convert == "cm" || convert == "CM" || convert == "centimeter" || convert == "CENTIMETER" || convert == "centimeters" || convert == "CENTIMETERS" || convert == "centimetres" || convert == "CENTIMETRES" || convert == "centimetre" || convert == "CENTIMETRE" || convert == "cms" || convert == "CMs" || convert == "CMS"){
            cout << amount * 160934.4 << " cm" << endl;
            main();
        }
        if (convert == "yd" || convert == "YD" || convert == "yard" || convert == "YARD" || convert == "YARDS" || convert == "yards" || convert == "yds" || convert == "YDs" || convert == "YDS"){
            cout << amount * 1760 << " yd" << endl;
            main();
        }
        if (convert == "ft" || convert == "FT" || convert == "foot" || convert == "FOOT" || convert == "foots" || convert == "FOOTS" || convert == "feet" || convert == "FEET" || convert == "feets" || convert == "FEETS" || convert == "fts" || convert == "FTs" || convert == "FTS"){
            cout << amount * 5280 << " ft" << endl;
            main();
        }
        if (convert == "in" || convert == "IN" || convert == "inch" || convert == "INCH" || convert == "inches" || convert == "INCHES" || convert == "inchs" || convert == "inchs" || convert == "ins" || convert == "INs" || convert == "INS"){
            cout << amount * 63360 << " in" << endl;
            main();
        }
        if (convert == "ly" || convert == "LY" || convert == "lightyear" || convert == "LIGHTYEAR" || convert == "LIGHTYEARS" || convert == "lightyears" || convert == "light-year" || convert == "LIGHT-YEAR" || convert == "LIGHT-YEARS" || convert == "light-years" || convert == "light year" || convert == "LIGHT YEAR" || convert == "LIGHT YEARS" || convert == "light years" || convert == "lys" || convert == "LYs" || convert == "LYS"){
            cout << amount * 0.0000000000170107795 << " ly" << endl;
            main();
        }
    }
    else if(start == "yd" || start == "YD" || start == "yard" || start == "YARD" || start == "yards" || start == "YARDS" || start == "yds" || start == "YDs" || start == "YDS"){

        if (convert == "m" || convert == "M" || convert == "meter" || convert == "METER" || convert == "meters" || convert == "METERS" || convert == "metre" || convert == "METRE" || convert == "METRES" || convert == "Ms" || convert == "ms" || convert == "MS"){
            cout << amount * 0.9144 << " m" << endl;
            main();
        }
        if (convert == "km" || convert == "KM" || convert == "kilometers" || convert == "KILOMETERS" || convert == "kilometer" || convert == "KILOMETER" || convert == "kilometre" || convert == "KILOMETRE" || convert == "kilometres" || convert == "KILOMETRES" || convert == "kms" || convert == "KMs" || convert == "KMS"){
            cout << amount * 0.0009144 << " km" << endl;
            main(); 
        }
        if (convert == "mm" || convert == "MM" || convert == "millimeter" || convert == "MILLIMETER" || convert == "millimeters" || convert == "MILLIMETERS" || convert == "millimetre" || convert == "MILLIMETRE" || convert == "MILLIMETRES" || convert == "millimetres" || convert == "mms" || convert == "MMs" || convert == "MMS"){
            cout << amount * 914.4 << " mm" << endl;
            main();
        }
        if (convert == "cm" || convert == "CM" || convert == "centimeter" || convert == "CENTIMETER" || convert == "centimeters" || convert == "centimetre" || convert == "CENTIMETRE" || convert == "centimetres" || convert == "CENTIMETRES" || convert == "cms" || convert == "CMs" || convert == "CMS"){
            cout << amount * 91.44 << " cm" << endl;
            main();
        }
        if (convert == "mi" || convert == "MI" || convert == "mile" || convert == "MILE" || convert == "miles" || convert == "MILES" || convert == "ms" || convert == "Ms" || convert == "MS"){
            cout << amount * 0.0005681818 << " mi" << endl;
            main();
        }
        if (convert == "ft" || convert == "FT" || convert == "foot" || convert == "FOOT" || convert == "feet" || convert == "FEET" || convert == "foots" || convert == "FOOTS" || convert == "feets" || convert == "FEETS" || convert == "fts" || convert == "FTs" || convert == "FTS"){
            cout << amount * 3 << " ft" << endl;
            main();
        }
        if (convert == "in" || convert == "IN" || convert == "inch" || convert == "INCH" || convert == "inches" || convert == "INCHES" || convert == "inchs" || convert == "INCHS" || convert == "ins" || convert == "INs" || convert == "INS"){
            cout << amount * 36 << " in" << endl;
            main();
        }
        if (convert == "ly" || convert == "LY" || convert == "light year" || convert == "LIGHT YEAR" || convert == "light years" || convert == "LIGHT YEARS" || convert == "light-year" || convert == "LIGHT-YEAR" || convert == "light-years" || convert == "LIGHT-YEARS" || convert == "lightyear" || convert == "LIGHTYEAR" || convert == "LIGHTYEARS" || convert == "lightyears" || convert == "lys" || convert == "LYs" || convert == "LYS"){
            cout << amount * 0.00000000000000009665215626 << " ly" << endl;
            main();
        }
        else {
            cout << "You mispelled it you EEJIT!!!" << endl;
            main();
        }
    }
    else if(start == "in" || start == "IN" || start == "inch" || start == "INCH" || start == "inches" || start == "INCHES" || start == "inchs" || start == "INCHS" || start == "ins" || start == "INs" || start == "INS"){

        if (convert == "m" || convert == "M" || convert == "meter" || convert == "METER" || convert == "meters" || convert == "METERS" || convert == "metre" || convert == "METRE" || convert == "METRES" || convert == "metres" || convert == "ms" || convert == "Ms" || convert == "MS"){
            cout << amount * 0.0254 << " m" << endl;
            main();
        }
        if (convert == "km" || convert == "KM" || convert == "kilometer" || convert == "KILOMETER" || convert == "kilometers" || convert == "KILOMETERS" || convert == "kilometre" || convert == "KILOMETRE" || convert == "kilometres" || convert == "KILOMETRES" || convert == "kms" || convert == "KMs" || convert == "KMS"){
            cout << amount * 0.0000254 << " km" << endl; 
            main();
        }
        if (convert == "mm" || convert == "MM" || convert == "millimeter" || convert == "MILLIMETER" || convert == "millimeters" || convert == "MILLIMETERS" || convert == "millimetres" || convert == "MILLIMETRES" || convert == "millimetre" || convert == "MILLIMETRE" || convert == "mms" || convert == "MMs" || convert == "MMS"){
        cout << amount * 25.4 << " mm" << endl;
        main();
        }
        if (convert == "cm" || convert == "CM" || convert == "centimeter" || convert == "CENTIMETER" || convert == "centimeters" || convert == "CENTIMETERS" || convert == "centimetre" || convert == "CENTIMETRE" || convert == "centimetres" || convert == "CENTIMETRES" || convert == "cms" || convert == "CMs" || convert == "CMS"){
        cout << amount * 2.54 << " cm" << endl;
        main();
        }
        if (convert == "mi" || convert == "MI" || convert == "mile" || convert == "MILE" || convert == "miles" || convert == "MILES" || convert == "ms" || convert == "Ms" || convert == "MS"){
            cout << amount * 0.0000157828 << " mi" << endl;
            main();
        }
        if (convert == "yd" || convert == "YD" || convert == "yard" || convert == "YARD" || convert == "yards" || convert == "YARDS" || convert == "yds" || convert == "YDs" || convert == "YDS"){
            cout << amount * 0.0277777778;
            main();
        }
        if (convert == "ft" || convert == "FT" || convert == "foot" || convert == "FOOT" || convert == "feet" || convert == "FEET" || convert == "foots" || convert == "FOOTS" || convert == "feets" || convert == "FEETS" || convert == "fts" || convert == "FTs" || convert == "FTS"){
            cout << amount * 0.0833333333;
            main();
        }
        if (convert == "ly" || convert == "LY" || convert == "light year" || convert == "LIGHT YEAR" || convert == "light years" || convert == "LIGHT YEARS" || convert == "light-year" || convert == "LIGHT-YEAR" || convert == "light-years" || convert == "LIGHT-YEARS" || convert == "lightyear" || convert == "LIGHTYEAR" || convert == "lightyears" || convert == "LIGHTYEARS" || convert == "lightyear" || convert == "lys" || convert == "LYs" || convert == "LYS"){
            cout << amount * 0.000000000000000002684782118;
            main();
        }
        else {
            cout << "You mispelled it you eejit!!!" << endl;
            main();
        }
    }
}

else if (uin == "pythagorean" || uin == "PYTHAGOREAN"){
    string side;
    int val1;
    int val2;
    cout << "enter the side that you want to solve" << endl;
    cin >> side;
    cout << "value of first side:" << endl;
    cin >> val1;
    cout << "value of second side?" << endl;
    cin >> val2;

    if (side == "hypotenuse" || side == "HYPOTENUSE" || side == "LONGEST" || side == "longest" || side == "diagonal" || side == "DIAGONAL"); {
        int squ = val1 * val1 + val2 * val2;
        cout << sqrt(squ) << endl;
        main();
    }
    if (side == "adjacent" || side == "ADJACENT" || side == "NEXT" || side == "next"){
        int squ = val1 * val1 - val2 * val2;
        cout << sqrt(squ) << endl;
        main();
    }
    if (side == "opposite" || side == "OPPOSITE" || side == "oppose" || side == "OPPOSE"){
        int squ = val1 * val1 - val2 * val2;
        cout << sqrt(squ) << endl;
        main();
    }



}
else if (uin == "circle" || uin == "CIRCLE" || uin == "round" || uin == "ROUND"){
    string operatioooon;;
    cout << "what would you like to calculate" << endl;
    cin >> operatioooon;
    if (operatioooon == "circumference"){
        float radicalradius;
           cout << "input the radius( diameter / 2): " << endl;
           cin >> radicalradius;
           float diameter = radicalradius * 2 ;
           cout << diameter * M_PI << endl;
           main();
    }
else if (operatioooon == "pi" || operatioooon == "PI" || operatioooon == "π") {
    long long x; 
    long double val = 0.0L;
    for (x = 1; x <= 9223372036854775807; x++) {
        long double sign ;
        if (x % 2 == 1){
            sign = 1.0L;
        }
        else if(x % 2 == 0){
            sign = -1.0L;
        }
        long double term = sign / (2.0L * x - 1.0L);

        val = val + term;

        long double nval = 4.0L * val;
        printf("%0.120Lf\n", nval);
        fflush(stdout);
    }

    printf("\n");

    return 0;
    //for reader: this code takes x and uses the formula 1/1 - 1/3 + 1/5 + 1/7 + 1/9 + ... = 1/4 * π to calculate pi to 120 digits, this may be impractical as it crashed my computer, but i am not sure if it is because my computer is from the ice age or if it is dangerous, but beware, also, did you find the ctf?
}
else if (operatioooon == "pie" || operatioooon == "PIE"){
    cout << "You mispelled it you eejit" << endl;
    main();
}
else if(operatioooon == "area" || operatioooon == "AREA"){
    int radicalradius;
    cout << "what is the radius?" << endl;
    cin >> radicalradius;
    cout << (radicalradius * radicalradius) * M_PI << endl;
    main();

}

}
else if (uin == "lcm" || uin == "LCM"){
    int goatbaby;
    int babygoat;
    int maximuxmaximum;
    cout << "first number: " << endl;
    cin >> goatbaby;
    cout << "second number: " << endl;
    cin >> babygoat;\
    maximuxmaximum = (goatbaby < babygoat) ? goatbaby : babygoat;
    while (1 == 1){
        if (maximuxmaximum % goatbaby == 0 && maximuxmaximum % babygoat == 0){
            cout << maximuxmaximum << endl;
            main();
        }
        else {
            maximuxmaximum = maximuxmaximum + 1;
        }
    }

    
}
else if (uin == "secret" || uin == "chickenbutt"){
        cout << downlerabbitholewego << endl;
        main();   
}
else{
cout << "sorry, try again, or just LOOK AT THE HELP MENU FOR GOODNESS SAKES YOU IDIOT!" << endl;
    main();
}
}

//footer: this is like my first time coding in c++ and i am pretty proud of my work, it is no masterpiece now but it is mine lol XD! P.S really cold!!!🐰🥕🐰