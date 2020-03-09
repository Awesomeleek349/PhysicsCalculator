#include <iostream>
using namespace std;

void wavesFrequency();
void thermoDynamics();
void convertUnits();
double idealGasLaw(double pressure, double volume, double moles, double temperature);

int main() {
 
    int choice = 0;

    
    while(choice != 4){
        
        cout << "Welcome to the Physics Calculator" << endl;
        cout << "What calculation will you be making today? Enter an integer 1-4." << endl;
        cout << "1. Waves/Frequency" << endl;
        cout << "2. Thermodynamics" << endl;
        cout << "3. Unit Conversions" << endl;
        cout << "4. Quit" << endl;
       
        
        cin >> choice;
        
        cout << endl;

        if(choice < 1 || choice > 4){
            cout << "Invalid Selection. Try Again." << endl;
        }
        else if(choice == 1){
            
            wavesFrequency();
            
        }
        else if(choice == 2){
            
            thermoDynamics();
            
        }
        else if(choice == 3){
            convertUnits();
        }
        
        
        cout << endl;
    }
    
 
    return 0;
}

void wavesFrequency(){
    
    int secondChoice = 0;
    
    while(secondChoice != 12){
        cout << "What about Waves/Frequency would you like to calculate? Enter an integer 1-12." << endl;
        
        cout << "1. Position of Wave" << endl;
        cout << "2. Speed of Wave" << endl;
        cout << "3. Acceleration of Wave" << endl;
        cout << "4. Oscillation Related Small Calculations (angular frequency, frequency, period, max velocity)" << endl;
        cout << "5. Light Waves" << endl;
        cout << "6. Power, Intensity, and Sound Intensity" << endl;
        cout << "7. Doppler Effect" << endl;
        cout << "8. Standing Waves, Nodes/Antinodes, Wavelength" << endl;
        cout << "9. Mode Numbers" << endl;
        cout << "10. Open/Closed Reflection Boundaries" << endl;
        cout << "11. Beats" << endl;
        cout << "12. Return to Main Menu" << endl;
        
        cin >> secondChoice;
        
        if(secondChoice < 1 || secondChoice > 12){
            cout << "Invalid Selection. Try Again." << endl;
        }
        
        cout << endl;
    }

}

void thermoDynamics(){
   
    int secondChoice = 0;
    
    while(secondChoice != 6){
        cout << "What about Thermodynamics would you like to calculate? Enter an integer 1-6." << endl;
        
        cout << "1. Ideal Gas Law" << endl;
        cout << "2. Thermal Expansion" << endl;
        cout << "3. Work and Heat" << endl;
        cout << "4. Latent Heat" << endl;
        cout << "5. Kinetic Energy of Molecules" << endl;
        cout << "6. Return to Main Menu" << endl;
        
        cin >> secondChoice;
        
        if(secondChoice < 1 || secondChoice > 6){
            cout << "Invalid Selection. Try Again." << endl;
        }
        else if(secondChoice == 1){
            int truthvalue = 0;
            bool pressure = false;
            bool volume = false;
            bool moles = false;
            bool temperature = false;
            
            
            cout << "What Parameters are you given? Type 0 for a paremeter not given, and 1 for a parameter that is given." << endl;
            cout << "Is the Pressure Given?" << endl;
            cin >> truthvalue;
            
            if(truthvalue == 1){
                pressure = true;
            }
            else if(truthvalue == 0){
                pressure = false;
            }
            else{
                cout << "Invalid Response. Type only 1 or 0 for yes or no respectively." << endl;
            }
            
        }
        
        cout << endl;
        
        
        
    }
  
}

void convertUnits(){
    
    cout << "Now you can convert Units" << endl;
}





//Thermodynamics

double idealGasLaw(int pressure, int volume, int moles, int temperature){
    return 0.0;
}
