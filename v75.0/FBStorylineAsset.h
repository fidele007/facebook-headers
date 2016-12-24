/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, FBStorylineImage, NSArray, NSDictionary, NSDate;


@protocol FBStorylineAsset <NSObject>
@property (nonatomic,copy,readonly) NSString * assetId; 
@property (nonatomic,copy,readonly) NSString * originalAssetId; 
@property (nonatomic,readonly) BOOL isLocalAsset; 
@property (nonatomic,copy,readonly) NSNumber * width; 
@property (nonatomic,copy,readonly) NSNumber * height; 
@property (nonatomic,copy,readonly) FBStorylineImage * image; 
@property (nonatomic,copy,readonly) FBStorylineImage * lowResImage; 
@property (nonatomic,copy,readonly) FBStorylineImage * highResImage; 
@property (nonatomic,copy,readonly) NSArray * faceboxes; 
@property (nonatomic,copy,readonly) NSDictionary * faceboxRect; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * thumbnailURL; 
@required
-(FBStorylineImage *)lowResImage;
-(NSArray *)faceboxes;
-(BOOL)isLocalAsset;
-(BOOL)isEqualToStorylineAsset:(id)arg1;
-(FBStorylineImage *)highResImage;
-(NSString *)originalAssetId;
-(NSString *)assetId;
-(NSDictionary *)faceboxRect;
-(NSDate *)date;
-(FBStorylineImage *)image;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSString *)thumbnailURL;

@end
