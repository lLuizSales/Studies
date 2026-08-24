    #include <iostream>
    #include <cmath>
    #include <iomanip>

    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout << fixed << setprecision(5);

        string msg = "Impossivel calcular\n"; 

        double a = 0, b = 0, c = 0;
        cin >> a >> b >> c;

        if(a == 0){
            cout << msg;
            return 0;
        }

        double delta = b * b - 4 * a * c;

        if(delta < 0){
            cout << msg;
            return 0;
        }

        double x_1 = (-b + sqrt(delta)) / (2 * a);
        double x_2 = (-b - sqrt(delta)) / (2 * a);

        cout << "R1 = " << x_1 << "\n";
        cout << "R2 = " << x_2 << "\n";

        return 0;
    }