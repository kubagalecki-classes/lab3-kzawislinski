#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  if (towar > 0)
  {
    int sum =0;
    
    int i =0;
    
    int zagl =0;
    
    int temp;

    Stocznia stocznia{};
    
    Statek* s1;
   
    while ( sum < towar && i <100000)
    {
      s1 = stocznia();
      temp = s1->transportuj(); 
      sum = sum + temp;
      i = i +1;
      s1=dynamic_cast<Zaglowiec*>(s1);
      if(s1)
    {
      zagl = zagl +1;
    }
    delete s1;
    }

   return zagl;
  }

  else
  {
    return 0;
  }

}