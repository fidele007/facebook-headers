/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerPickerController.h>

@protocol FBComposerUpdateHandler;
@class FBPromptMediaAttachmentViewController, FBUserSession, FBComposerBootstrapContent, NSString;

@interface FBComposerPromptMediaAttachmentPickerController : NSObject <FBComposerPickerController> {

	FBPromptMediaAttachmentViewController* _promptMediaAttachmentViewController;
	FBUserSession* _userSession;
	FBComposerBootstrapContent* _bootstrapContent;
	id<FBComposerUpdateHandler> _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(id)initWithUserSession:(id)arg1 updateHandler:(id)arg2 bootstrapContent:(id)arg3 ;
@end

