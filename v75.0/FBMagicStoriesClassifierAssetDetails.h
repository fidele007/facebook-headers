/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber;

@interface FBMagicStoriesClassifierAssetDetails : FBValueObject <NSCopying> {

	NSString* _assetID;
	NSString* _assetType;
	NSDate* _creationDate;
	double _pixelWidth;
	double _pixelHeight;
	double _latitude;
	double _longitude;
	double _videoDuration;
	NSDate* _modificationDate;
	NSNumber* _isFavorite;
	NSNumber* _isHidden;
	NSNumber* _mediaSubtypes;
	NSNumber* _sourceType;
	NSNumber* _blurrinessMetric;
	NSNumber* _darknessMetric;

}

@property (nonatomic,copy,readonly) NSString * assetID;                       //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetType;                     //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) double pixelWidth;                             //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) double pixelHeight;                            //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double videoDuration;                          //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isFavorite;                    //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isHidden;                      //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mediaSubtypes;                 //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sourceType;                    //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * blurrinessMetric;              //@synthesize blurrinessMetric=_blurrinessMetric - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * darknessMetric;                //@synthesize darknessMetric=_darknessMetric - In the implementation block
-(NSString *)assetID;
-(NSNumber *)blurrinessMetric;
-(NSNumber *)darknessMetric;
-(id)initWithAssetID:(id)arg1 assetType:(id)arg2 creationDate:(id)arg3 pixelWidth:(double)arg4 pixelHeight:(double)arg5 latitude:(double)arg6 longitude:(double)arg7 videoDuration:(double)arg8 modificationDate:(id)arg9 isFavorite:(id)arg10 isHidden:(id)arg11 mediaSubtypes:(id)arg12 sourceType:(id)arg13 blurrinessMetric:(id)arg14 darknessMetric:(id)arg15 ;
-(NSString *)assetType;
-(NSNumber *)isHidden;
-(NSDate *)modificationDate;
-(NSNumber *)sourceType;
-(double)videoDuration;
-(NSNumber *)isFavorite;
-(double)pixelWidth;
-(double)pixelHeight;
-(NSDate *)creationDate;
-(NSNumber *)mediaSubtypes;
-(double)latitude;
-(double)longitude;
@end

