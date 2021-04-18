#include <testngpp/internal/Error.h>
#include <testngpp/runner/loaders/ModuleLoader.h>
#include <testngpp/runner/loaders/ModuleLoaderFactory.h>


TESTNGPP_NS_START

#ifdef _WIN32

#include <windows.h>
void*
EmptyModuleLoader::findSymbol(const std::string& symbol)
{
    HMODULE handle = GetModuleHandle(NULL); //可执行文件的handle
    void* ptr = (void*) GetProcAddress(handle, symbol.c_str());
    if(ptr == 0)
    {
        throw Error("Can't find symbol " + symbol);
    }

    return ptr;
}

#else

// unix
#include <dlfcn.h>
static void*
EmptyModuleLoader::findSymbol(const std::string& symbol)
{
    void* ptr = (void*) ::dlsym(RTLD_DEFAULT, symbol.c_str());
    if(ptr == 0)
    {
        throw Error(::dlerror());
    }

    return ptr;
}

#endif

TESTNGPP_NS_END

