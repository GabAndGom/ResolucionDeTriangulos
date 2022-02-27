//ResolucionDeTriangulos
//Calculadora lados, angulos , areas y superficies de triangulos
#include<iostream>
#include<cmath>
#include<cstdlib>
#define PI 3.1415926536
using namespace std;
int main()
{
    int REP=0,opc,opc1;
    float a,b,c,h,area,rad;
    double ang1,ang2,ang3;

    while(REP==0)
    {
        cout<<"\tELIJA UNA DE LAS OPCIONES:"<<endl;
        cout<<"1. Se tienen 3 lados."<<endl;
        cout<<"2. Se tienen 3 ángulos."<<endl;
        cout<<"3. Se tienen 2 lados y 1 ángulo."<<endl;
        cout<<"4. Se tienen 2 ángulos y 1 lado."<<endl;
        cout<<"5. Salir."<<endl;
        cin>>opc;
        REP=1;
        switch(opc)
        {
            case 1:
            cout<<"\tDigite el valor de cada uno de los lados: "<<endl;
            cout<<"Digite lado a: ";
            cin>>a;
            cout<<"Digite lado b: ";
            cin>>b;
            cout<<"Digite lado c: ";
            cin>>c;
            ang3= acos(((c*c)-(a*a)-(b*b))/(-2*a*b));
            ang3=ang3*(180/PI);
            cout<<"angulo C= "<<ang3<<"grados"<<endl;
            ang2= acos(((b*b)-(a*a)-(c*c))/(-2*a*c));
            ang2=ang2*(180/PI);
            cout<<"angulo B= "<<ang2<<"grados"<<endl;
            ang1= acos(((a*a)-(b*b)-(c*c))/(-2*c*b));
            ang1=ang1*(180/PI);
            cout<<"angulo A= "<<ang1<<"grados"<<endl;
            rad=ang1*(PI/180);
            h=c*sin(rad);
            area=(b*h)/2;
            cout<<"el area del triangulo es: "<<area<<endl;
            
            cout<<"Desea hacer otra operacion?"<<endl;
            cout<<"1. si, volver al inicio."<<endl;
            cout<<"2. No, salir. "<<endl;
            cin>>opc1;
            switch (opc1)
            {
                case 1:
                REP=0;break;
                case 2: break;
                default: break;

            }
            break;
            case 2:
             cout<<"\tDigite el valor de cada uno de los angulos : "<<endl;
            cout<<"Digite angulo A: ";
            cin>>ang1;
            cout<<"Digite angulo B: ";
            cin>>ang2;
            cout<<"Digite angulo C: ";
            cin>>ang3;

            b=sin(ang1*(PI/180))/sin(ang3*(PI/180));
            c=sin(ang1*(PI/180))/sin(ang2*(PI/180));
            a=b*(sin(ang1*(PI/180))/sin(ang2*(PI/180)));
            cout<<" lado a: "<<a<<" x k, k es una constante."<<endl;
            cout<<" lado b: "<<b<<" x k, k es una constante."<<endl;
            cout<<" lado c: "<<c<<" x k, k es una constante."<<endl;
            cout<<"En este caso no podemos determinar la longitud de los lados solo una proporcion."<<endl;

            cout<<"Desea hacer otra operacion?"<<endl;
            cout<<"1. si, volver al inicio."<<endl;
            cout<<"2. No, salir. "<<endl;
            cin>>opc1;
            switch (opc1)
            {
                case 1:
                REP=0;break;
                case 2: break;
                default: break;

            }
            break;
            case 3: cout<<"\tDigite el valor de los lados y el angulo: "<<endl;
            cout<<"Digite lado a: ";
            cin>>a;
            cout<<"Digite lado b: ";
            cin>>b;
            cout<<"Digite angulo A: ";
            cin>>ang1;
            cout<<"Desea hacer otra operacion?"<<endl;
            cout<<"1. si, volver al inicio."<<endl;
            cout<<"2. No, salir. "<<endl;
            cin>>opc1;
            switch (opc1)
            {
                case 1:
                REP=0;break;
                case 2: break;
                default: break;

            }
            break;
            case 4:
             cout<<"\tDigite el valor de los angulos y el lado: "<<endl;
            cout<<"Digite angulo 1: ";
            cin>>ang1;
            cout<<"Digite angulo 2: ";
            cin>>ang2;
            cout<<"Digite lado a: ";
            cin>>a;
            cout<<"Desea hacer otra operacion?"<<endl;
            cout<<"1. si, volver al inicio."<<endl;
            cout<<"2. No, salir. "<<endl;
            cin>>opc1;
            switch (opc1)
            {
                case 1:
                REP=0;break;
                case 2: break;
                default: break;

            }
            break;
            case 5: break;
            default:
            cout<<"Esa no es una opcion."<<endl;
            cout<<"Desea hacer otra operacion?"<<endl;
            cout<<"1. si, volver al inicio."<<endl;
            cout<<"2. No, salir. "<<endl;
            cin>>opc1;
            switch (opc1)
            {
                case 1:
                REP=0;break;
                case 2: break;
                default: break;

            }
            break;
        }

    }

}
