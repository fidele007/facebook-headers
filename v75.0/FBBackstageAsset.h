/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBDisplayableMedia.h>
#import <Facebook/FBBackstageConsumptionProtocol.h>

@protocol FBAssetProtocol;
@class NSString, CLLocation, NSDate;

@interface FBBackstageAsset : NSObject <FBDisplayableMedia, FBBackstageConsumptionProtocol> {

	BOOL _useLocationWhenPosting;
	id<FBAssetProtocol> _asset;
	NSString* _caption;
	NSString* _message;
	NSString* _locationString;
	CLLocation* _location;

}

@property (nonatomic,readonly) id<FBAssetProtocol> asset;                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned long long assetType; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,copy) NSString * caption;                            //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) CGSize mediaSize; 
@property (nonatomic,copy) NSString * locationString;                     //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,retain) CLLocation * location;                       //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL useLocationWhenPosting;                 //@synthesize useLocationWhenPosting=_useLocationWhenPosting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cleanVideoAssetsCacheWithURLsOfCurrentAssets:(id)arg1 ;
+(BOOL)assetTakenWithCameraWithURL:(id)arg1 ;
-(NSString *)assetID;
-(unsigned long long)seenByCount;
-(BOOL)hasItemBeenReactedToByPerson:(id)arg1 ;
-(long long)timezoneOffsetSecondsValue;
-(BOOL)wasSeenByPerson:(id)arg1 ;
-(id)mediaID;
-(CGSize)mediaSize;
-(void)_replaceTempAssetWithAssetWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheVideoAssetURL:(id)arg1 ;
-(void)fetchFullResolutionImage:(/*^block*/id)arg1 ;
-(void)saveToCameraRollWithCompletion:(/*^block*/id)arg1 ;
-(id)seenByPersons;
-(BOOL)useLocationWhenPosting;
-(void)setUseLocationWhenPosting:(BOOL)arg1 ;
-(unsigned long long)assetType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(id)time;
-(void)setMessage:(NSString *)arg1 ;
-(id)owner;
-(CLLocation *)location;
-(id)initWithAsset:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id<FBAssetProtocol>)asset;
-(void)setLocationString:(NSString *)arg1 ;
-(NSString *)locationString;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(id)thumbnailURL;
-(id)thumbnailImage;
-(long long)mediaType;
-(double)aspectRatio;
-(NSDate *)creationDate;
-(id)locationText;
-(id)media;
@end

