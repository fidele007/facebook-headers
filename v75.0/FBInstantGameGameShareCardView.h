/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantGameGameShareCardViewDelegate;
@class FBInstantGameUIMetrics, FBUserSession, FBQuicksilverGameInfo, FBNetworkImageView, UIImageView, UILabel, UITextView, UIButton;

@interface FBInstantGameGameShareCardView : UIView {

	FBInstantGameUIMetrics* _metrics;
	FBUserSession* _session;
	FBQuicksilverGameInfo* _gameInfo;
	FBNetworkImageView* _gameBackgroundImageView;
	UIImageView* _gameIconImageView;
	UILabel* _gameTitleLabel;
	UITextView* _gameDescriptionTextView;
	id<FBInstantGameGameShareCardViewDelegate> _delegate;
	UIButton* _gameShareButton;

}

@property (assign,nonatomic,__weak) id<FBInstantGameGameShareCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * gameShareButton;                                            //@synthesize gameShareButton=_gameShareButton - In the implementation block
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 ;
-(void)_downloadGameIconImage:(id)arg1 ;
-(void)_userDidTapShareButton:(id)arg1 ;
-(CGSize)_gameDescriptionTextViewSizeThatFits:(CGSize)arg1 ;
-(void)_setGameIconImage:(id)arg1 ;
-(UIButton *)gameShareButton;
-(void)setDelegate:(id<FBInstantGameGameShareCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInstantGameGameShareCardViewDelegate>)delegate;
@end

