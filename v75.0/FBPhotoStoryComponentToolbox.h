/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPhotoStoryCommentHandler, FBFeedToolbox, FBPhotoDisplayingComponentLifecycleListenerAnnouncer, FBStoryShareHandler, NSArray;

@interface FBPhotoStoryComponentToolbox : NSObject {

	FBPhotoStoryCommentHandler* _commentHandler;
	FBFeedToolbox* _feedToolbox;
	FBPhotoDisplayingComponentLifecycleListenerAnnouncer* _lifecycleAnnouncer;
	FBStoryShareHandler* _shareHandler;
	NSArray* _trackingCodes;

}

@property (nonatomic,readonly) FBPhotoStoryCommentHandler * commentHandler;                                            //@synthesize commentHandler=_commentHandler - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox;                                                            //@synthesize feedToolbox=_feedToolbox - In the implementation block
@property (nonatomic,readonly) FBPhotoDisplayingComponentLifecycleListenerAnnouncer * lifecycleAnnouncer;              //@synthesize lifecycleAnnouncer=_lifecycleAnnouncer - In the implementation block
@property (nonatomic,readonly) FBStoryShareHandler * shareHandler;                                                     //@synthesize shareHandler=_shareHandler - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                                           //@synthesize trackingCodes=_trackingCodes - In the implementation block
-(FBFeedToolbox *)feedToolbox;
-(NSArray *)trackingCodes;
-(id)initWithTrackingCodes:(id)arg1 commentHandler:(id)arg2 shareHandler:(id)arg3 lifecycleAnnouncer:(id)arg4 feedToolbox:(id)arg5 ;
-(FBPhotoStoryCommentHandler *)commentHandler;
-(FBPhotoDisplayingComponentLifecycleListenerAnnouncer *)lifecycleAnnouncer;
-(FBStoryShareHandler *)shareHandler;
@end

