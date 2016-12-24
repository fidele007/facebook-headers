/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface FBStoryStreamDataSourceUpdateInfo : FBValueObject <NSCopying> {

	BOOL _hasTrailingGap;
	BOOL _didInsertOrDeleteRow;
	BOOL _didInsertContentInTopRow;
	BOOL _didInsertNonShareOptimisticStory;
	unsigned long long _unreadCount;
	NSArray* _insertedMutationIdentifiers;
	NSDictionary* _insertedSources;

}

@property (nonatomic,readonly) unsigned long long unreadCount;                          //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,readonly) BOOL hasTrailingGap;                                     //@synthesize hasTrailingGap=_hasTrailingGap - In the implementation block
@property (nonatomic,readonly) BOOL didInsertOrDeleteRow;                               //@synthesize didInsertOrDeleteRow=_didInsertOrDeleteRow - In the implementation block
@property (nonatomic,readonly) BOOL didInsertContentInTopRow;                           //@synthesize didInsertContentInTopRow=_didInsertContentInTopRow - In the implementation block
@property (nonatomic,readonly) BOOL didInsertNonShareOptimisticStory;                   //@synthesize didInsertNonShareOptimisticStory=_didInsertNonShareOptimisticStory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * insertedMutationIdentifiers;              //@synthesize insertedMutationIdentifiers=_insertedMutationIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * insertedSources;                     //@synthesize insertedSources=_insertedSources - In the implementation block
-(NSArray *)insertedMutationIdentifiers;
-(BOOL)didInsertContentInTopRow;
-(BOOL)didInsertNonShareOptimisticStory;
-(BOOL)didInsertOrDeleteRow;
-(BOOL)hasTrailingGap;
-(id)initWithUnreadCount:(unsigned long long)arg1 hasTrailingGap:(BOOL)arg2 didInsertOrDeleteRow:(BOOL)arg3 didInsertContentInTopRow:(BOOL)arg4 didInsertNonShareOptimisticStory:(BOOL)arg5 insertedMutationIdentifiers:(id)arg6 insertedSources:(id)arg7 ;
-(NSDictionary *)insertedSources;
-(unsigned long long)unreadCount;
@end

