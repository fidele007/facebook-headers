/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWatchAndMoreHeaderControllingFBWatchAndMoreViewControllerDelegate, FBWatchAndMoreContentControllingFBWatchAndMoreViewControllerDelegate;
@class UIViewController, FBMemFeedStory, FBMemVideo, FBVideoToolbox, FBFontFoundry, NSArray;

@interface FBWatchAndMoreViewConfiguration : NSObject {

	BOOL _enableHeader;
	BOOL _enableRotation;
	UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate> _headerViewController;
	UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate> _contentViewController;
	FBMemFeedStory* _story;
	FBMemVideo* _video;
	FBVideoToolbox* _videoToolbox;
	FBFontFoundry* _fontFoundry;
	unsigned long long _videoPlayerOptions;
	NSArray* _trackingCodes;
	unsigned long long _layoutType;
	unsigned long long _videoGestureType;

}

@property (nonatomic,retain) UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate> headerViewController;                //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) FBMemFeedStory * story;                                                                                                        //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) FBMemVideo * video;                                                                                                            //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) FBVideoToolbox * videoToolbox;                                                                                                 //@synthesize videoToolbox=_videoToolbox - In the implementation block
@property (nonatomic,retain) FBFontFoundry * fontFoundry;                                                                                                   //@synthesize fontFoundry=_fontFoundry - In the implementation block
@property (assign,nonatomic) unsigned long long videoPlayerOptions;                                                                                         //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
@property (assign,nonatomic) BOOL enableHeader;                                                                                                             //@synthesize enableHeader=_enableHeader - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                                                                                                         //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (assign,nonatomic) unsigned long long layoutType;                                                                                                 //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) unsigned long long videoGestureType;                                                                                           //@synthesize videoGestureType=_videoGestureType - In the implementation block
@property (assign,nonatomic) BOOL enableRotation;                                                                                                           //@synthesize enableRotation=_enableRotation - In the implementation block
-(FBMemFeedStory *)story;
-(void)setStory:(FBMemFeedStory *)arg1 ;
-(NSArray *)trackingCodes;
-(FBFontFoundry *)fontFoundry;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(FBVideoToolbox *)videoToolbox;
-(unsigned long long)videoPlayerOptions;
-(id)initWithHeaderViewController:(id)arg1 withContentViewController:(id)arg2 story:(id)arg3 video:(id)arg4 videoToolbox:(id)arg5 fontFoundry:(id)arg6 videoPlayerOptions:(unsigned long long)arg7 enableHeader:(BOOL)arg8 trackingCodes:(id)arg9 layoutType:(unsigned long long)arg10 videoGestureType:(unsigned long long)arg11 enableRotation:(BOOL)arg12 ;
-(BOOL)enableHeader;
-(unsigned long long)videoGestureType;
-(BOOL)enableRotation;
-(void)setVideoPlayerOptions:(unsigned long long)arg1 ;
-(void)setVideoToolbox:(FBVideoToolbox *)arg1 ;
-(void)setFontFoundry:(FBFontFoundry *)arg1 ;
-(void)setEnableHeader:(BOOL)arg1 ;
-(void)setVideoGestureType:(unsigned long long)arg1 ;
-(void)setEnableRotation:(BOOL)arg1 ;
-(UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate>)contentViewController;
-(void)setContentViewController:(UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate>)arg1 ;
-(unsigned long long)layoutType;
-(void)setLayoutType:(unsigned long long)arg1 ;
-(UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate>)headerViewController;
-(void)setHeaderViewController:(UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate>)arg1 ;
-(FBMemVideo *)video;
-(void)setVideo:(FBMemVideo *)arg1 ;
@end

