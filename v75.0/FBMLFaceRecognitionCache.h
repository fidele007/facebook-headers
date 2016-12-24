/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface FBMLFaceRecognitionCache : NSObject <NSCoding> {

	NSDictionary* _recognitionResultSetByAssetIdentifier;
	NSDictionary* _uuidSetByAssetIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * recognitionResultSetByAssetIdentifier;              //@synthesize recognitionResultSetByAssetIdentifier=_recognitionResultSetByAssetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uuidSetByAssetIdentifier;                           //@synthesize uuidSetByAssetIdentifier=_uuidSetByAssetIdentifier - In the implementation block
+(id)cacheFromExistingCache:(id)arg1 mergingRecognitionResultSetByAssetIdentifier:(id)arg2 ;
-(NSDictionary *)uuidSetByAssetIdentifier;
-(id)initWithRecognitionResultSetByAssetIdentifier:(id)arg1 ;
-(NSDictionary *)recognitionResultSetByAssetIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

