/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol FBVideoPlaybackLoggingDataProviderInitializer <NSObject>
@property (nonatomic,copy,readonly) NSString * videoChannelID; 
@property (nonatomic,copy,readonly) NSString * externalLogID; 
@property (nonatomic,copy,readonly) NSString * externalLogType; 
@property (nonatomic,copy,readonly) NSString * reactionComponentTrackingData; 
@property (nonatomic,copy,readonly) NSString * hostVideoID; 
@property (nonatomic,copy,readonly) NSString * initialChannelSessionID; 
@property (nonatomic,readonly) NSNumber * instreamVideoAdBreakIndex; 
@required
-(NSString *)reactionComponentTrackingData;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 initialChannelSessionID:(id)arg5 reactionComponentTrackingData:(id)arg6;
-(id)initWithVideoChannelID:(id)arg1 staticVideoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4;
-(id)videoHomeSessionID;
-(NSString *)videoChannelID;
-(id)initWithLoggingProviderInitializer:(id)arg1 videoChannelID:(id)arg2 initialChannelSessionID:(id)arg3;
-(NSString *)initialChannelSessionID;
-(id)initWithHostVideoID:(id)arg1 instreamVideoAdBreakIndex:(id)arg2;
-(id)forCopyingOnlyVideoHomeSession;
-(id)forCopyingOnlyStaticVideoHomeSessionID;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(NSString *)hostVideoID;
-(NSNumber *)instreamVideoAdBreakIndex;

@end
