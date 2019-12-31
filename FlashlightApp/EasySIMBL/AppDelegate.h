/**
 * Copyright 2012, Norio Nomura
 * EasySIMBL is released under the GNU General Public License v2.
 * http://www.opensource.org/licenses/gpl-2.0.php
 */

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class PluginListController;

@interface AppDelegate : NSObject <NSApplicationDelegate>

// ADS
@property (readwrite, nonatomic) NSString* adURL;
@property (readwrite, nonatomic) NSArray* adArray;
@property (readwrite, nonatomic) NSInteger lastAD;
@property IBOutlet NSButton *buttonAdvert;

@property IBOutlet NSButton *buttonDiscord;
@property IBOutlet NSButton *buttonFeedback;
@property IBOutlet NSTextView       *changeLog;

@property (nonatomic) NSString *loginItemBundleIdentifier;
@property (nonatomic) NSString *loginItemPath;

@property (assign) IBOutlet NSWindow *window;

- (IBAction)toggleFlashlightEnabled:(id)sender;

@property (nonatomic) BOOL SIMBLOn;

@property (nonatomic,weak) IBOutlet PluginListController *pluginListController;

- (IBAction)openURLFromButton:(NSButton *)sender;

- (IBAction)openGithub:(id)sender;
- (IBAction)leaveFeedback:(id)sender;

@end
