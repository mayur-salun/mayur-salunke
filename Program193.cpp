#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
   UINT iMask = 0xf000000f;
   UINT iResult = 0;

     iResult = iNo ^ iMask;
     return iResult;   
}

int main()
{

  UINT iValue = 0, iRet = 0;

  cout<<"Enter number\n";
  cin>>iValue;

  iRet = ToggleNibble( iValue);

  cout<<"Updated number is :"<<iRet<<"\n";

  return 0;
}