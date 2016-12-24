/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageLogger.h>

@class NSMutableArray, FBPhotoAggregationKey, NSString, FBUserSession, NSArray;

@interface FBPhotoBlankTimeLogger : NSObject <FBWebImageLogger> {

	unsigned long long _state;
	unsigned long long _lastImageFlagLogged;
	unsigned long long _photoStartShowTime;
	NSMutableArray* _photoShowingStats;
	FBPhotoAggregationKey* _aggregationKey;
	NSString* _unitID;
	NSString* _module;
	BOOL _needsToLog;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	unsigned long long _samplingRate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBPhotoAggregationKey * aggregationKey;              //@synthesize aggregationKey=_aggregationKey - In the implementation block
@property (nonatomic,copy) NSString * module;                                     //@synthesize module=_module - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                               //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (assign,nonatomic) unsigned long long samplingRate;                     //@synthesize samplingRate=_samplingRate - In the implementation block
+(void)setUnitID:(id)arg1 forStoryDeduplicationKey:(id)arg2 session:(id)arg3 ;
+(id)getUnitIDForStoryDeduplicationKey:(id)arg1 session:(id)arg2 ;
-(NSString *)module;
-(NSArray *)trackingCodes;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(void)webImageViewLogImageWillShow:(id)arg1 ;
-(void)webImageView:(id)arg1 logImageDidShowWithURL:(id)arg2 withImageFlag:(unsigned long long)arg3 withImageWidth:(unsigned long long)arg4 isCached:(BOOL)arg5 completed:(BOOL)arg6 ;
-(void)webImageViewResetLog:(id)arg1 ;
-(void)webImageView:(id)arg1 logImageDidFailWithError:(id)arg2 URL:(id)arg3 ;
-(FBPhotoAggregationKey *)aggregationKey;
-(void)setAggregationKey:(FBPhotoAggregationKey *)arg1 ;
-(void)setModule:(NSString *)arg1 ;
-(unsigned long long)samplingRate;
-(void)setSamplingRate:(unsigned long long)arg1 ;
-(void)logPhotoWillShow;
-(void)logPhotoDidShowWithURL:(id)arg1 withImageFlag:(unsigned long long)arg2 withImageWidth:(unsigned long long)arg3 withRenderWidth:(unsigned long long)arg4 isCached:(BOOL)arg5 completed:(BOOL)arg6 ;
-(void)logPhotoDidFailWithError:(id)arg1 URL:(id)arg2 ;
-(void)reset;
-(id)initWithSession:(id)arg1 ;
@end

