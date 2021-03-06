/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMenuItemConfiguringModule.h>
#import <Facebook/FBURLSegueConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBJewelConfiguringModule.h>
#import <Facebook/FBURLSegueConfiguringModule.h>
#import <Facebook/FBAppServiceConfiguringModule.h>
#import <Facebook/FBPushNotificationsConfiguringModule.h>

@class NSString;

@interface FBFriendingModule : NSObject <FBMenuItemConfiguringModule, FBURLSegueConfiguringModule, FBIntentHandlerConfiguringModule, FBJewelConfiguringModule, FBURLSegueConfiguringModule, FBAppServiceConfiguringModule, FBPushNotificationsConfiguringModule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appServicesWithSession:(id)arg1 ;
+(id)jewelManager:(id)arg1 ;
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(NSDictionary*)menuItemHandlers:(id)arg1 ;
+(BOOL)_iPadGridProfileFriendListEnabledInSession:(id)arg1 ;
+(id)pushNotificationHandlersWithSession:(id)arg1 ;
+(id)viewControllerForRequestTabWithSession:(id)arg1 howfoundContext:(id)arg2 pymkLocation:(id)arg3 ;
+(id)viewControllerForRequestTabWithSession:(id)arg1 pymkLocation:(id)arg2 ;
+(id)viewControllerForRequestTabInJewelPopoverWithSession:(id)arg1 jewelController:(id)arg2 ;
@end

