#include <iostream>
using namespace std;
/**** var ****/
double a;
double b;
int c;
string op;
/**** var ****/
/**** func ****/
double hesab(double,string,double);
double Perimeter_calculation(double,double);
double Area_calculation(double,double);
/**** func ****/
int main(){
    cout<<"\n"
        <<"\n"
        <<"\n"
        <<"\n"
        <<"\n"
        <<"\t \t \t \t \t /---------------------------------\\  \n"
        <<"\t \t \t \t \t |                                 | \n"
        <<"\t \t \t \t \t | 1 to calculator                 | \n"
        <<"\t \t \t \t \t | 2 to Perimeter calculation      | \n"
        <<"\t \t \t \t \t | 3 to Area calculation           | \n"
        <<"\t \t \t \t \t |                                 | \n"
        <<"\t \t \t \t \t \\---------------------------------/ \n"
        <<"\n"
        <<"\n"
        <<"\n"
        <<"\n"
        <<"\n"
        <<"\n"
        <<">> ";
  while(true){
  cin>>c;
  if(c==1)
  {
  cin>>a>>op>>b;
  hesab(a,op,b);
  }
  else if(c==2)
  {
   //Perimeter_calculation(double,double);
  }
  else if(c==3){
   //Area_calculation(double,double);
  }else{
   system("clr");
  }

  getchar();
}

double hesab(double a ,string op ,double b){
  if (op=="+"){
    cout<<"= "<<a+b<<endl;
  }else if(op=="-"){
    cout<<"= "<<a-b<<endl;
  }else if(op=="*"){
    cout<<"= "<<a*b<<endl;
  }else if(op=="/"){
    if (b!=0){
        cout<<a/b<<endl;
    }else{
     cout<<"erorr"<<endl;
    }
  }else{
   cout<<"error"<<endl;
  }
}

/*double Perimeter_calculation(double a,double b){

}*/
//double Area_calculation(double a,double b);
