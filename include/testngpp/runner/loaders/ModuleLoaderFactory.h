
#ifndef __TESTNGPP_MODULE_LOADER_FACTORY_H
#define __TESTNGPP_MODULE_LOADER_FACTORY_H

#include <testngpp/testngpp.h>
#include <testngpp/runner/loaders/ModuleLoader.h>

TESTNGPP_NS_START

struct EmptyModuleLoader : public ModuleLoader
{
	void load( const StringList& searchingPaths
            , const std::string& modulePath){}

   void unload(){}

   void* findSymbol(const std::string& symbol){ return nullptr; }
};

struct ModuleLoaderFactory
{
    static ModuleLoader* create() { return new EmptyModuleLoader(); }
};

TESTNGPP_NS_END

#endif

