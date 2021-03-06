/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBVideoChannelFeedToolbox, FBMemVideo, FBMemFeedStory, NSArray, CKComponent;

@interface FBVideoChannelPlaylistItemVideoComponent : CKCompositeComponent {

	FBVideoChannelFeedToolbox* _toolbox;
	FBMemVideo* _video;
	FBMemFeedStory* _story;
	NSArray* _trackingCodes;
	CKComponent* _videoPlayerComponent;

}

@property (nonatomic,readonly) FBVideoChannelFeedToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                               //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;                           //@synthesize story=_story - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                     //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) CKComponent * videoPlayerComponent;               //@synthesize videoPlayerComponent=_videoPlayerComponent - In the implementation block
+(id)newWithPlaylistItem:(id)arg1 maxRatio:(double)arg2 toolbox:(id)arg3 ;
-(FBVideoChannelFeedToolbox *)toolbox;
-(CKComponent *)videoPlayerComponent;
-(FBMemFeedStory *)story;
-(NSArray *)trackingCodes;
-(FBMemVideo *)video;
@end

