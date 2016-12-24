/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class FBNetworkImageView, UILabel;

@interface FBReactionIconOverMessageView : UIControl {

	FBNetworkImageView* _iconView;
	UILabel* _messageLabel;
	UIEdgeInsets _insets;
	BOOL _shouldChangeAlphaOnHighlight;

}

@property (assign,nonatomic) BOOL shouldChangeAlphaOnHighlight;              //@synthesize shouldChangeAlphaOnHighlight=_shouldChangeAlphaOnHighlight - In the implementation block
+(CGSize)_messageSizeForMessage:(id)arg1 size:(CGSize)arg2 insets:(UIEdgeInsets)arg3 ;
+(CGSize)threadsafeSizeThatFitsWithMessage:(id)arg1 insets:(UIEdgeInsets)arg2 constrainedSize:(CGSize)arg3 ;
-(void)setSession:(id)arg1 message:(id)arg2 imageURL:(id)arg3 insets:(UIEdgeInsets)arg4 ;
-(BOOL)shouldChangeAlphaOnHighlight;
-(void)setShouldChangeAlphaOnHighlight:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

