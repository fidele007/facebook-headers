/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBFacecastChatThreadCellView, UIImageView;

@interface FBFacecastChatNotificationView : UIView {

	BOOL _animating;
	FBFacecastChatThreadCellView* _coverImageView;
	UIImageView* _iconImageView;

}

@property (nonatomic,retain) FBFacecastChatThreadCellView * coverImageView;              //@synthesize coverImageView=_coverImageView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic) BOOL animating;                                             //@synthesize animating=_animating - In the implementation block
+(CGSize)size;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 entity:(id)arg3 ;
-(FBFacecastChatThreadCellView *)coverImageView;
-(void)setCoverImageView:(FBFacecastChatThreadCellView *)arg1 ;
-(void)layoutSubviews;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
@end

