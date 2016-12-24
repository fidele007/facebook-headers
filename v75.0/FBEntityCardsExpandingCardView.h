/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBEntityCardsExpandingCardViewDelegate;
@interface FBEntityCardsExpandingCardView : UIView {

	id<FBEntityCardsExpandingCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEntityCardsExpandingCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FBEntityCardsExpandingCardViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBEntityCardsExpandingCardViewDelegate>)delegate;
@end

