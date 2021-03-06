/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPageCustomPostsConfig, FBNavigationCoordinator, FBPageCustomPostsComponentControllerDelegate;
@class FBUserSession, NSString, NSNotificationCenter, FBImageDownloader, FBFontFoundry;

@interface FBPageCustomPostsContext : NSObject {

	FBUserSession* _session;
	NSString* _pageFBID;
	id<FBPageCustomPostsConfig> _customPostsConfig;
	NSNotificationCenter* _notificationCenter;
	FBImageDownloader* _imageDownloader;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBPageCustomPostsComponentControllerDelegate> _controllerDelegate;
	FBFontFoundry* _fontFoundry;

}

@property (nonatomic,readonly) FBUserSession * session;                                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageFBID;                                                              //@synthesize pageFBID=_pageFBID - In the implementation block
@property (nonatomic,readonly) id<FBPageCustomPostsConfig> customPostsConfig;                                         //@synthesize customPostsConfig=_customPostsConfig - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                                             //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * imageDownloader;                                                   //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                                     //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageCustomPostsComponentControllerDelegate> controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,readonly) FBFontFoundry * fontFoundry;                                                           //@synthesize fontFoundry=_fontFoundry - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(FBImageDownloader *)imageDownloader;
-(NSString *)pageFBID;
-(FBFontFoundry *)fontFoundry;
-(id<FBPageCustomPostsConfig>)customPostsConfig;
-(id)initWithSession:(id)arg1 pageFBID:(id)arg2 customPostsConfig:(id)arg3 notificationCenter:(id)arg4 imageDownloader:(id)arg5 navigationCoordinator:(id)arg6 fontFoundry:(id)arg7 controllerDelegate:(id)arg8 ;
-(id<FBPageCustomPostsComponentControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<FBPageCustomPostsComponentControllerDelegate>)arg1 ;
-(FBUserSession *)session;
-(NSNotificationCenter *)notificationCenter;
@end

