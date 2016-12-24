/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseAttachmentAdapter.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class FBUserSession, NSString, FBMemModelObject, UIView;

@interface FBReactionPageWelcomeHomeAttachmentAdapter : FBReactionBaseAttachmentAdapter {

	FBUserSession* _userSession;
	NSString* _style;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	UIView* _view;

}
+(BOOL)supportsBottomBorder;
-(BOOL)performMagicTap;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)willDisplayAttachments;
-(void)didEndDisplayingAttachments;
-(id)impressionEventLoggingExtras;
-(void)updateAttachmentsVisibility:(CGRect)arg1 scrollView:(id)arg2 ;
-(id)attachmentsView;
@end

