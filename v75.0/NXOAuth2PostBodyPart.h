/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSInputStream;

@interface NXOAuth2PostBodyPart : NSObject {

	NSString* contentHeaders;
	NSInputStream* contentStream;
	unsigned long long contentLength;

}

@property (nonatomic,readonly) NSString * contentHeaders; 
@property (nonatomic,readonly) NSInputStream * contentStream; 
@property (nonatomic,readonly) unsigned long long contentLength; 
+(id)partWithName:(id)arg1 content:(id)arg2 ;
-(id)initWithName:(id)arg1 stringContent:(id)arg2 ;
-(id)initWithName:(id)arg1 fileContent:(id)arg2 ;
-(id)initWithName:(id)arg1 dataContent:(id)arg2 ;
-(id)initWithName:(id)arg1 streamContent:(id)arg2 streamLength:(unsigned long long)arg3 fileName:(id)arg4 contentType:(id)arg5 ;
-(id)initWithHeaders:(id)arg1 streamContent:(id)arg2 length:(unsigned long long)arg3 ;
-(id)initWithHeaders:(id)arg1 dataContent:(id)arg2 ;
-(id)initWithName:(id)arg1 streamContent:(id)arg2 streamLength:(unsigned long long)arg3 fileName:(id)arg4 ;
-(id)initWithName:(id)arg1 content:(id)arg2 ;
-(NSString *)contentHeaders;
-(NSInputStream *)contentStream;
-(unsigned long long)contentLength;
@end
