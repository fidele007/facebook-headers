/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface FBCollectionImagePrefetcherSpecifier : NSObject {

	BOOL _streaming;
	NSURL* _url;
	unsigned long long _desiredImageFlag;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL streaming;                                   //@synthesize streaming=_streaming - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredImageFlag;              //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
-(id)initWithUrl:(id)arg1 streaming:(BOOL)arg2 desiredImageFlag:(unsigned long long)arg3 ;
-(unsigned long long)desiredImageFlag;
-(NSURL *)url;
-(BOOL)streaming;
-(id)uniqueKey;
@end

