/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPulseShareCountDownloaderDelegate.h>
#import <Facebook/FBWebViewContainerControllerBannerProvider.h>

@protocol FBIntentHandler, FBWebViewContainerControllerBannerProviderDelegate, FBQueriedNodeFieldsProtocol;
@class UIView, FBUserSession, NSURL, NSString, FBWebViewBottomBannerBarView, FBPulseShareCountDownloader, UIImageView, FBMemModelObject, NSArray;

@interface FBPulseWebViewBannerProvider : NSObject <FBPulseShareCountDownloaderDelegate, FBWebViewContainerControllerBannerProvider> {

	UIView* _pulseBannerView;
	FBUserSession* _session;
	NSURL* _URL;
	NSString* _externalURL;
	NSString* _externalURLTitle;
	FBWebViewBottomBannerBarView* _pulseButtonView;
	id<FBIntentHandler> _intentHandler;
	FBPulseShareCountDownloader* _downloader;
	NSString* _externalURLID;
	BOOL _impressionLogged;
	UIImageView* _bannerLogoImageView;
	BOOL _downloadCountOnly;
	id<FBWebViewContainerControllerBannerProviderDelegate> _delegate;
	unsigned long long _shareCount;
	FBMemModelObject*<FBQueriedNodeFieldsProtocol> _openGraphNode;
	NSArray* _suggestedStories;

}

@property (assign,nonatomic,__weak) id<FBWebViewContainerControllerBannerProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long shareCount;                                                       //@synthesize shareCount=_shareCount - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedNodeFieldsProtocol> openGraphNode;                      //@synthesize openGraphNode=_openGraphNode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedStories;                                                   //@synthesize suggestedStories=_suggestedStories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * viewForBanner; 
+(id)newWithSession:(id)arg1 URL:(id)arg2 intentHandler:(id)arg3 downloadCountOnly:(BOOL)arg4 ;
-(void)_logEvent:(id)arg1 ;
-(void)downloaderDidUpdateShareCount:(id)arg1 ;
-(void)downloaderDidUpdateOpenGraphNode:(id)arg1 ;
-(id)initWithSession:(id)arg1 URL:(id)arg2 intentHandler:(id)arg3 downloadCountOnly:(BOOL)arg4 ;
-(id)_webViewToolbar;
-(void)_loadShareCount;
-(void)_pulseBannerDidTap;
-(NSArray *)suggestedStories;
-(id)logoImageView;
-(void)containerViewWillAppear;
-(void)bannerLogoImageViewAnimation:(id)arg1 ;
-(UIView *)viewForBanner;
-(void)loadShareCount;
-(void)openPulse;
-(void)setDelegate:(id<FBWebViewContainerControllerBannerProviderDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebViewContainerControllerBannerProviderDelegate>)delegate;
-(unsigned long long)shareCount;
-(void)setShareCount:(unsigned long long)arg1 ;
-(FBMemModelObject*<FBQueriedNodeFieldsProtocol>)openGraphNode;
@end

