/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQuicksilverEndgameViewDelegate;
@class FBUserSession, UILabel, CAShapeLayer, UIImageView;

@interface FBQuicksilverEndgameView : UIView {

	FBUserSession* _session;
	UILabel* _scoreValue;
	UILabel* _scoreTitle;
	CAShapeLayer* _scoreCircleLayer;
	UIImageView* _replayImageView;
	CAShapeLayer* _replayCircleLayer;
	UILabel* _replayTitle;
	id<FBQuicksilverEndgameViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverEndgameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapReplayButton;
-(id)initWithSession:(id)arg1 frame:(CGRect)arg2 ;
-(void)setDelegate:(id<FBQuicksilverEndgameViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBQuicksilverEndgameViewDelegate>)delegate;
-(void)setScore:(id)arg1 ;
@end

