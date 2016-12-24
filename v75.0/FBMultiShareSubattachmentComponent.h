/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBForceTouchIntentProvider.h>
#import <Facebook/FBMultiShareAttachmentRenderingComponent.h>

@protocol FBQueriedStoryActionLinkFieldsProtocol;
@class FBMemStoryAttachment, FBMemModelObject, FBAnalyticsInfo, FBFeedToolbox, NSString;

@interface FBMultiShareSubattachmentComponent : CKCompositeComponent <FBForceTouchIntentProvider, FBMultiShareAttachmentRenderingComponent> {

	FBMemStoryAttachment* _attachment;
	unsigned long long _index;
	CKTypedComponentAction<> _becameFullyVisibleAction;
	CKTypedComponentAction<> _tapAttachmentAction;
	FBMemModelObject*<FBQueriedStoryActionLinkFieldsProtocol> _actionLink;
	FBAnalyticsInfo* _analyticsInfo;
	FBFeedToolbox* _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedMultiShareStyles;
+(id)newWithAttachment:(id)arg1 parentStory:(id)arg2 index:(unsigned long long)arg3 toolbox:(id)arg4 becameFullyVisibleAction:(CKTypedComponentAction<>)arg5 tapAttachmentAction:(CKTypedComponentAction<>)arg6 haveFooter:(BOOL)arg7 ;
-(void)becameFullyVisible;
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(id)callToActionIntentTarget;
-(void)sendIntentTarget:(id)arg1 source:(id)arg2 extras:(id)arg3 ;
-(void)didTapOnCTAButton:(id)arg1 ;
-(id)attachmentIntentTarget;
-(void)didTapOnAttachment:(id)arg1 ;
@end

