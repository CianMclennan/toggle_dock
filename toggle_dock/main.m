//
//  main.m
//  toggle_dock
//
//  Created by Cian McLennan on 24/08/2020.
//  Copyright © 2020 Cian McLennan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HIServicesPrivate.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {        
        NSDictionary* dockSettings = [[ NSUserDefaults standardUserDefaults ] persistentDomainForName:@"com.apple.dock"];
        BOOL dockIsAutohiding = [dockSettings[@"autohide"] isEqual:@YES];
        CoreDockSetAutoHideEnabled(!dockIsAutohiding);
    }
    return 0;
}
