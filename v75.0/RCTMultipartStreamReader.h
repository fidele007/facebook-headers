/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInputStream, NSString;

@interface RCTMultipartStreamReader : NSObject {

	NSInputStream* _stream;
	NSString* _boundary;

}
-(id)initWithInputStream:(id)arg1 boundary:(id)arg2 ;
-(BOOL)readAllParts:(/*^block*/id)arg1 ;
-(id)parseHeaders:(id)arg1 ;
-(void)emitChunk:(id)arg1 callback:(/*^block*/id)arg2 done:(BOOL)arg3 ;
@end

