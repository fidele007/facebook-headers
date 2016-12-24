/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAppModule.h>
#import <Facebook/FBDeferredJobsConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBJewelConfiguringModule.h>
#import <Facebook/FBMenuItemConfiguringModule.h>
#import <Facebook/FBPushNotificationHandler.h>
#import <Facebook/FBURLSegueConfiguringModule.h>
#import <Facebook/FBVideoHomeTabBarNuxEligibility.h>

@class FBExceptionHandler, FBUserSession, NSString;

@interface FBVideoHomeModule : NSObject <FBAppModule, FBDeferredJobsConfiguringModule, FBIntentHandlerConfiguringModule, FBJewelConfiguringModule, FBMenuItemConfiguringModule, FBPushNotificationHandler, FBURLSegueConfiguringModule, FBVideoHomeTabBarNuxEligibility> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBExceptionHandler * exceptionHandler; 
+(id)instanceForSession:(id)arg1 providerMap:(id)arg2 ;
+(id)jewelManager:(id)arg1 ;
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(NSDictionary*)menuItemHandlers:(id)arg1 ;
+(id)deferredJobs;
-(id)URLSegues;
-(id)supportedURLSchemes;
-(id)viewControllerForMenuItem:(id)arg1 ;
-(BOOL)eligibleForTabNux;
-(void)handleAPNSWithPayLoad:(id)arg1 launchedByUser:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
-(id)ID;
@end
