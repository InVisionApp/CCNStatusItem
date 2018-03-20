//
//  CCNStatusItemVisibilityDelegate.h
//  Pods
//
//  Created by Joe Rhodes on 3/15/18.
//

#ifndef CCNStatusItemVisibilityDelegate_h
#define CCNStatusItemVisibilityDelegate_h


@protocol CCNStatusItemVisibilityDelegate

/**
 Boolean property that determines whether the status item is visible in the system's main menu.

 @value YES The item is visible.
 @value NO The item is not visible.
 */
@property(getter=isStatusItemVisible, readonly, assign, nonatomic) BOOL statusItemVisible;

@end


#endif /* CCNStatusItemVisibilityDelegate_h */
