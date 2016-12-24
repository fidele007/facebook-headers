/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoRenderInfo <RTCVideoSnapshotSource>
@property (assign,nonatomic,__weak) id<VideoRenderInfoDelegate> renderInfoDelegate; 
@property (nonatomic,readonly) CGSize videoSize; 
@property (nonatomic,readonly) double timeIntervalSinceLastFrame; 
@property (nonatomic,readonly) BOOL hasVideoStarted; 
@property (assign,nonatomic) unsigned long long videoScaleType; 
@property (nonatomic,readonly) BOOL shouldResizeView; 
@required
-(void)videoStreamRestarted;
-(BOOL)hasVideoStarted;
-(double)timeIntervalSinceLastFrame;
-(unsigned long long)videoScaleType;
-(id<VideoRenderInfoDelegate>)renderInfoDelegate;
-(void)setRenderInfoDelegate:(id)arg1;
-(BOOL)shouldResizeView;
-(void)setVideoScaleType:(unsigned long long)arg1;
-(CGSize)videoSize;

@end
