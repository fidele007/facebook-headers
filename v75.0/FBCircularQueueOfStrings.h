/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBCircularQueueOfStrings : NSObject {

	NSMutableArray* _strings;
	unsigned long long _size;
	BOOL _truncated;
	unsigned long long _capacity;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
-(id)stringWithTruncationPrefix:(id)arg1 ;
-(void)setCapacity:(unsigned long long)arg1 ;
-(id)init;
-(void)reset;
-(unsigned long long)capacity;
-(void)add:(id)arg1 ;
@end
