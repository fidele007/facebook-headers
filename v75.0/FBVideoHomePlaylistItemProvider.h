/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBCache, FBVideoChannelFeedExperimentContext;

@interface FBVideoHomePlaylistItemProvider : NSObject {

	FBUserSession* _session;
	FBCache* _playlistItemCache;
	FBCache* _clcHandleCache;
	FBVideoChannelFeedExperimentContext* _experimentContext;
	BOOL _storiesNeedLayout;

}

@property (assign,nonatomic) BOOL storiesNeedLayout;              //@synthesize storiesNeedLayout=_storiesNeedLayout - In the implementation block
-(void)_storyDidUpdate:(id)arg1 handle:(id)arg2 ;
-(id)playlistItemForStory:(id)arg1 videoChannelID:(id)arg2 contextTitle:(id)arg3 ;
-(BOOL)storiesNeedLayout;
-(void)setStoriesNeedLayout:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
