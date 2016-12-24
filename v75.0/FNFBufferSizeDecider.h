/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFTimeLoadedDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSArray;

@interface FNFBufferSizeDecider : NSObject {

	double _fetchBufferSizeInSeconds;
	double _fetchMultiplier;
	double _unstallMultiplier;
	double _unstallBufferSizeInSeconds;
	double _startPlayingUnstallBufferSize;
	double _stallBufferSizeInSeconds;
	id<FNFTimeLoadedDelegate> _delegate;
	NSArray* _loadedTimeRanges;
	double _firstFetchSizeInSeconds;
	SCD_Struct_FB100 _playbackTime;
	SCD_Struct_FB100 _timeAfterSeek;

}

@property (assign,nonatomic,__weak) id<FNFTimeLoadedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges;                      //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 playbackTime;                          //@synthesize playbackTime=_playbackTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB100 timeAfterSeek;                         //@synthesize timeAfterSeek=_timeAfterSeek - In the implementation block
@property (nonatomic,readonly) double firstFetchSizeInSeconds;                       //@synthesize firstFetchSizeInSeconds=_firstFetchSizeInSeconds - In the implementation block
-(double)firstFetchSizeInSeconds;
-(SCD_Struct_FB100)timeAfterSeek;
-(void)requestTimeLoadedUpdate;
-(id)initWithFirstFetchSizeInSeconds:(double)arg1 fetchBufferSizeInSeconds:(double)arg2 fetchBufferMultiplier:(double)arg3 unstallBufferMultiplier:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 startPlayingUnstallBufferSizeInSeconds:(double)arg6 stallBufferSizeInSeconds:(double)arg7 ;
-(SCD_Struct_FB100)timeLoaded;
-(BOOL)shouldStall;
-(BOOL)shouldUnstall;
-(void)resetPlaybackTimeAndTimeLoaded;
-(float)timeLoadedInSeconds;
-(BOOL)updateTimeLoadedWithLoadedVideoTime:(SCD_Struct_FB100)arg1 videoFullyDownloaded:(BOOL)arg2 loadedAudioTime:(SCD_Struct_FB100)arg3 audioFullyDownloaded:(BOOL)arg4 ;
-(BOOL)updateTimeLoadedWithLoadedVideoTime:(SCD_Struct_FB100)arg1 videoFullyDownloaded:(BOOL)arg2 ;
-(BOOL)shouldFetch;
-(float)timeToLoadInSeconds;
-(void)setTimeAfterSeek:(SCD_Struct_FB100)arg1 ;
-(BOOL)_updateTimeLoaded:(SCD_Struct_FB100)arg1 fullyLoaded:(BOOL)arg2 ;
-(SCD_Struct_FB100)addFetchBufferToTime:(SCD_Struct_FB100)arg1 ;
-(BOOL)hasLoadedTime:(SCD_Struct_FB100)arg1 ;
-(void)setDelegate:(id<FNFTimeLoadedDelegate>)arg1 ;
-(id)description;
-(id<FNFTimeLoadedDelegate>)delegate;
-(NSArray *)loadedTimeRanges;
-(SCD_Struct_FB100)playbackTime;
-(void)setPlaybackTime:(SCD_Struct_FB100)arg1 ;
@end
