/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantGameEndGameHeaderViewDelegate;
@class FBInstantGameUIMetrics, UIButton;

@interface FBInstantGameEndGameHeaderView : UIView {

	FBInstantGameUIMetrics* _metrics;
	UIButton* _gameInfoButton;
	UIButton* _scoreShareButton;
	id<FBInstantGameEndGameHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameEndGameHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)headerViewHeight;
-(void)_userDidTapGameInfoButton:(id)arg1 ;
-(void)_userDidTapScoreShareButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBInstantGameEndGameHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBInstantGameEndGameHeaderViewDelegate>)delegate;
@end

