/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBVideoPlayerComponentStatefulView;


@protocol FBVideoPlaylistPlayer <NSObject>
@property (nonatomic,readonly) FBVideoPlayerComponentStatefulView * playingStatefulView; 
@property (assign,nonatomic,__weak) id<FBVideoPlaylistPlayerDelegate> playlistPlayerDelegate; 
@property (assign,nonatomic,__weak) id<FBVideoPlaylistPlayerDataSource> playlistPlayerDataSource; 
@required
-(FBVideoPlayerComponentStatefulView *)playingStatefulView;
-(void)playNextVideo;
-(void)didFinishPlayListWithDebugReason:(unsigned long long)arg1;
-(BOOL)isPlaylistPlayerDismissable;
-(void)dismissPlaylistPlayerWithCompletion:(/*^block*/id)arg1;
-(id<FBVideoPlaylistPlayerDelegate>)playlistPlayerDelegate;
-(void)setPlaylistPlayerDelegate:(id)arg1;
-(id<FBVideoPlaylistPlayerDataSource>)playlistPlayerDataSource;
-(void)setPlaylistPlayerDataSource:(id)arg1;

@end

