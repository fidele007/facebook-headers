/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBValueObjectEither, AVAsset;

@interface FBVideoUploadSegmentData : FBValueObject <NSCopying, NSCoding> {

	FBValueObjectEither* _fileKey;
	unsigned long long _type;
	AVAsset* _asset;
	NSRange _range;

}

@property (nonatomic,copy,readonly) FBValueObjectEither * fileKey;              //@synthesize fileKey=_fileKey - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSRange range;                                   //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) AVAsset * asset;                            //@synthesize asset=_asset - In the implementation block
-(id)initWithFileKey:(id)arg1 type:(unsigned long long)arg2 range:(NSRange)arg3 asset:(id)arg4 ;
-(FBValueObjectEither *)fileKey;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSRange)range;
-(AVAsset *)asset;
@end

