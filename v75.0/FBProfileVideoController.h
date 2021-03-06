/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileVideoPlaybackProtocol.h>

@class FBUserSession, FBMemProfileVideo, FBProfileVideoComponentListenerAnnouncer, FBProfileVideoComponentStateListenerAnnouncer, NSString;

@interface FBProfileVideoController : NSObject <FBProfileVideoPlaybackProtocol> {

	FBUserSession* _session;
	BOOL _registered;
	FBMemProfileVideo* _profileVideo;
	FBProfileVideoComponentListenerAnnouncer* _componentAnnouncer;
	FBProfileVideoComponentStateListenerAnnouncer* _stateAnnouncer;

}

@property (nonatomic,readonly) FBProfileVideoComponentListenerAnnouncer * componentAnnouncer;               //@synthesize componentAnnouncer=_componentAnnouncer - In the implementation block
@property (nonatomic,readonly) FBProfileVideoComponentStateListenerAnnouncer * stateAnnouncer;              //@synthesize stateAnnouncer=_stateAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBProfileVideoComponentListenerAnnouncer *)componentAnnouncer;
-(void)profileVideoPauseOnScrollIfRequired;
-(void)profileVideoPlayOnScrollIfRequired;
-(void)setPageRegistered:(BOOL)arg1 ;
-(void)profileVideoWillUpload;
-(void)profileVideoUploadDidFailForActor:(id)arg1 ;
-(void)configureWithActor:(id)arg1 ;
-(void)profileVideoEnterFullscreen;
-(FBProfileVideoComponentStateListenerAnnouncer *)stateAnnouncer;
-(void)userLeftProfilePage;
-(void)profileVideoSetHidden:(BOOL)arg1 ;
-(void)_videoChangedForActor:(id)arg1 ;
-(unsigned long long)_actorType:(id)arg1 ;
-(void)_observeProfileVideo:(id)arg1 loading:(BOOL)arg2 profileVideoSourceType:(id)arg3 ;
-(id)init;
-(id)initWithSession:(id)arg1 ;
@end

