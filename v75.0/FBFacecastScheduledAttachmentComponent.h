/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBStoryAttachmentRenderingFragmentComponent.h>

@class FBAnalyticsInfo, FBMemFeedStory, FBFeedToolbox, NSString;

@interface FBFacecastScheduledAttachmentComponent : CKCompositeComponent <FBStoryAttachmentRenderingFragmentComponent> {

	FBAnalyticsInfo* _analyticsInfo;
	BOOL _isLobbyOpen;
	BOOL _isBroadcasterRunningLate;
	BOOL _isScheduleExpirated;
	BOOL _isViewerSubscribed;
	BOOL _isCanceled;
	BOOL _isLive;
	BOOL _isQuickPublish;
	FBMemFeedStory* _story;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMemFeedStory * story;                     //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                    //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) BOOL isLobbyOpen;                           //@synthesize isLobbyOpen=_isLobbyOpen - In the implementation block
@property (nonatomic,readonly) BOOL isBroadcasterRunningLate;              //@synthesize isBroadcasterRunningLate=_isBroadcasterRunningLate - In the implementation block
@property (nonatomic,readonly) BOOL isScheduleExpirated;                   //@synthesize isScheduleExpirated=_isScheduleExpirated - In the implementation block
@property (nonatomic,readonly) BOOL isViewerSubscribed;                    //@synthesize isViewerSubscribed=_isViewerSubscribed - In the implementation block
@property (nonatomic,readonly) BOOL isCanceled;                            //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,readonly) BOOL isLive;                                //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,readonly) BOOL isQuickPublish;                        //@synthesize isQuickPublish=_isQuickPublish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAttachment:(const FBFacecastScheduledAttachmentComponentGraphQL*)arg1 options:(const FBStoryAttachmentRenderingComponentOptions*)arg2 toolbox:(id)arg3 ;
+(id)supportedStyles;
+(id)initialState;
-(FBFeedToolbox *)toolbox;
-(FBMemFeedStory *)story;
-(BOOL)isViewerSubscribed;
-(void)didTapJoinLobbyButton:(id)arg1 ;
-(void)didTapSubscribeButton:(id)arg1 ;
-(void)changeSubcribeStatus;
-(BOOL)isLobbyOpen;
-(BOOL)isBroadcasterRunningLate;
-(BOOL)isScheduleExpirated;
-(BOOL)isQuickPublish;
-(BOOL)isLive;
-(BOOL)isCanceled;
@end

