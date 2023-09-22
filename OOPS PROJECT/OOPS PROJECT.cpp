#include<iostream>
#include<string>
using namespace std;



class car{
public:
    float mileage, torque, airbags, seater, safety_rating,rent;
    string fuel_type;
    // getter functions (get the value of variables)
    void get_mileage(){
        cout<< "Mileage is " << mileage << " kmpl" << endl;
    }
    void get_torque(){
        cout<< "Torque is " << torque << " N-m" << endl;;
    }
    void get_airbags(){
        cout<< "Total Number of airbags is " << airbags << " Units" << endl;;
    }
    void get_seater(){
        cout<< "This Car is " << seater << " seater" << endl;;
    }
    void get_safety_rating(){
        cout<< "This car have Safety Ratings of " << safety_rating << " Stars Out of 5" << endl;;
    }
    void get_rent(){
        cout<< "Rent Of the Car is around ₹" << rent << endl;;
    }
    void get_fuel_type(){
        cout<< fuel_type;
    }
};



class economy:public car{
public:

};



class mid_class: public car{
public:
    string sunroof;
    void get_sunroof(){
        cout<< sunroof;
    }
};



class luxury: public mid_class {
public:
    string sound_system, assisted_parking;
    void get_sound_system(){
        cout<< sound_system;
    }
    void get_assisted_parking(){
        cout<< assisted_parking;
    }

};



string enter_choice(){
    cout<< "We have Three Segments of Cars" << endl;
    cout<< "1. Economy Class (Rent ₹10,000-₹15,000 per month)" << endl;
    cout<< "2. Mid Class (Rent ₹20,000-₹40,000 per month)" << endl;
    cout<< "3. Luxury Class (Rent ₹50,000-₹1,50,000 per month)" << endl;
    cout<< "Choose any one option to dive into a specific segment" << endl;
    cout<< "or press 4 to explore all segments" << endl;
    string Choice;
    cin>> Choice;
    return Choice;
}



