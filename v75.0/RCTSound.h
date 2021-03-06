/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface RCTSound : NSObject {

	BOOL _longForm;
	NSURL* _uri;
	unsigned long long _channel;

}

@property (nonatomic,readonly) NSURL * uri;                             //@synthesize uri=_uri - In the implementation block
@property (nonatomic,readonly) unsigned long long channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BOOL longForm;                           //@synthesize longForm=_longForm - In the implementation block
+(id)newWithUri:(id)arg1 channel:(unsigned long long)arg2 longForm:(BOOL)arg3 ;
-(BOOL)longForm;
-(id)description;
-(unsigned long long)channel;
-(NSURL *)uri;
@end

