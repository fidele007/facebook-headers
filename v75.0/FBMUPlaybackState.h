/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMUPlaybackState : NSObject <NSCopying> {

	unsigned long long _songIndex;
	unsigned long long _viewState;
	double _currentPlayingTime;
	double _duration;

}

@property (nonatomic,readonly) unsigned long long songIndex;              //@synthesize songIndex=_songIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long viewState;              //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) double currentPlayingTime;                 //@synthesize currentPlayingTime=_currentPlayingTime - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
-(double)currentPlayingTime;
-(unsigned long long)songIndex;
-(id)initWithSongIndex:(unsigned long long)arg1 playbackViewState:(unsigned long long)arg2 currentPlayingTime:(double)arg3 duration:(double)arg4 ;
-(id)copyWithNewPlaybackViewStateAndResetCurrentPlayingTimeAndDuration:(unsigned long long)arg1 ;
-(id)copyWithNewDuration:(double)arg1 ;
-(id)copyWithNewPlaybackViewState:(unsigned long long)arg1 ;
-(id)copyWithNewCurrentPlayingTime:(double)arg1 ;
-(void)resetCurrentPlayingTimeAndDuration;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)viewState;
@end

