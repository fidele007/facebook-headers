/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthCompositeTransition.h>

@class UIView;

@interface FBDBLLoadingToHeaderContentFooterTransition : FBAuthCompositeTransition {

	BOOL _transactionComplete;
	BOOL _headerComplete;
	BOOL _contentComplete;
	UIView* _otherHeader;
	UIView* _loaderUserImage;
	UIView* _otherContent;
	UIView* _otherFooter;

}
-(void)layoutCompositeView:(id)arg1 ;
-(void)startAnimations:(id)arg1 ;
@end

