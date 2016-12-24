/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionAttachmentActionAdapter.h>

@protocol FBQueriedReactionStoryAttachmentActionFieldsProtocol, FBReactionAttachmentActionAdapterDelegate;
@class FBReactionContext, FBMemModelObject, FBActionBarItem, UIButton, FBMemPage, UIImage, NSString;

@interface FBReactionAdminPageAttachmentActionAdapter : NSObject <FBReactionAttachmentActionAdapter> {

	FBReactionContext* _reactionContext;
	FBMemModelObject*<FBQueriedReactionStoryAttachmentActionFieldsProtocol> _attachmentAction;
	FBActionBarItem* _actionBarItem;
	UIButton* _actionButton;
	FBMemPage* _page;
	UIImage* _acceptImage;
	UIImage* _acceptedImage;
	id<FBReactionAttachmentActionAdapterDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReactionAttachmentActionAdapterDelegate> delegate; 
-(id)actionBarItem;
-(void)attachmentActionTapped;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 attachmentAction:(id)arg3 ;
-(id)defaultIcon;
-(void)setDelegate:(id<FBReactionAttachmentActionAdapterDelegate>)arg1 ;
-(id<FBReactionAttachmentActionAdapterDelegate>)delegate;
-(id)actionButton;
-(id)highlightedIcon;
@end

