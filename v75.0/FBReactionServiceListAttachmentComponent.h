/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionAttachmentsComponent.h>

@protocol FBReactionAction;
@class NSString;

@interface FBReactionServiceListAttachmentComponent : CKCompositeComponent <FBReactionAttachmentsComponent> {

	id<FBReactionAction> _action;
	NSString* _actionStyle;

}
+(BOOL)hasBottomBorderForAttachmentsConnection:(id)arg1 ;
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)itemTapped:(id)arg1 withProduct:(id)arg2 ;
@end
