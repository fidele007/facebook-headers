/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPage, NSString;

@interface FBPTState : NSObject <NSCopying> {

	unsigned long long _signal;
	unsigned long long _confidence;
	FBMemPage* _page;
	NSString* _loggingID;
	NSString* _sessionID;
	NSString* _reactionCacheKey;

}

@property (nonatomic,readonly) unsigned long long signal;                     //@synthesize signal=_signal - In the implementation block
@property (nonatomic,readonly) unsigned long long confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) FBMemPage * page;                              //@synthesize page=_page - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingID;                     //@synthesize loggingID=_loggingID - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * reactionCacheKey;              //@synthesize reactionCacheKey=_reactionCacheKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface; 
-(NSString *)reactionCacheKey;
-(BOOL)isPushState;
-(id)initWithSignal:(unsigned long long)arg1 confidence:(unsigned long long)arg2 page:(id)arg3 loggingID:(id)arg4 sessionID:(id)arg5 reactionCacheKey:(id)arg6 ;
-(BOOL)supersedesState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBMemPage *)page;
-(unsigned long long)signal;
-(unsigned long long)confidence;
-(NSString *)sessionID;
-(NSString *)loggingID;
-(NSString *)surface;
@end

