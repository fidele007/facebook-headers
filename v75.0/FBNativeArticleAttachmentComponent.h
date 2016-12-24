/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBStoryAttachmentRenderingFragmentComponent.h>

@class FBFeedEventBus, FBFeedToolbox, FBMemFeedStory, NSArray, FBNativeArticleAttachmentModel, NSString;

@interface FBNativeArticleAttachmentComponent : CKCompositeComponent <FBStoryAttachmentRenderingFragmentComponent> {

	FBFeedEventBus* _eventBus;
	FBFeedToolbox* _toolbox;
	FBMemFeedStory* _feedStory;
	NSArray* _trackingCodes;
	FBNativeArticleAttachmentModel* _model;

}

@property (nonatomic,readonly) FBFeedEventBus * eventBus;                           //@synthesize eventBus=_eventBus - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                             //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * feedStory;                          //@synthesize feedStory=_feedStory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                        //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) FBNativeArticleAttachmentModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAttachment:(const FBNativeArticleAttachmentComponentGraphQL*)arg1 options:(const FBStoryAttachmentRenderingComponentOptions*)arg2 toolbox:(id)arg3 ;
+(id)supportedStyles;
+(id)newWithAttachment:(const FBNativeArticleAttachmentComponentGraphQL*)arg1 options:(const FBStoryAttachmentRenderingComponentOptions*)arg2 toolbox:(id)arg3 draftMode:(BOOL)arg4 ;
+(id)dividerHairlineWithStoryInsets:(UIEdgeInsets)arg1 ;
-(FBFeedToolbox *)toolbox;
-(FBMemFeedStory *)feedStory;
-(NSArray *)trackingCodes;
-(FBFeedEventBus *)eventBus;
-(FBNativeArticleAttachmentModel *)model;
@end

