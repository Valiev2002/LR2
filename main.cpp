#include <iostream>
#include <cmath>
int fact(int v)
{
    if(v<0) return 0;
    if(v==0) return 1;
    else return v*fact(v-1);
}




int main()
{
char q=0;
for(int i=0; i<=255;++i)
{std::cout << q << std::endl;
q++;}
    std::cout <<"Vedite symbol" <<std::endl;
    char w=0;
    std::cin>>w;
    if((w<=57)&&(w>=48))
        std::cout <<"digit"<< std::endl;
    else if(((w>=65)&&(w<=90))||(w>=97)&&(w>=122))
    std::cout<<"bukva"<<std::endl;
    else std::cout<<"symbol neizvesten"<<std::endl;
}


    unsigned int x;
std::cout <<"vvedi x" <<endl;
std::cin >>x;
double y =0;
int z =x%4;
// cout<<z<<endl;
switch (z){
case 0:y = 0;break;
case 1:y=1;break;
case 2:y=1;break;
case 3:y=0.1*x;break;
}
cout<<y<<endl;


cout<<"vvedi x"<<endl;
double x1;
cin>>x1
int n;
y=sin(x1)
long double h;
double u =1.0;
for(int i=-2;i>=-6;--i){
n=0;
h=1.0*x1;
while (abs(h-y)>=0.001*u){
n++;
h+=ppow(-1,n)*pow(x1,2*n+1)/ fact(2*n+1);
cout<<y<<" "<<endl;
}
u=*1.0
cout::<<"dlya 10^"<<i<<"nado iteraciy"<<n<<endl;
cout::<<"dlya 10^ nado iteraciy"<<n<<endl;
}
return 0;
}


