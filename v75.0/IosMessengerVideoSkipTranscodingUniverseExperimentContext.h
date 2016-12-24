/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosMessengerVideoSkipTranscodingUniverseExperimentContext : FBExperimentContext {

	double _m_skip_video_transcoding_threshold_compression_ratio_threshold;
	double _m_skip_video_transcoding_threshold_bitrate_threshold;

}

@property (assign,nonatomic) double m_skip_video_transcoding_threshold_compression_ratio_threshold;              //@synthesize m_skip_video_transcoding_threshold_compression_ratio_threshold=_m_skip_video_transcoding_threshold_compression_ratio_threshold - In the implementation block
@property (assign,nonatomic) double m_skip_video_transcoding_threshold_bitrate_threshold;                        //@synthesize m_skip_video_transcoding_threshold_bitrate_threshold=_m_skip_video_transcoding_threshold_bitrate_threshold - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)m_skip_video_transcoding_threshold_bitrate_threshold;
-(double)m_skip_video_transcoding_threshold_compression_ratio_threshold;
-(void)setM_skip_video_transcoding_threshold_compression_ratio_threshold:(double)arg1 ;
-(void)setM_skip_video_transcoding_threshold_bitrate_threshold:(double)arg1 ;
@end
