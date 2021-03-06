/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>
#import <Facebook/FBNetworkCDNRequestProtocol.h>

@class NSURL, NSString;

@interface FBNetworkerRangeRequest : FBNetworkerRequest <FBNetworkCDNRequestProtocol> {

	BOOL _enabledCacheStatusQuery;
	unsigned long long _offset;
	unsigned long long _length;
	NSURL* _URL;

}

@property (nonatomic,readonly) unsigned long long offset;               //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long length;               //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabledCacheStatusQuery;              //@synthesize enabledCacheStatusQuery=_enabledCacheStatusQuery - In the implementation block
-(id)networkRequest;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(BOOL)enabledCacheStatusQuery;
-(void)setEnabledCacheStatusQuery:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(NSURL *)URL;
-(unsigned long long)offset;
@end

