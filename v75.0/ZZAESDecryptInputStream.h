/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSInputStream;

@interface ZZAESDecryptInputStream : NSInputStream {

	NSInputStream* _upstream;
	unsigned long long _status;
	unsigned _counterNonce[4];
	unsigned char _keystream[16];
	unsigned long long _keystreamPos;
	CCCryptorRef _aes;

}
-(id)initWithStream:(id)arg1 password:(id)arg2 header:(char*)arg3 strength:(unsigned char)arg4 error:(out id*)arg5 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)dealloc;
-(void)close;
-(void)open;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
@end

