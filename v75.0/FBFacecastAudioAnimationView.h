/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, FBTimer;

@interface FBFacecastAudioAnimationView : UIView {

	NSMutableArray* _graphViewArray;
	NSMutableArray* _audioRatioHistory;
	long long _numGraphs;
	long long _audioRatioHistoryLength;
	double _audioRatioSum;
	long long _historyPointerIndex;
	FBTimer* _timer;
	double _randomMinDB;
	double _randomMaxDB;
	BOOL _isDampened;

}

@property (assign,nonatomic) BOOL isDampened;              //@synthesize isDampened=_isDampened - In the implementation block
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)stopRandomAnimation;
-(void)setIsDampened:(BOOL)arg1 ;
-(void)startRandomAnimationWithDuration:(double)arg1 ;
-(void)randomlyAnimateSubviewsWithDuration;
-(double)_audioRatioForAudioLevel:(double)arg1 ;
-(double)_randomFloat;
-(BOOL)isDampened;
-(void)updateAudioLevel:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
