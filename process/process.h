#ifndef __PROCESS_H
#define __PROCESS_H
#include "nocopyable.h"


 //业务类，表示具体业务
 class CProcess : public CNoCopyable{
public:
   //  typedef void (fun*)()
  //   bool setProcess();
     virtual void runProcess() = 0;
 };


#endif
