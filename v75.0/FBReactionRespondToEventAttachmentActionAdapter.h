/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBReactionAttachmentActionAdapter.h>

@protocol FBQueriedReactionStoryAttachmentActionFieldsProtocol, FBReactionAttachmentActionAdapterDelegate;
@class FBActionBarItem, UIButton, FBMemEvent, FBMemModelObject, FBUserSession, UIActionSheet, NSMutableDictionary, FBReactionContext, NSString;

@interface FBReactionRespondToEventAttachmentActionAdapter : NSObject <UIActionSheetDelegate, FBReactionAttachmentActionAdapter> {

	FBActionBarItem* _actionBarItem;
	UIButton* _actionButton;
	FBMemEvent* _event;
	FBMemModelObject*<FBQueriedReactionStoryAttachmentActionFieldsProtocol> _attachmentAction;
	FBUserSession* _session;
	UIActionSheet* _actionSheet;
	NSMutableDictionary* _actionSheetIndexToMutationRsvpStatus;
	FBReactionContext* _reactionContext;
	id<FBReactionAttachmentActionAdapterDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReactionAttachmentActionAdapterDelegate> delegate; 
+(id)_glyphForEventStatus:(id)arg1 ;
-(id)actionBarItem;
-(void)attachmentActionTapped;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 attachmentAction:(id)arg3 ;
-(id)defaultIcon;
-(void)configureActionViewWithEvent:(id)arg1 ;
-(void)_openRespondEventActionSheet;
-(void)_handleRespondEventActionWithRsvpStatus:(id)arg1 ;
-(void)setDelegate:(id<FBReactionAttachmentActionAdapterDelegate>)arg1 ;
-(id<FBReactionAttachmentActionAdapterDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)actionButton;
-(id)highlightedIcon;
@end

