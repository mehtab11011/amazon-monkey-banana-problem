// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

// * Monkey ki position
// * Box ki position
// * Kya monkey box par hai
// * Kya monkey ne banana le liya hai

class Monkey_Problem {
private:
    string monkey_position;
    string box_position;
    bool monkey_is_on_box;
    bool monkey_has_banana;

public:
    Monkey_Problem() {
        monkey_position = "door";     // Monkey start mein door par hai
        box_position = "window";      // Box start mein window par hai
        monkey_is_on_box = false;
        monkey_has_banana = false;
    }

    void Movemonkey(string position) {
        if (monkey_position == "door") {
            cout << "Monkey move from " << monkey_position << " to " << position << "." << endl;
            monkey_position = position;
        }
    }

    void Pushbox(string position) {
        if (monkey_position == "window") {
            cout << "Monkey pushes box from " << monkey_position << " to " << position << "." << endl;
            monkey_position = position;
            box_position = position;
        } else {
            cout << "Monkey is not on box position." << endl; // Monkey box par nahi hai
        }
    }

    void Climbox() {
        if (monkey_position == box_position) {
            cout << "Monkey climbs on the box." << endl; // Monkey box par chadh gaya
            monkey_is_on_box = true;
        } else {
            cout << "Monkey is not near the box position." << endl; // Monkey box ke paas nahi hai
        }
    }

    void Takebanana() {
        if (monkey_is_on_box == true) {
            cout << "Monkey takes the banana!" << endl; // Monkey ne banana le liya
            monkey_has_banana = true;
        } else {
            cout << "Monkey can't reach the banana." << endl; // Monkey banana nahi le sakta
        }
    }

    void solve() {
        Movemonkey("window");
        Pushbox("Center");
        Climbox();
        Takebanana();

        if (monkey_has_banana) {
            cout << "Monkey got the banana!" << endl; // Monkey ne banana le liya
        } else {
            cout << "Monkey failed to get the banana." << endl; // Monkey banana nahi le paya
        }

        cout << "Monkey enjoys the banana." << endl; // Monkey banana ka lutf uthata hai
    }
};

int main() {
    Monkey_Problem Monkey;
    Monkey.solve();
    return 0;
}
