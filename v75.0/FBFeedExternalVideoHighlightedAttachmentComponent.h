/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFeedEventBus, FBMemFeedStory, FBAnalyticsInfo, FBIntentTarget, FBFeedToolbox;

@interface FBFeedExternalVideoHighlightedAttachmentComponent : CKCompositeComponent {

	FBFeedEventBus* _eventBus;
	FBMemFeedStory* _parentStory;
	FBAnalyticsInfo* _analyticsInfo;
	FBIntentTarget* _intentTarget;
	FBFeedToolbox* _toolbox;

}
+(id)newWithAttachment:(const FBFeedExternalVideoHighlightedAttachmentComponentGraphQL*)arg1 cardTapAction:(CKTypedComponentAction<>)arg2 options:(const FBStoryAttachmentRenderingComponentOptions*)arg3 toolbox:(id)arg4 ;
+(id)initialState;
-(void)didTapImage:(id)arg1 ;
@end

