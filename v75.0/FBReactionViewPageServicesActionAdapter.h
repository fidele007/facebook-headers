/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseActionAdapter.h>

@class UIControl;

@interface FBReactionViewPageServicesActionAdapter : FBReactionBaseActionAdapter {

	UIControl* _actionView;

}
+(double)threadsafeActionViewHeightForUnit:(id)arg1 action:(id)arg2 constrainedSize:(CGSize)arg3 ;
-(void)performActionWithExtras:(id)arg1 ;
-(BOOL)performMagicTap;
-(void)actionViewTapped;
-(void)viewAllServicesWithHighlightedItemFBID:(id)arg1 ;
-(id)actionView;
@end

