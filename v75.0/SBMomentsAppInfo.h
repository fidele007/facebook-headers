/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBMomentsAppInterstitialInfo, SBMomentsAppTabInfo;

@interface SBMomentsAppInfo : FBValueObject <NSCopying> {

	BOOL _hasInstalledMoments;
	BOOL _shouldKillTab;
	BOOL _showInterstitial;
	BOOL _showMomentsTab;
	SBMomentsAppInterstitialInfo* _interstitialInfo;
	SBMomentsAppTabInfo* _tabInfo;

}

@property (nonatomic,readonly) BOOL hasInstalledMoments;                                          //@synthesize hasInstalledMoments=_hasInstalledMoments - In the implementation block
@property (nonatomic,readonly) BOOL shouldKillTab;                                                //@synthesize shouldKillTab=_shouldKillTab - In the implementation block
@property (nonatomic,readonly) BOOL showInterstitial;                                             //@synthesize showInterstitial=_showInterstitial - In the implementation block
@property (nonatomic,copy,readonly) SBMomentsAppInterstitialInfo * interstitialInfo;              //@synthesize interstitialInfo=_interstitialInfo - In the implementation block
@property (nonatomic,readonly) BOOL showMomentsTab;                                               //@synthesize showMomentsTab=_showMomentsTab - In the implementation block
@property (nonatomic,copy,readonly) SBMomentsAppTabInfo * tabInfo;                                //@synthesize tabInfo=_tabInfo - In the implementation block
-(BOOL)shouldKillTab;
-(BOOL)showMomentsTab;
-(SBMomentsAppTabInfo *)tabInfo;
-(BOOL)showInterstitial;
-(SBMomentsAppInterstitialInfo *)interstitialInfo;
-(id)initWithHasInstalledMoments:(BOOL)arg1 shouldKillTab:(BOOL)arg2 showInterstitial:(BOOL)arg3 interstitialInfo:(id)arg4 showMomentsTab:(BOOL)arg5 tabInfo:(id)arg6 ;
-(BOOL)hasInstalledMoments;
@end
