#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
void bubbleSort(auto & data);//prototype


int main()
{
  vector<string> inputs;
  string input;
  //int result;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
for (unsigned int x = 0 ;x < inputs.size(); x++){
	cout << inputs[x];
}
   //cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  //cout<<"Enter a value: ";


   /*cin>>search_key;
 
    while(search_key != "#")//perform searches until sentinel entered
    {
       

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }*/

   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;
   bubbleSort(inputs);
    return 0;
}

void bubbleSort(auto & data){//implementation

for(unsigned int i = 0; i < data.size();i++){
	for(unsigned int j = 0; j < data.size();j++){ 
	if(data[j] == data[j+1]){
	swap(data[j],data[j+1]);
}
}
}
}


