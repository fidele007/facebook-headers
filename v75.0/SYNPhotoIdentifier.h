/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYNPhotoIdentifier : NSObject <NSCopying> {

	NSString* _cloudUUID;
	NSString* _assetIdentifier;
	NSString* _shoeboxPhotoFBID;

}

@property (nonatomic,copy,readonly) NSString * cloudUUID;                     //@synthesize cloudUUID=_cloudUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetIdentifier;               //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * shoeboxPhotoFBID;              //@synthesize shoeboxPhotoFBID=_shoeboxPhotoFBID - In the implementation block
-(NSString *)cloudUUID;
-(NSString *)assetIdentifier;
-(NSString *)shoeboxPhotoFBID;
-(id)initWithCloudUUID:(id)arg1 assetIdentifier:(id)arg2 shoeboxPhotoFBID:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
