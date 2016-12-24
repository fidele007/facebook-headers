/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ZRApplicationState, UIViewController;

@interface FBZeroRatedNetworkActivityCoordinator : NSObject {

	id _zeroRatingStatusChangeObserver;
	id _zeroRatingDisplayExternalContentObserver;
	id _zeroRatingDismissExternalContentObserver;
	BOOL _started;
	BOOL _bannerAllowed;
	int _lastZeroRatingStatus;
	ZRApplicationState* _zeroRatingState;
	UIViewController* _bannerVC;

}

@property (nonatomic,retain) ZRApplicationState * zeroRatingState;              //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (assign,nonatomic) BOOL started;                                      //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) int lastZeroRatingStatus;                          //@synthesize lastZeroRatingStatus=_lastZeroRatingStatus - In the implementation block
@property (nonatomic,retain) UIViewController * bannerVC;                       //@synthesize bannerVC=_bannerVC - In the implementation block
@property (assign,nonatomic) BOOL bannerAllowed;                                //@synthesize bannerAllowed=_bannerAllowed - In the implementation block
-(void)_zeroRatingStatusDidChange:(id)arg1 ;
-(void)_bannerAllowedStateChange:(id)arg1 ;
-(ZRApplicationState *)zeroRatingState;
-(void)setZeroRatingState:(ZRApplicationState *)arg1 ;
-(int)lastZeroRatingStatus;
-(void)setLastZeroRatingStatus:(int)arg1 ;
-(UIViewController *)bannerVC;
-(void)setBannerVC:(UIViewController *)arg1 ;
-(BOOL)bannerAllowed;
-(void)setBannerAllowed:(BOOL)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 bannerViewController:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setStarted:(BOOL)arg1 ;
-(void)forceRefresh;
-(BOOL)started;
@end
