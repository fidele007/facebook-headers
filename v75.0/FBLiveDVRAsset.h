/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoAsset.h>

@class NSString, FBVideoAssetEdits, NSArray;

@interface FBLiveDVRAsset : FBVideoAsset {

	NSString* _broadcastID;
	unsigned long long _assetFileSize;
	FBVideoAssetEdits* _edits;
	NSArray* _urls;

}

@property (nonatomic,copy,readonly) NSArray * urls;                      //@synthesize urls=_urls - In the implementation block
@property (nonatomic,copy,readonly) NSString * broadcastID; 
-(id)edits;
-(void)fetchAssetURLToLoadWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)is360;
-(id)initWithURLs:(id)arg1 broadcastID:(id)arg2 edits:(id)arg3 ;
-(double)bitrateInKbps;
-(unsigned long long)assetFileSize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_FB100)duration;
-(void)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)metadata;
-(NSArray *)urls;
-(NSString *)broadcastID;
-(CGSize)resolution;
@end

