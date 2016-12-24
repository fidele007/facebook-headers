/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, FBAssetLocationInfo, NSDictionary;

@interface FBMagicStoryCollection : FBValueObject <NSCopying> {

	NSArray* _assets;
	NSString* _uniqueId;
	unsigned long long _type;
	FBAssetLocationInfo* _locationInfo;
	double _classifierScore;
	NSDictionary* _classifierLoggingData;

}

@property (nonatomic,copy,readonly) NSArray * assets;                                  //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueId;                               //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) FBAssetLocationInfo * locationInfo;                //@synthesize locationInfo=_locationInfo - In the implementation block
@property (nonatomic,readonly) double classifierScore;                                 //@synthesize classifierScore=_classifierScore - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * classifierLoggingData;              //@synthesize classifierLoggingData=_classifierLoggingData - In the implementation block
-(FBAssetLocationInfo *)locationInfo;
-(id)initWithAssets:(id)arg1 uniqueId:(id)arg2 type:(unsigned long long)arg3 locationInfo:(id)arg4 classifierScore:(double)arg5 classifierLoggingData:(id)arg6 ;
-(double)classifierScore;
-(NSDictionary *)classifierLoggingData;
-(unsigned long long)type;
-(NSString *)uniqueId;
-(NSArray *)assets;
@end

