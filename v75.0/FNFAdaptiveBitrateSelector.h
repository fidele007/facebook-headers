/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFBandwidthProvider;
#import <Facebook/Facebook-Structs.h>
@interface FNFAdaptiveBitrateSelector : NSObject {

	long long _filter;
	double _fractionOfAvailableBandwidthToUse;
	id<FNFBandwidthProvider> _bandwidthProvider;
	double _screenWidth;
	double _screenHeight;
	long long _type;
	double _lastBandwidthEstimateInBitsPerSecond;

}

@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double lastBandwidthEstimateInBitsPerSecond;              //@synthesize lastBandwidthEstimateInBitsPerSecond=_lastBandwidthEstimateInBitsPerSecond - In the implementation block
-(id)initWithSelectorType:(long long)arg1 filter:(long long)arg2 parameters:(FNFAbrParameters)arg3 bandwidthProvider:(id)arg4 ;
-(id)ifAvailableSelectPrefetchedVideoTrackFromMpd:(id)arg1 resourceLoader:(id)arg2 ;
-(id)selectVideoTrackFromList:(id)arg1 ;
-(id)selectRepresentationIdFromMetadata:(id)arg1 defaultId:(id)arg2 ;
-(void)_forTestingOverrideScreenWidth:(double)arg1 height:(double)arg2 ;
-(double)lastBandwidthEstimateInBitsPerSecond;
-(id)init;
-(id)description;
-(long long)type;
@end

