/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBScenePath, NSString, FBPhotoAggregationKey;

@interface FBPhotoComponentViewAttributes : NSObject {

	BOOL _renderShadow;
	FBScenePath* _scenePath;
	NSString* _module;
	FBPhotoAggregationKey* _aggregationKey;
	unsigned long long _imageFlags;
	double _minAspectRatio;
	double _maxAspectRatio;
	NSString* _accessibilityLabel;

}

@property (nonatomic,readonly) FBScenePath * scenePath;                             //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) BOOL renderShadow;                                   //@synthesize renderShadow=_renderShadow - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                              //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) FBPhotoAggregationKey * aggregationKey;              //@synthesize aggregationKey=_aggregationKey - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlags;                       //@synthesize imageFlags=_imageFlags - In the implementation block
@property (nonatomic,readonly) double minAspectRatio;                               //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (nonatomic,readonly) double maxAspectRatio;                               //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                           //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4 ;
+(id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4 imageFlags:(unsigned long long)arg5 ;
+(id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4 imageFlags:(unsigned long long)arg5 minAspectRatio:(double)arg6 maxAspectRatio:(double)arg7 ;
-(NSString *)module;
-(FBScenePath *)scenePath;
-(BOOL)renderShadow;
-(unsigned long long)imageFlags;
-(FBPhotoAggregationKey *)aggregationKey;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(double)minAspectRatio;
-(double)maxAspectRatio;
@end

