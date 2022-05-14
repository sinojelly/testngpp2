
#ifndef __TESTNGPP_STRING_LIST_H
#define __TESTNGPP_STRING_LIST_H

#include <list>
#include <string>

#include <testngpp/testngpp.h>

TESTNGPP_NS_START

struct StringList
{
   typedef std::list<std::string> Type;

   Type& get() const
   { return const_cast<Type&>(elems); }

   void add(const std::string& elem)
   { elems.push_back(elem); }

   void clear()
   { elems.clear(); }

   size_t size() const
   { return elems.size(); }

   bool contains(const std::string& elem) const
   {
       for (const auto& item : elems) {
           if (item == elem) {
               return true;
           }
       }
       return false;
   }

private:
   Type elems;
};

TESTNGPP_NS_END

#endif

