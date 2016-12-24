/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAppService.h>

@class FBUserSession, NSString, FBPageFeatureGatingNetworker, NSSet;

@interface FBPageFeatureGatingManager : NSObject <FBAppService> {

	FBUserSession* _session;
	NSString* _pageID;
	FBPageFeatureGatingNetworker* _networker;
	NSSet* _enabledFeaturesSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)_cleanCache;
-(void)_featuresListDownloaded:(id)arg1 ;
-(void)_didDownloadListBlock:(id)arg1 ;
-(void)updateEnabledFeaturesListForPageID:(id)arg1 ;
-(BOOL)isPageFeatureEnabled:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
