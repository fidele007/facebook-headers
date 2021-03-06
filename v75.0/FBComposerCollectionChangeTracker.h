/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBComposerCollectionChangeTracker : NSObject {

	NSMutableArray* _items;
	NSMutableArray* _insertions;
	NSMutableArray* _removals;
	NSMutableArray* _updates;
	unsigned long long _currentItemIndexInPreviousItems;

}

@property (nonatomic,readonly) NSMutableArray * items;                                        //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * insertions;                                   //@synthesize insertions=_insertions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * removals;                                     //@synthesize removals=_removals - In the implementation block
@property (nonatomic,readonly) NSMutableArray * updates;                                      //@synthesize updates=_updates - In the implementation block
@property (assign,nonatomic) unsigned long long currentItemIndexInPreviousItems;              //@synthesize currentItemIndexInPreviousItems=_currentItemIndexInPreviousItems - In the implementation block
-(NSMutableArray *)insertions;
-(NSMutableArray *)removals;
-(unsigned long long)currentItemIndexInPreviousItems;
-(id)initWithItems:(id)arg1 insertions:(id)arg2 updates:(id)arg3 removals:(id)arg4 currentItemIndexInPreviousItems:(unsigned long long)arg5 ;
-(void)setCurrentItemIndexInPreviousItems:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)items;
-(NSMutableArray *)updates;
@end

