#ifndef __NOCOPY_H
#define __NOCOPY_H

class CNoCopyable
{
 public:
  CNoCopyable(const CNoCopyable&) = delete;
  void operator=(const CNoCopyable&) = delete;
 protected:
  CNoCopyable() = default;
  ~CNoCopyable() = default;
};



#endif