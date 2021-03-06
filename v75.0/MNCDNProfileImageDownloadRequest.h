/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class MNCDNProfileImageRequestFbId, NSSet, NSObject;

@interface MNCDNProfileImageDownloadRequest : FBValueObject <NSCopying> {

	MNCDNProfileImageRequestFbId* _fbid;
	unsigned long long _size;
	long long _priority;
	NSSet* _analyticsTags;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,copy,readonly) MNCDNProfileImageRequestFbId * fbid;                //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) long long priority;                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSSet * analyticsTags;                              //@synthesize analyticsTags=_analyticsTags - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) id successBlock;                                         //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id failureBlock;                                         //@synthesize failureBlock=_failureBlock - In the implementation block
-(MNCDNProfileImageRequestFbId *)fbid;
-(id)successBlock;
-(NSSet *)analyticsTags;
-(id)initWithFbid:(id)arg1 size:(unsigned long long)arg2 priority:(long long)arg3 analyticsTags:(id)arg4 callbackQueue:(id)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(unsigned long long)size;
-(long long)priority;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)failureBlock;
@end

