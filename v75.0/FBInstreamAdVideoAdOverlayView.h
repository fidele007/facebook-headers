/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBVideoPlaybackEventListener.h>

@class UILabel, FBProgressView, UIImageView, FBMemVideo, NSString;

@interface FBInstreamAdVideoAdOverlayView : UIView <FBVideoPlaybackEventListener> {

	UILabel* _title;
	UILabel* _countdownMessage;
	FBProgressView* _progressBar;
	UIImageView* _globeIcon;
	FBMemVideo* _video;
	BOOL _isInFullscreen;
	double _totalTime;
	double _currentTime;

}

@property (assign,nonatomic) double currentTime;                    //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL isInFullscreen;                   //@synthesize isInFullscreen=_isInFullscreen - In the implementation block
@property (assign,nonatomic) double totalTime;                      //@synthesize totalTime=_totalTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleTextWithVideo:(id)arg1 ;
+(id)compressedCountdownMessageWithCountdownValue:(long long)arg1 ;
+(id)countdownMessageWithVideo:(id)arg1 countdownValue:(long long)arg2 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)setIsInFullscreen:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 isInFullscreen:(BOOL)arg2 ;
-(BOOL)isInFullscreen;
-(void)layoutSubviews;
-(double)totalTime;
-(void)setTotalTime:(double)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
@end

