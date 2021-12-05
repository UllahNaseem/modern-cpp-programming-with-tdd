#ifndef CHAPTER_03_RETWEETCOLLECTION_H_
#define CHAPTER_03_RETWEETCOLLECTION_H_

#include "tweet.h"

class RetweetCollection {
public:
   RetweetCollection() 
      : empty_(true) {
   }

   bool isEmpty() const {
      return empty_;
   }

 void add(const Tweet& tweet) {
      empty_ = false;
   }

   unsigned int size() const {
      return isEmpty() ? 0 : 1;
   }

private:
   bool empty_;
};

#endif  // CHAPTER_03_RETWEETCOLLECTION_H_
