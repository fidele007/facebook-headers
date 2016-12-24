/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFacecastWithGuestLabelViewDelegate;
@class UIView, FBButtonWithExtendedTapTarget, UILabel;

@interface FBFacecastWithGuestLabelView : UIView {

	UIView* _background;
	FBButtonWithExtendedTapTarget* _guestXButton;
	UILabel* _guestLabel;
	id<FBFacecastWithGuestLabelViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastWithGuestLabelViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setGuestName:(id)arg1 ;
-(void)_didTapGuestXButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBFacecastWithGuestLabelViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFacecastWithGuestLabelViewDelegate>)delegate;
@end
