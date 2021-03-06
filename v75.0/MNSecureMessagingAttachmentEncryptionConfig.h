/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MNSecureMessagingAttachmentEncryptionConfig : FBValueObject <NSCoding, NSCopying> {

	NSData* _key;
	NSData* _iv;

}

@property (nonatomic,copy,readonly) NSData * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSData * iv;               //@synthesize iv=_iv - In the implementation block
-(id)initWithKey:(id)arg1 iv:(id)arg2 ;
-(NSData *)iv;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)key;
@end

