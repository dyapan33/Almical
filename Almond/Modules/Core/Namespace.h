

// Only for platform specific code



#ifdef ALM_BEGIN_NAMESPACE
namespace Almond {
#endif

#ifdef ALM_END_NAMESPACE
}
#endif

// * For all CLIENT FILES *

#define ALM_BEGIN_NAMESPACE
    int Windows;
    int PlatformSpecific;
    int Yes = 1;
    int No  = 2;

    void PLTSpecific_Win() {
        PlatformSpecific = Yes;
        Windows = Yes;
    }
#define ALM_END_NAMESPACE


