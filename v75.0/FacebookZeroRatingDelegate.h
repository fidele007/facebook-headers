/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ZRLoggedInUserId.h>
#import <Facebook/ZRProjectGatingDelegate.h>
#import <Facebook/ZRDataFetchErrorDelegate.h>
#import <Facebook/FBUserSessionClassProvidable.h>

@protocol FBProvider;
@class FBUserSession, NSString;

@interface FacebookZeroRatingDelegate : NSObject <ZRLoggedInUserId, ZRProjectGatingDelegate, ZRDataFetchErrorDelegate, FBUserSessionClassProvidable> {

	FBUserSession* _session;
	id<FBProvider> _appSessionControllerProvider;

}

@property (nonatomic,retain) FBUserSession * session;                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<FBProvider> appSessionControllerProvider;              //@synthesize appSessionControllerProvider=_appSessionControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)loggedInUserId;
-(BOOL)zeroRatingAllowed;
-(BOOL)badUrlsCompleteWithError;
-(BOOL)headerRequestAllowed;
-(BOOL)isUiFeatureAllowed:(id)arg1 ;
-(id)megaphoneCategory;
-(int)interstitialPrefKeyToFlow:(id)arg1 ;
-(void)handleDataFetchError:(id)arg1 ;
-(id)initWithSession:(id)arg1 appSessionControllerProvider:(id)arg2 ;
-(id<FBProvider>)appSessionControllerProvider;
-(void)setAppSessionControllerProvider:(id<FBProvider>)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

