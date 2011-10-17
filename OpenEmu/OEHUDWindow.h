//
//  OEGameWindow.h
//  popoutwindow
//
//  Created by Christoph Leimbrock on 07.06.11.
//  Copyright 2011 none. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OEHUDWindowThemeView;
@class OEImageButton;
@interface OEHUDWindow : NSWindow <NSWindowDelegate>
{
@private
	NSWindow				* _borderWindow;
}
- (id)initWithContentRect:(NSRect)frame;
- (id)initAlertWindowWithContentRect:(NSRect)contentRect
                           styleMask:(NSUInteger)windowStyle
                             backing:(NSBackingStoreType)bufferingType
                               defer:(BOOL)deferCreation;
@end
@interface OEHUDWindowThemeView : NSView 
{
}

@end
