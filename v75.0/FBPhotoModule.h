/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBDeferredJobsConfiguringModule.h>
#import <Facebook/FBIntentHandlerConfiguringModule.h>
#import <Facebook/FBURLSegueConfiguringModule.h>
#import <Facebook/FBWWWSegueConfiguringModule.h>
#import <Facebook/FBMenuItemConfiguringModule.h>
#import <Facebook/FBPluginProvider.h>

@class NSString;

@interface FBPhotoModule : NSObject <FBDeferredJobsConfiguringModule, FBIntentHandlerConfiguringModule, FBURLSegueConfiguringModule, FBWWWSegueConfiguringModule, FBMenuItemConfiguringModule, FBPluginProvider> {

	BOOL _shouldUseMemModelsForPhotoVCNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentHandlers:(id)arg1 providerMap:(id)arg2 ;
+(id)URLSegues:(id)arg1 ;
+(NSDictionary*)menuItemHandlers:(id)arg1 ;
+(id)deferredJobs;
+(id)WWWSegues:(id)arg1 ;
+(id)pluginConfigurationsWithSession:(id)arg1 ;
+(id)photosTabViewControllerForPerson:(id)arg1 session:(id)arg2 ;
+(id)photosTabViewControllerForPerson:(id)arg1 tabIndex:(int)arg2 session:(id)arg3 ;
+(BOOL)_isFamilyMemberMediaSetToken:(id)arg1 ;
+(id)_familyMemberIDFromMediaSetToken:(id)arg1 ;
+(id)_mediaSetStoreForRequestProvider:(id)arg1 session:(id)arg2 ;
+(id)_photoTargetFromPhotoID:(id)arg1 mediaSetKey:(id)arg2 session:(id)arg3 ;
@end

