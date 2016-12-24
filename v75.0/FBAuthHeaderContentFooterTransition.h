/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthCompositeTransition.h>

@class UIView;

@interface FBAuthHeaderContentFooterTransition : FBAuthCompositeTransition {

	BOOL _compositeHeader;
	BOOL _transactionComplete;
	BOOL _headerAnimationComplete;
	BOOL _contentAnimationComplete;
	UIView* _topHeader;
	UIView* _bottomHeader;
	UIView* _topContent;
	UIView* _bottomContent;
	UIView* _topFooter;
	UIView* _bottomFooter;

}
-(void)layoutCompositeView:(id)arg1 ;
-(void)startAnimations:(id)arg1 ;
-(id)initWithDuration:(double)arg1 reverse:(BOOL)arg2 compositeHeader:(BOOL)arg3 ;
@end

