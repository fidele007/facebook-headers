/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, FBScenePath, UIView, NSString;

@interface FBPrivacyReviewCoreToolbox : NSObject {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBScenePath* _scenePath;
	UIView* _checkupView;
	unsigned long long _picker;
	id<FBIntentHandler> _intentHandler;
	NSString* _reviewType;

}

@property (nonatomic,readonly) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,copy,readonly) FBScenePath * scenePath;                                   //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) UIView * checkupView;                                           //@synthesize checkupView=_checkupView - In the implementation block
@property (nonatomic,readonly) unsigned long long picker;                                      //@synthesize picker=_picker - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * reviewType;                                     //@synthesize reviewType=_reviewType - In the implementation block
+(id)toolboxWithSession:(id)arg1 navigationCoordinator:(id)arg2 scenePath:(id)arg3 checkupView:(id)arg4 picker:(unsigned long long)arg5 intentHandler:(id)arg6 reviewType:(id)arg7 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(FBScenePath *)scenePath;
-(UIView *)checkupView;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 scenePath:(id)arg3 checkupView:(id)arg4 picker:(unsigned long long)arg5 intentHandler:(id)arg6 reviewType:(id)arg7 ;
-(NSString *)reviewType;
-(unsigned long long)picker;
-(FBUserSession *)session;
@end
