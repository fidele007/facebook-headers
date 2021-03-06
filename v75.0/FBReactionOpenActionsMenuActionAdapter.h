/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseActionAdapter.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSArray, UIViewController, NSString;

@interface FBReactionOpenActionsMenuActionAdapter : FBReactionBaseActionAdapter <UIActionSheetDelegate> {

	NSArray* _actionAdapters;
	UIViewController* _actionSheetController;
	NSArray* _actionSheetActions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(id)actionDarkIcon;
-(void)_performButtonActionForAdapter:(id)arg1 ;
-(void)_performButtonActionAfterDismissalForAdapter:(id)arg1 ;
-(id)_createActionSheetController;
-(void)_cancelFIGActionSheet;
-(id)_actionItems:(id)arg1 ;
@end

