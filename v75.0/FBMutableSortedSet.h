/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet;

@interface FBMutableSortedSet : NSObject <NSFastEnumeration> {

	/*^block*/id _comparator;
	NSMutableOrderedSet* _orderedSet;

}

@property (nonatomic,copy) NSMutableOrderedSet * orderedSet;              //@synthesize orderedSet=_orderedSet - In the implementation block
+(id)sortedSetWithComparator:(/*^block*/id)arg1 ;
-(id)popLastObject;
-(unsigned long long)indexOfObjectComparedSameTo:(id)arg1 ;
-(id)objectComparedSameTo:(id)arg1 ;
-(id)popFirstObject;
-(void)setOrderedSet:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB467*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)orderedSet;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end

