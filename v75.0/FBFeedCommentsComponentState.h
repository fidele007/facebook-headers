/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBFeedCommentsComponentState : NSObject <NSCopying> {

	NSArray* _preloadedComments;
	BOOL _isLoading;
	NSArray* _comments;
	unsigned long long _seeMoreCount;

}

@property (nonatomic,copy,readonly) NSArray * comments;                      //@synthesize comments=_comments - In the implementation block
@property (nonatomic,readonly) unsigned long long seeMoreCount;              //@synthesize seeMoreCount=_seeMoreCount - In the implementation block
@property (nonatomic,readonly) BOOL isLoading;                               //@synthesize isLoading=_isLoading - In the implementation block
+(id)newWithPreloadedComments:(id)arg1 seeMoreCount:(unsigned long long)arg2 ;
-(id)stateByUpdatingIsLoading:(BOOL)arg1 ;
-(id)stateByUpdatingComments:(id)arg1 seeMoreCount:(unsigned long long)arg2 ;
-(unsigned long long)seeMoreCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLoading;
-(NSArray *)comments;
@end

