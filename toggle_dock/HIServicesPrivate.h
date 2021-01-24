// HIServicesPrivate.h v1
// By ThatsJustCheesy

// TO USE THESE INTERFACES, you MUST link against ApplicationServices.framework.

#pragma once

#ifdef __cplusplus
extern "C" {
#endif
    
    // Boolean preferences
    extern void CoreDockSetLaunchAnimationsEnabled(bool enable);
    extern void CoreDockSetMagnificationEnabled(bool enable);
    extern void CoreDockSetAutoHideEnabled(bool enable);
    extern void CoreDockSetMinimizeInPlace(bool enable);
    
    // Sets other preferences such as whether the indicators below the app icons are shown
    // 'preferenceDict' is a CFDictionary containing a magic key value
    // Will require further inspection of Dock.prefpane to find all the keys
    // (I haven't noted them down)
    extern void CoreDockSetPreferences(CFDictionaryRef preferenceDict);
    
#ifdef __cplusplus
} // extern "C"
#endif
