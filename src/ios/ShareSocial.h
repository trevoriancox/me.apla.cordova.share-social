//
//  Social.h
//
//  Cameron Lerch
//  Sponsored by Brightflock: http://brightflock.com
//

#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVPluginResult.h>

@interface ShareSocial : CDVPlugin {
}

- (void)available:(CDVInvokedUrlCommand*)command;

- (void)share:(CDVInvokedUrlCommand*)command;

@end
