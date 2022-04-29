#ifndef OBSTACLE_MAP_H
#define OBSTACLE_MAP_H

#include <iostream>
#include <vector>
#include <opencv2/core/core.hpp>

class obstacle_map
{
  public:
    // Variables
    int x;
    int y;

    obstacle_map()
    {
      x = 20;
      y = 8;
      std::cout << x << ",\t" << y << "\n"; 
    }


  protected:
  
  private:

};



#endif
