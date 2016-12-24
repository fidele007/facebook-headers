/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMediaParallelUploadConfig : FBValueObject <NSCopying> {

	unsigned long long _maxUploadJobsInflight;
	unsigned long long _maxUploadJobsSending;

}

@property (nonatomic,readonly) unsigned long long maxUploadJobsInflight;              //@synthesize maxUploadJobsInflight=_maxUploadJobsInflight - In the implementation block
@property (nonatomic,readonly) unsigned long long maxUploadJobsSending;               //@synthesize maxUploadJobsSending=_maxUploadJobsSending - In the implementation block
-(unsigned long long)maxUploadJobsInflight;
-(unsigned long long)maxUploadJobsSending;
-(id)initWithMaxUploadJobsInflight:(unsigned long long)arg1 maxUploadJobsSending:(unsigned long long)arg2 ;
@end

