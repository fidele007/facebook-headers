/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBSnacksFooterViewDelegate;
@class FBSnacksReplyButton, FBButton, FBSnacksBadgeDot, FBTimer;

@interface FBSnacksFooterView : UIView {

	unsigned long long _type;
	FBSnacksReplyButton* _replyButton;
	FBButton* _viewsButton;
	FBSnacksBadgeDot* _unseenIndicator;
	FBButton* _messageButton;
	FBTimer* _emoteTimer;
	id<FBSnacksFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSnacksFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)configureWithMessage:(id)arg1 inThread:(id)arg2 session:(id)arg3 hasUnseenViews:(BOOL)arg4 hasReplied:(BOOL)arg5 ;
-(void)setReplyButtonName:(id)arg1 ;
-(void)_replyButtonTapped;
-(void)_viewsButtonTapped;
-(void)_messageButtonTapped;
-(void)updateReplyButtonWithState:(long long)arg1 ;
-(id)buttonForType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBSnacksFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBSnacksFooterViewDelegate>)delegate;
-(id)initWithType:(unsigned long long)arg1 ;
@end

