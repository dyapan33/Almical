// [WARNING]: ! IMPORTANT FILES ONLY ! (INSIDE ALMOND REPOSITORY)

#pragma once

#ifdef USE_DEFINES_H
    #include "../Core/Defines.h"
#endif

#ifdef USE_DEFINES_H_CORE
    #include "Defines.h"
#endif

#ifdef USE_PRECOMIPLED_HEADERS
    #include "../Core/Almpch.h"
#endif

#ifdef USE_PRECOMIPLED_HEADERS_CORE
    #include "Almpch.h"
#endif

#ifdef USE_PRECOMIPLED_HEADERS_CORE_EXTRA
    #include "Almpch.h"
    #include "Almpch.cpp"
#endif

#ifdef USE_PRECOMPILED_HEADERES_EXTRA
    #include "../Core/Almpch.h"
    #include "../Core/Almpch.cpp"
#endif

#ifdef USE_NAMESPACE_H
    #include "../Core/Namespace.h" // Platform-Specific code only!
#endif

#ifdef USE_NAMESPACE_H_CORE
    #include "Namespace.h" // Platform-Specific code only!
#endif

// For Almond.h

#ifdef USE_DEFINES_H_CLIENT_FILE
    #include "Modules/Core/Defines.h"
#endif

#ifdef USE_PRECOMIPLED_HEADERS_CLIENT_FILE
    #include "Modules/Core/Almpch.h"
#endif

#ifdef USE_PRECOMIPLED_HEADERS_CLIENT_FILE_EXTRA
    #include "Almpch.h"
    #include "Almpch.cpp"
#endif

#ifdef USE_NAMESPACE_H_CLIENT_FILE
    #include "Modules/Core/Namespace.h" // Platform-Specific code only!
#endif


