#include "CGame.h"

#include <iostream>
#include <cstring>
#include <conio.h>
const char *recordFormatStr = "%-25s %10f $4u %7.2f %s";
SRecord::SRecord(){
  name[0] = '\0';
  rating = 0.0;
}
