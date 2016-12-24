/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface FBCryptography : NSObject {

	NSData* _encryptionKeyData;
	NSData* _macKeyData;

}
+(id)randomBytes:(unsigned long long)arg1 ;
+(id)makeMasterKey;
-(id)initWithMasterKey:(id)arg1 ;
-(id)encrypt:(id)arg1 additionalDataToSign:(id)arg2 ;
-(id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3 ;
-(id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2 ;
-(id)decrypt:(id)arg1 additionalSignedData:(id)arg2 ;
-(void)dealloc;
@end

