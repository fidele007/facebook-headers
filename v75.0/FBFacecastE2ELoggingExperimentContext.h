/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFacecastE2ELoggingExperimentContext : FBExperimentContext {

	long long _frameSampleInterval;
	BOOL _isViewSampled;
	long long _viewerSampleNum;
	BOOL _isBroadcastSampled;

}

@property (assign,nonatomic) long long frameSampleInterval;              //@synthesize frameSampleInterval=_frameSampleInterval - In the implementation block
@property (assign,nonatomic) BOOL isViewSampled;                         //@synthesize isViewSampled=_isViewSampled - In the implementation block
@property (assign,nonatomic) long long viewerSampleNum;                  //@synthesize viewerSampleNum=_viewerSampleNum - In the implementation block
@property (assign,nonatomic) BOOL isBroadcastSampled;                    //@synthesize isBroadcastSampled=_isBroadcastSampled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)frameSampleInterval;
-(BOOL)isBroadcastSampled;
-(BOOL)isViewSampled;
-(long long)viewerSampleNum;
-(void)setFrameSampleInterval:(long long)arg1 ;
-(void)setIsViewSampled:(BOOL)arg1 ;
-(void)setViewerSampleNum:(long long)arg1 ;
-(void)setIsBroadcastSampled:(BOOL)arg1 ;
@end
