#include <iostream>
#include <random>
#include <cmath>

using namespace std;

double function(double x){
    
    return exp(-x*x);
}

double area(double x_min,double x_max,double y_min,double y_max){

    double result=abs(x_max-x_min)*abs(y_max-y_min);

    return result;
}

int random_points(int n,double x_min,double x_max,double y_min,double y_max,int points_inside){

    random_device rd;
    uniform_real_distribution<double> dist_x(x_min,x_max);
    uniform_real_distribution<double> dist_y(y_min,y_max);


    for(int i=0;i<n;i++){

        double x_i=dist_x(rd);
        double y=dist_y(rd);
        double f_xi=function(x_i);

        if(f_xi>0 and f_xi>y){

            points_inside++;

        }

        else if (f_xi<0 and f_xi<y){
            
            points_inside++;

        }   

    }

    return points_inside;

}

int main() {

    double x_min=-100;
    double x_max=100;
    double y_min=0;
    double y_max=1;
    int n=10000;
    int points_inside=0;

    double A=area(x_min,x_max,y_min,y_max);
    int total_points_inside=random_points(n,x_min,x_max,y_min,y_max,points_inside);

    double integral=A*total_points_inside/n;

    cout << integral << endl;

    cin.get();
    return 0;
}