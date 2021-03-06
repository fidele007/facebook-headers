/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStarRatingsServiceDelegate.h>

@class FBUserSession, FBKVOController, FBStarRatingsService, NSString;

@interface FBWildeStarRatingsDelegate : NSObject <FBStarRatingsServiceDelegate> {

	FBUserSession* _session;
	FBKVOController* _KVOController;
	FBStarRatingsService* _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appSectionManagerDidChangeSelectedAppSection:(id)arg1 ;
-(BOOL)starRatingsServiceCanDisplay:(id)arg1 ;
-(id)starRatingsServiceCurrentWindow:(id)arg1 ;
-(id)starRatingsServiceAppDisplayName:(id)arg1 ;
-(id)starRatingsServiceAppID:(id)arg1 ;
-(void)observeForService:(id)arg1 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end

