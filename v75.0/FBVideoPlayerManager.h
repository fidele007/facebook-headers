/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary;

@interface FBVideoPlayerManager : NSObject {

	NSMutableDictionary* _videoPlayerStates;
	mutex _videoPlayerStatesLock;

}
-(id)videoPlayerStateForVideoWithID:(id)arg1 ;
-(void)updateManuallyPaused:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateDidPlayToEnd:(BOOL)arg1 time:(double)arg2 isOnEndScreen:(BOOL)arg3 forVideoWithID:(id)arg4 ;
-(void)updateDidLogStartedPlaying:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(id)findOrCreateVideoPlayerStateForVideoWithID:(id)arg1 ;
-(id)videoPlayerStateBuilderForVideoWithID:(id)arg1 ;
-(void)updateHasDisplayed:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateHasShownSoundPrompt:(BOOL)arg1 forVideoWithID:(id)arg2 ;
-(void)updateScrollBlockingTotalTimePlayed:(double)arg1 forVideoWithID:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

