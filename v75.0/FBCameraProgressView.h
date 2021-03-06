/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBProgressView, UILabel;

@interface FBCameraProgressView : UIView {

	double _maxVideoLength;
	FBProgressView* _progressView;
	FBProgressView* _progressViewCancel;
	UILabel* _recordingTimeLabel;
	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)initWithMaximumDuration:(double)arg1 ;
-(void)setRecordingLabelRotation:(CGAffineTransform)arg1 ;
-(void)setShowProgress:(BOOL)arg1 ;
-(void)layoutSubviews;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)reset;
-(void)stop;
-(void)start;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
@end

