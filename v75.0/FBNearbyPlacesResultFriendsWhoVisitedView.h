/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@protocol FBNearbyPlacesResultFriendsWhoVistedViewDelegate;
@class FBRichTextView;

@interface FBNearbyPlacesResultFriendsWhoVisitedView : UIControl {

	FBRichTextView* _titleLabel;
	id<FBNearbyPlacesResultFriendsWhoVistedViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesResultFriendsWhoVistedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_backgroundColorForSelectedState:(BOOL)arg1 ;
+(double)heightForPlace:(id)arg1 withWidth:(double)arg2 ;
+(double)_heightForLabelText:(id)arg1 width:(double)arg2 ;
-(void)updateViewWithPlace:(id)arg1 userSession:(id)arg2 ;
-(void)_didTapOnView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBNearbyPlacesResultFriendsWhoVistedViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBNearbyPlacesResultFriendsWhoVistedViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end
