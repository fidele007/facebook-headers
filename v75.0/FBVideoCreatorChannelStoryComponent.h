/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedActorFieldsProtocol, FBVideoPlayerComponentContaining;
@class FBMemModelObject, FBMemFeedStory, FBVideoCreatorChannelToolbox, CKComponent;

@interface FBVideoCreatorChannelStoryComponent : CKCompositeComponent {

	FBMemModelObject*<FBQueriedActorFieldsProtocol> _videoOwner;
	FBMemFeedStory* _story;
	FBVideoCreatorChannelToolbox* _toolbox;
	CKComponent*<FBVideoPlayerComponentContaining> _videoContainingComponent;

}

@property (nonatomic,readonly) FBMemFeedStory * story;                                                               //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBVideoCreatorChannelToolbox * toolbox;                                               //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) CKComponent*<FBVideoPlayerComponentContaining> videoContainingComponent;              //@synthesize videoContainingComponent=_videoContainingComponent - In the implementation block
+(id)newWithStory:(id)arg1 context:(id)arg2 ;
-(FBVideoCreatorChannelToolbox *)toolbox;
-(FBMemFeedStory *)story;
-(void)didTapProfileImage:(id)arg1 ;
-(void)didTapVideoOwnerTitle:(id)arg1 ;
-(void)didTapVideoInfo:(id)arg1 ;
-(void)presentVideoOwnerTimeline;
-(CKComponent*<FBVideoPlayerComponentContaining>)videoContainingComponent;
@end
