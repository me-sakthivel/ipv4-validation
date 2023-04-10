#include<iostream>
#include<vector>
#include<string>

class A{
   public:
   int dot=0;std::string name; bool b = true;
   
   bool operator()(std::vector<std::string> &obj) { 
        int var = obj.size();

      for(int i=0; i<var; i++) {
        
        if( stoi(obj[i])> 255)
        {
            std::cout << "\nINvalid IP \n System TERMINATE"; std::terminate();
        }

      }
      return  true;
   }
 
   A(std::string &str): name(str){
    std::cout<<name;
    //DOTS CHECK
    for(int i=0; i<name.length();i++)
    {
      if(name[i] =='.' )
      {
        dot++;
      }
    }
    std::cout<<dot;
   }

   bool dotCheck(){ 
    if(dot==3)
    {std::cout<<"VALID DOTS"; return true;}
   
   else
   { std::cout<<"INVALID DOTS"; return false;}
   }
};

int main()
{
  std::string str;
  std::cin>>str;
  A a(str);
  bool b = a.dotCheck();
  str += '.'; 
  std::vector<std::string> obj;
  std::string str2;
  for(int i = 0; i <str.size(); i++)
  {
    if(str[i] == '.')
    {
        obj.push_back(str2);
        str2 = "";
        continue;
    }
         
    else
    {
       str2 += str[i];
    }

  }

 bool b1 = a(obj);

 if( b == true && b1 == true)
    std::cout<<"\nValid  ip";


  
}