int main()
{
    car Specs_average;
    economy economy_specs;
    mid_class mid_class_specs;
    luxury luxury_specs;

    Specs_average.mileage = 16.5;
    Specs_average.torque = 200;
    Specs_average.airbags = 6;
    Specs_average.seater = 5;
    Specs_average.safety_rating = 3.5;
    Specs_average.rent = 30000;
    Specs_average.fuel_type = "Diesel Or Petrol Both Variant Available";

    economy_specs.mileage = 23.2;
    economy_specs.torque = 113;
    economy_specs.airbags = 4;
    economy_specs.seater = 5;
    economy_specs.safety_rating = 2.5;
    economy_specs.rent = 13000;
    economy_specs.fuel_type = "Diesel Or Petrol Both Variant Available";

    mid_class_specs.mileage = 15;
    mid_class_specs.torque = 150;
    mid_class_specs.airbags = 6;
    mid_class_specs.seater = 5;
    mid_class_specs.safety_rating = 4;
    mid_class_specs.sunroof = "SunRoof Is Available";
    mid_class_specs.rent = 30000;
    mid_class_specs.fuel_type = "Diesel Or Petrol Both Variant Available";

    luxury_specs.mileage = 10.5;
    luxury_specs.torque = 700;
    luxury_specs.airbags = 10;
    luxury_specs.seater = 5;
    luxury_specs.safety_rating = 5;
    luxury_specs.sunroof = "SunRoof Is Available";
    luxury_specs.sound_system = "High Quality 13D Sound System Available" ;
    luxury_specs.assisted_parking = "Assisted Parking Is Available" ;
    luxury_specs.rent = 70000;
    luxury_specs.fuel_type = "Diesel Or Petrol Both Variant Available";

    cout<< "Welcome To Car Rental System" << endl;
    cout<< "----------------------------" << endl;
    cout<< endl;
    cout<< "Our Every Car Is Upto The mark of Some Basic Parameters" << endl;
    cout<< "The Parameters are as follows:" << endl;
    Specs_average.get_mileage();
    Specs_average.get_torque();
    Specs_average.get_airbags();
    Specs_average.get_safety_rating();
    Specs_average.get_seater();
    Specs_average.get_fuel_type();
    Specs_average.get_rent();

    string Choice=enter_choice();

    if (Choice == "1") {
        economy_specs.get_mileage();
        economy_specs.get_torque();
        economy_specs.get_airbags();
        economy_specs.get_seater();
        economy_specs.get_safety_rating();
        economy_specs.get_rent();
        economy_specs.get_fuel_type();
        cout << "-------------------------" << endl;
        cout << "Here are the top 10 economy class cars\nbased on their overall value for\nmoney, fuel efficiency, safety features, and performance:\n1. Honda Civic\n2. Toyota Corolla\n3. Mazda3\n4. Kia Forte\n5. Hyundai Elantra\n6. Volkswagen etta\n7. Subaru Impreza\n8. Nissan Sentra\n9. Chevrolet Cruze\n10. Ford Focus\n" << endl;

        int select;
        cin >> select ;
        if (select == 1) {
            cout << "Honda Civic" << endl;
            cout << "-------------------------" << endl;
            cout << "The Honda Civic is a compact car that has been in production since the 1970s. It is known for its reliability, fuel efficiency, and sporty styling. The current generation of the Honda Civic comes with a 2.0-liter four-cylinder engine that produces 158 horsepower, or a turbocharged 1.5-liter four-cylinder engine that produces 174 horsepower. It is available in both manual and automatic transmissions, and comes with a variety of features such as Apple CarPlay, Android Auto, and a rearview camera. The Honda Civic is a popular choice for those looking for a reliable and practical car that is also fun to drive." << endl;
        }
        else if (select == 2) {
            cout << "Toyota Corolla" << endl;
            cout << "-------------------------" << endl;
            cout << "The Toyota Corolla is a compact car that has been in production since the 1960s. It is known for its reliability, affordability, and practicality. The current generation of the Toyota Corolla comes with a 1.8-liter four-cylinder engine that produces 139 horsepower. It is available in both manual and automatic transmissions, and comes with a variety of features such as Apple CarPlay, Android Auto, and a rearview camera. The Toyota Corolla is a popular choice for those looking for a reliable and efficient car that is easy to maintain and comes with a good reputation for long-term durability." << endl;
        }
        else if (select == 3) {
            cout << "Mazda3" << endl;
            cout << "-------------------------" << endl;
            cout << "The Mazda3 is a compact car that is known for its stylish design, responsive handling, and fuel efficiency. The current generation of the Mazda3 comes with a choice of two engines: a 2.0-liter four-cylinder engine that produces 155 horsepower or a turbocharged 2.5-liter four-cylinder engine that produces 250 horsepower. It is available in both manual and automatic transmissions, and comes with a variety of features such as Apple CarPlay, Android Auto, and a rearview camera. The Mazda3 is a popular choice for those looking for a car that is fun to drive, yet practical enough for everyday use. It also has a reputation for being a reliable and safe car, making it a top choice in its class." << endl;
        }
        else if (select == 4) {
            cout << "Kia Forte" << endl;
            cout << "-------------------------" << endl;
            cout << "The Kia Forte is a compact car that has gained popularity for its value for money and practicality. The current generation of the Kia Forte comes with a 2.0-liter four-cylinder engine that produces 147 horsepower, or a turbocharged 1.6-liter four-cylinder engine that produces 201 horsepower. It is available in both manual and automatic transmissions, and comes with a variety of features such as Apple CarPlay, Android Auto, and a rearview camera. The Kia Forte is a popular choice for those looking for an affordable car that offers a good balance of features, comfort, and driving dynamics." << endl;
        }
        else if (select == 5) {
            cout << "Hyundai Elantra" << endl;
            cout << "-------------------------" << endl;
            cout << "The Hyundai Elantra is a compact car that has been in production since 1990. The latest generation of the Elantra features a sleek and modern design with a number of impressive features. Under the hood, the Elantra is powered by a 2.0-liter four-cylinder engine that produces 147 horsepower and 132 lb-ft of torque, which is paired with a continuously variable transmission (CVT). This combination provides smooth acceleration and good fuel efficiency, with an EPA-estimated 33 mpg combined." << endl;
        }
        else if (select == 6) {
            cout << "Volkswagen Jetta" << endl;
            cout << "-------------------------" << endl;
            cout << "The Volkswagen Jetta is a compact sedan that features a sleek and modern design with a comfortable and spacious interior. Under the hood, the Jetta comes with a 1.4-liter turbocharged four-cylinder engine that produces 147 horsepower and 184 lb-ft of torque, paired with a standard six-speed manual or optional eight-speed automatic transmission. The Jetta also offers impressive fuel efficiency, with an EPA-estimated 34 mpg combined." << endl;
        }
        else if (select == 7) {
            cout << "Subaru Impreza" << endl;
            cout << "-------------------------" << endl;
            cout << "The Subaru Impreza is a compact car that comes in both sedan and hatchback body styles. The latest generation of the Impreza features a sporty design and impressive performance capabilities. Under the hood, the Impreza is powered by a 2.0-liter four-cylinder engine that produces 152 horsepower and 145 lb-ft of torque, paired with either a standard five-speed manual or an optional continuously variable transmission (CVT). The Impreza also boasts excellent handling and all-wheel-drive capability, making it a great choice for those who enjoy driving on both highways and backroads." << endl;
        }
        else if (select == 8) {
            cout << "Nissan Sentra" << endl;
            cout << "-------------------------" << endl;
            cout << "The Nissan Sentra is a compact sedan that has been in production since 1982. The latest generation of the Sentra features a refreshed and modern design with a number of impressive features. Under the hood, the Sentra is powered by a 2.0-liter four-cylinder engine that produces 149 horsepower and 146 lb-ft of torque, paired with a standard continuously variable transmission (CVT). This combination provides a smooth and comfortable ride with good fuel efficiency, achieving an EPA-estimated 33 mpg combined."<< endl;
        }
        else if (select == 9) {
            cout << "Chevrolet Cruze" << endl;
            cout << "-------------------------" << endl;
            cout << "The Chevrolet Cruze is a compact car that was in production from 2008 to 2019. The latest generation of the Cruze features a sleek and modern design with a number of impressive features. Under the hood, the Cruze is powered by a 1.4-liter turbocharged four-cylinder engine that produces 153 horsepower and 177 lb-ft of torque, paired with a six-speed manual or a six-speed automatic transmission. This combination provides a smooth and responsive ride with good fuel efficiency, achieving an EPA-estimated 32 mpg combined." << endl;
        }
        else if (select == 10) {
            cout << "Ford Focus" << endl;
            cout << "-------------------------" << endl;
            cout << "The Ford Focus is a compact car that has been in production since 1998. The latest generation of the Focus features a sporty and aerodynamic design with a number of impressive features. Under the hood, the Focus is powered by a 2.0-liter four-cylinder engine that produces 160 horsepower and 146 lb-ft of torque, paired with a standard five-speed manual or an optional six-speed automatic transmission. The Focus also offers good fuel efficiency, with an EPA-estimated 30 mpg combined." << endl;
        }
        else { cout << "Invalid Input Received" << endl;}
    }
    else if (Choice == "2") {
        mid_class_specs.get_mileage();
        mid_class_specs.get_torque();
        mid_class_specs.get_airbags();
        mid_class_specs.get_seater();
        mid_class_specs.get_safety_rating();
        mid_class_specs.get_sunroof();
        mid_class_specs.get_rent();
        mid_class_specs.get_fuel_type();
        cout << "-------------------------" << endl;
        cout << "Here are the top 10 mid-class cars\nbased on their overall value for\nmoney, features, performance, and reliability:\n1. Toyota Camry\n2. Honda Accord\n3. Mazda6\n4. Subaru Legacy\n5. Hyundai Sonata\n6. Kia Optima\n7. Volkswagen Passat\n8. Nissan Altima\n9. Chevrolet Malibu\n10. Ford Fusion\n" << endl;

        int select;
        cin >> select ;
        if (select == 1) {
            cout << "Toyota Camry" << endl;
            cout << "-------------------------" << endl;
            cout << "The Toyota Camry is a mid-size car manufactured by Toyota since 1982. It has been one of Toyota's most popular models and is known for its reliability, practicality, and comfort.The Camry has undergone several design changes over the years and is currently in its eighth generation. It is available in various trims, including the L, LE, SE, XLE, and XSE, and can be powered by either a 2.5-liter four-cylinder engine or a 3.5-liter V6 engine. The Camry also offers a hybrid option, which combines a 2.5-liter four-cylinder engine with an electric motor for improved fuel efficiency." << endl;
        }
        else if (select == 2) {
            cout << "Honda Accord" << endl;
            cout << "-------------------------" << endl;
            cout << "The Honda Accord is a mid-size car that has been in production since 1976. It is known for its reliability, comfort, and practicality, and is one of Honda's most popular models.The Accord has undergone several design changes over the years and is currently in its tenth generation. It is available in various trims, including the LX, Sport, EX, EX-L, and Touring, and can be powered by either a 1.5-liter turbocharged four-cylinder engine or a 2.0-liter turbocharged four-cylinder engine. The Accord also offers a hybrid option, which combines a 2.0-liter four-cylinder engine with an electric motor for improved fuel efficiency." << endl;
        }
        else if (select == 3) {
            cout << "Mazda6" << endl;
            cout << "-------------------------" << endl;
            cout << "The Mazda 6 is a mid-size car manufactured by Mazda since 2002. It is known for its stylish design, excellent handling, and high-quality interior.The Mazda 6 is currently in its third generation and is available in various trims, including the Sport, Touring, Grand Touring, Grand Touring Reserve, and Signature. It can be powered by either a 2.5-liter four-cylinder engine or a turbocharged 2.5-liter four-cylinder engine. The Mazda 6 also offers a hybrid option, which combines a 2.0-liter four-cylinder engine with an electric motor for improved fuel efficiency." << endl;
        }
        else if (select == 4) {
            cout << "Subaru Legacy" << endl;
            cout << "-------------------------" << endl;
            cout << "the Subaru Legacy is a mid-size car that has been in production since 1989. It is known for its standard all-wheel drive, reliability, and practicality.The Legacy is currently in its seventh generation and is available in various trims, including the Base, Premium, Sport, and Limited. It can be powered by either a 2.5-liter four-cylinder engine or a turbocharged 2.4-liter four-cylinder engine. The Legacy also offers a hybrid option, which combines a 2.0-liter four-cylinder engine with an electric motor for improved fuel efficiency." << endl;
        }
        else if (select == 5) {
            cout << "Hyundai Sonata" << endl;
            cout << "-------------------------" << endl;
            cout << "The Hyundai Sonata is a mid-size car that has been in production since 1985. It is known for its sleek design, spacious interior, and affordable pricing.The Sonata is currently in its eighth generation and is available in various trims, including the SE, SEL, N Line, and Limited. It can be powered by either a 2.5-liter four-cylinder engine or a turbocharged 1.6-liter four-cylinder engine. The Sonata also offers a hybrid option, which combines a 2.0-liter four-cylinder engine with an electric motor for improved fuel efficiency." << endl;
        }
        else if (select == 6) {
            cout << "Kia Optima" << endl;
            cout << "-------------------------" << endl;
            cout << "The Kia Optima is a mid-size car that has been in production since 2000. It is known for its modern styling, comfortable ride, and extensive features for its price.The Optima is currently in its fourth generation and is available in various trims, including the LX, S, EX, and SX. It can be powered by either a 2.5-liter four-cylinder engine or a turbocharged 1.6-liter four-cylinder engine. The Optima also offers a hybrid option, which combines a 2.0-liter four-cylinder engine with an electric motor for improved fuel efficiency." << endl;
        }
        else if (select == 7) {
            cout << "Volkswagen Passat" << endl;
            cout << "-------------------------" << endl;
            cout << "The Volkswagen Passat is a mid-size car that has been in production since 1973. It is known for its European design, comfortable ride, and refined interior.The Passat is currently in its eighth generation and is available in various trims, including the S, SE, R-Line, and SEL. It can be powered by either a 2.0-liter four-cylinder engine or a turbocharged 2.0-liter four-cylinder engine. The Passat also offers a plug-in hybrid option, which combines a 1.4-liter four-cylinder engine with an electric motor for improved fuel efficiency." << endl;
        }
        else if (select == 8) {
            cout << "Nissan Altima" << endl;
            cout << "-------------------------" << endl;
            cout << "The Nissan Altima is a mid-size car that has been in production since 1992. It is known for its spacious interior, comfortable ride, and fuel-efficient engines.The Altima is currently in its sixth generation and is available in various trims, including the S, SV, SR, and Platinum. It can be powered by either a 2.5-liter four-cylinder engine or a turbocharged 2.0-liter four-cylinder engine. The Altima also offers an all-wheel drive option, which provides better traction and stability in inclement weather conditions." << endl;
        }
        else if (select == 9) {
            cout << "Chevrolet Malibu" << endl;
            cout << "-------------------------" << endl;
            cout << "the Chevrolet Malibu is a mid-size car that has been in production since 1964. It is known for its fuel efficiency, comfortable ride, and spacious interior.The Malibu is currently in its ninth generation and is available in various trims, including the L, LS, RS, LT, and Premier. It can be powered by either a 1.5-liter or 2.0-liter four-cylinder engine, or a hybrid powertrain that combines a 1.8-liter four-cylinder engine with an electric motor." << endl;
        }
        else if (select == 10) {
            cout << "Ford Fusion" << endl;
            cout << "-------------------------" << endl;
            cout << "The Ford Fusion is a mid-size car that has been in production since 2005. It is known for its sporty styling, comfortable ride, and wide range of available features.The Fusion is currently in its second generation and is available in various trims, including the S, SE, SEL, Titanium, and Sport. It can be powered by either a 1.5-liter, 2.0-liter, or 2.7-liter turbocharged four-cylinder engine, or a hybrid or plug-in hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else { cout << "Invalid Input Received" << endl;}
    }
    else if (Choice == "3") {
        luxury_specs.get_mileage();
        luxury_specs.get_torque();
        luxury_specs.get_airbags();
        luxury_specs.get_seater();
        luxury_specs.get_safety_rating();
        luxury_specs.get_sunroof();
        luxury_specs.get_sound_system();
        luxury_specs.get_assisted_parking();
        luxury_specs.get_rent();
        luxury_specs.get_fuel_type();
        cout << "-------------------------" << endl;
        cout << "Here are the top 10 luxury class cars\nbased on their overall value for\nmoney, features, performance, and brand prestige:\n1. Mercedes-Benz S-Class\n2. BMW 7 Series\n3. Audi A8\n4. Lexus LS\n5. Porsche Panamera\n6. Jaguar XJ\n7. Cadillac CT6\n8. Volvo S90\n9. Genesis G90\n10. Maserati Quattroporte\n" << endl;

        int select;
        cin >> select ;
        if (select == 1) {
            cout << "Mercedes-Benz S-Class" << endl;
            cout << "-------------------------" << endl;
            cout << "The Mercedes-Benz S-Class is a full-size luxury car that has been in production since 1972. It is known for its sophisticated styling, cutting-edge technology, and unparalleled luxury.The S-Class is currently in its seventh generation and is available in various trims, including the S 450, S 560, AMG S 63, and AMG S 65. It can be powered by either a 3.0-liter or 4.0-liter turbocharged V6 or V8 engine, or a hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else if (select == 2) {
            cout << "BMW 7 Series" << endl;
            cout << "-------------------------" << endl;
            cout << "The BMW 7 Series is a full-size luxury car that has been in production since 1977. It is known for its sleek styling, powerful engines, and advanced technology features.The 7 Series is currently in its sixth generation and is available in various trims, including the 740i, 750i, 745e plug-in hybrid, and M760i. It can be powered by either a 3.0-liter or 4.4-liter turbocharged V6 or V8 engine, or a hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else if (select == 3) {
            cout << "Audi A8" << endl;
            cout << "-------------------------" << endl;
            cout << "The Audi A8 is a full-size luxury car that has been in production since 1994. It is known for its elegant styling, advanced technology features, and luxurious interior.The A8 is currently in its fourth generation and is available in various trims, including the A8 L, S8, and A8 L e-tron plug-in hybrid. It can be powered by either a 3.0-liter or 4.0-liter turbocharged V6 or V8 engine, or a hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else if (select == 4) {
            cout << "Lexus LS" << endl;
            cout << "-------------------------" << endl;
            cout << "The Lexus LS is a full-size luxury car that has been in production since 1989. It is known for its luxurious and spacious interior, smooth ride, and advanced technology features.The LS is currently in its fifth generation and is available in various trims, including the LS 500, LS 500h hybrid, and LS 500 F Sport. It can be powered by either a 3.5-liter twin-turbocharged V6 or a hybrid powertrain that combines an electric motor with a gasoline engine"<<endl;
        }
        else if (select == 5) {
            cout << "Porsche Panamera" << endl;
            cout << "-------------------------" << endl;
            cout << "The Porsche Panamera is a full-size luxury car that has been in production since 2009. It is known for its unique and sporty styling, powerful performance, and advanced technology features.The Panamera is currently in its second generation and is available in various trims, including the base Panamera, Panamera 4, Panamera 4S, Panamera GTS, Panamera Turbo, and Panamera Turbo S E-Hybrid. It can be powered by either a 2.9-liter or 4.0-liter twin-turbocharged V6 or V8 engine, or a plug-in hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else if (select == 6) {
            cout << "Jaguar XJ" << endl;
            cout << "-------------------------" << endl;
            cout << "The Jaguar XJ is a full-size luxury car that has been in production since 1968. It is known for its sleek and sporty styling, luxurious interior, and powerful performance.The XJ is currently in its fourth generation and is available in various trims, including the XJ R-Sport, XJ Supercharged, XJR575, and XJL Portfolio. It can be powered by either a 3.0-liter or 5.0-liter supercharged V6 or V8 engine." << endl;
        }
        else if (select == 7) {
            cout << "Cadillac CT6" << endl;
            cout << "-------------------------" << endl;
            cout << "The Cadillac CT6 is a full-size luxury car that was introduced in 2016. It is known for its modern styling, advanced technology features, and impressive performance.The CT6 is available in various trims, including the Luxury, Premium Luxury, Platinum, and V-Sport. It can be powered by either a 2.0-liter turbocharged four-cylinder, a 3.6-liter V6, a 4.2-liter twin-turbocharged V8, or a plug-in hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else if (select == 8) {
            cout << "Volvo S90" << endl;
            cout << "-------------------------" << endl;
            cout << "The Volvo S90 is a mid-size luxury car that has been in production since 2016. It is known for its elegant and understated styling, advanced safety features, and luxurious interior.The S90 is available in various trims, including the Momentum, Inscription, and R-Design. It can be powered by either a 2.0-liter turbocharged four-cylinder or a plug-in hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else if (select == 9) {
            cout << "Genesis G90" << endl;
            cout << "-------------------------" << endl;
            cout << "The Volvo S90 is a mid-size luxury car that has been in production since 2016. It is known for its elegant and understated styling, advanced safety features, and luxurious interior.The S90 is available in various trims, including the Momentum, Inscription, and R-Design. It can be powered by either a 2.0-liter turbocharged four-cylinder or a plug-in hybrid powertrain that combines an electric motor with a gasoline engine." << endl;
        }
        else if (select == 10) {
            cout << "Maserati Quattroporte" << endl;
            cout << "-------------------------" << endl;
            cout << "The Maserati Quattroporte is a full-size luxury sedan that has been in production since 1963. It is known for its sporty styling, luxurious interior, and powerful performance.The Quattroporte is available in various trims, including the S, S Q4, GranLusso, and GranSport. It can be powered by either a 3.0-liter twin-turbocharged V6 or a 3.8-liter twin-turbocharged V8 engine." << endl;
        }
        else { cout << "Invalid Input Received" << endl;}
    }
    else if (Choice == "4") {
        cout << endl;
        cout << "-------------------------" << endl;
        cout << "-------------------------" << endl;
        cout << "Economy Class" << endl;
        economy_specs.get_mileage();
        economy_specs.get_torque();
        economy_specs.get_airbags();
        economy_specs.get_seater();
        economy_specs.get_safety_rating();
        economy_specs.get_rent();
        economy_specs.get_fuel_type();
        cout << "-------------------------" << endl;
        cout << "Here are the top 10 economy class cars\nbased on their overall value for\nmoney, fuel efficiency, safety features, and performance:\n1. Honda Civic\n2. Toyota Corolla\n3. Mazda3\n4. Kia Forte\n5. Hyundai Elantra\n6. Volkswagen etta\n7. Subaru Impreza\n8. Nissan Sentra\n9. Chevrolet Cruze\n10. Ford Focus\n" << endl;
        cout << "-------------------------" << endl;
        cout << "-------------------------" << endl;
        cout << endl;

        cout << endl;
        cout << "-------------------------" << endl;
        cout << "-------------------------" << endl;
        cout << "Mid Class" << endl;
        mid_class_specs.get_mileage();
        mid_class_specs.get_torque();
        mid_class_specs.get_airbags();
        mid_class_specs.get_seater();
        mid_class_specs.get_safety_rating();
        mid_class_specs.get_sunroof();
        mid_class_specs.get_rent();
        mid_class_specs.get_fuel_type();
        cout << "-------------------------" << endl;
        cout << "Here are the top 10 mid-class cars\nbased on their overall value for\nmoney, features, performance, and reliability:\n1. Toyota Camry\n2. Honda Accord\n3. Mazda6\n4. Subaru Legacy\n5. Hyundai Sonata\n6. Kia Optima\n7. Volkswagen Passat\n8. Nissan Altima\n9. Chevrolet Malibu\n10. Ford Fusion\n" << endl;
        cout << "-------------------------" << endl;
        cout << "-------------------------" << endl;
        cout << endl;

        cout << endl;
        cout << "-------------------------" << endl;
        cout << "-------------------------" << endl;
        cout << "Luxury Class" << endl;
        luxury_specs.get_mileage();
        luxury_specs.get_torque();
        luxury_specs.get_airbags();
        luxury_specs.get_seater();
        luxury_specs.get_safety_rating();
        luxury_specs.get_sunroof();
        luxury_specs.get_sound_system();
        luxury_specs.get_assisted_parking();
        luxury_specs.get_rent();
        luxury_specs.get_fuel_type();
        cout << "-------------------------" << endl;
        cout << "Here are the top 10 luxury class cars\nbased on their overall value for\nmoney, features, performance, and brand prestige:\n1. Mercedes-Benz S-Class\n2. BMW 7 Series\n3. Audi A8\n4. Lexus LS\n5. Porsche Panamera\n6. Jaguar XJ\n7. Cadillac CT6\n8. Volvo S90\n9. Genesis G90\n10. Maserati Quattroporte\n" << endl;
        cout << "-------------------------" << endl;
        cout << "-------------------------" << endl;
        cout << endl;

    }
    else {
        cout << "Wrong Input" << endl;
        cout << "Try Again..." << endl;
    }

    return 0;
}