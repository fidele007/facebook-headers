/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoPlaybackLoggingDataProviderInitializer.h>

@protocol FBVideoPlaybackKitLoggingDataSessionIDProvider;
@class NSString, NSNumber;

@interface FBSimpleVideoPlaybackLoggingDataProviderInitializer : NSObject <FBVideoPlaybackLoggingDataProviderInitializer> {

	NSString* _staticVideoHomeSessionID;
	id<FBVideoPlaybackKitLoggingDataSessionIDProvider> _videoHomeSession;
	NSString* _videoChannelID;
	NSString* _externalLogID;
	NSString* _externalLogType;
	NSString* _reactionComponentTrackingData;
	NSString* _hostVideoID;
	NSString* _initialChannelSessionID;
	NSNumber* _instreamVideoAdBreakIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * videoChannelID;                             //@synthesize videoChannelID=_videoChannelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalLogID;                              //@synthesize externalLogID=_externalLogID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalLogType;                            //@synthesize externalLogType=_externalLogType - In the implementation block
@property (nonatomic,copy,readonly) NSString * reactionComponentTrackingData;              //@synthesize reactionComponentTrackingData=_reactionComponentTrackingData - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostVideoID;                                //@synthesize hostVideoID=_hostVideoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialChannelSessionID;                    //@synthesize initialChannelSessionID=_initialChannelSessionID - In the implementation block
@property (nonatomic,readonly) NSNumber * instreamVideoAdBreakIndex;                       //@synthesize instreamVideoAdBreakIndex=_instreamVideoAdBreakIndex - In the implementation block
-(NSString *)reactionComponentTrackingData;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 initialChannelSessionID:(id)arg5 reactionComponentTrackingData:(id)arg6 ;
-(id)initWithVideoChannelID:(id)arg1 staticVideoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 ;
-(id)videoHomeSessionID;
-(NSString *)videoChannelID;
-(id)initWithLoggingProviderInitializer:(id)arg1 videoChannelID:(id)arg2 initialChannelSessionID:(id)arg3 ;
-(NSString *)initialChannelSessionID;
-(id)initWithHostVideoID:(id)arg1 instreamVideoAdBreakIndex:(id)arg2 ;
-(id)forCopyingOnlyVideoHomeSession;
-(id)forCopyingOnlyStaticVideoHomeSessionID;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(NSString *)hostVideoID;
-(NSNumber *)instreamVideoAdBreakIndex;
@end

