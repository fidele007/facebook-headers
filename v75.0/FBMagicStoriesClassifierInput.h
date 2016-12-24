/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBAssetLocationInfo, FBMagicStoryCollectionAssetCounts, NSArray;

@interface FBMagicStoriesClassifierInput : FBValueObject <NSCopying> {

	NSString* _collectionID;
	double _timeSinceStory;
	FBAssetLocationInfo* _locationInfo;
	FBMagicStoryCollectionAssetCounts* _assetCounts;
	unsigned long long _collectionType;
	NSArray* _assetDetails;
	NSArray* _duplicateInfos;

}

@property (nonatomic,copy,readonly) NSString * collectionID;                                      //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,readonly) double timeSinceStory;                                             //@synthesize timeSinceStory=_timeSinceStory - In the implementation block
@property (nonatomic,copy,readonly) FBAssetLocationInfo * locationInfo;                           //@synthesize locationInfo=_locationInfo - In the implementation block
@property (nonatomic,copy,readonly) FBMagicStoryCollectionAssetCounts * assetCounts;              //@synthesize assetCounts=_assetCounts - In the implementation block
@property (nonatomic,readonly) unsigned long long collectionType;                                 //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetDetails;                                       //@synthesize assetDetails=_assetDetails - In the implementation block
@property (nonatomic,copy,readonly) NSArray * duplicateInfos;                                     //@synthesize duplicateInfos=_duplicateInfos - In the implementation block
-(NSArray *)assetDetails;
-(FBAssetLocationInfo *)locationInfo;
-(id)initWithCollectionID:(id)arg1 timeSinceStory:(double)arg2 locationInfo:(id)arg3 assetCounts:(id)arg4 collectionType:(unsigned long long)arg5 assetDetails:(id)arg6 duplicateInfos:(id)arg7 ;
-(double)timeSinceStory;
-(FBMagicStoryCollectionAssetCounts *)assetCounts;
-(unsigned long long)collectionType;
-(NSArray *)duplicateInfos;
-(NSString *)collectionID;
@end

