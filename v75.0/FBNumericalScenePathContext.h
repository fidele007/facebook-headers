/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBScenePathContext.h>

@class NSMapTable;

@interface FBNumericalScenePathContext : FBScenePathContext {

	NSMapTable* _indexToPath;
	NSMapTable* _indexToHolder;
	unordered_map<unsigned long, unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* _pathToIndex;
	unsigned long long _maxRelevantSiblingDistance;
	mutex _lock;

}
-(id)initWithRootView:(id)arg1 delegate:(id)arg2 maxRelevantSiblingDistance:(unsigned long long)arg3 ;
-(void)updateActiveIndex:(unsigned long long)arg1 ;
-(id)pathForIndex:(unsigned long long)arg1 ;
-(id)_holderForIndex:(unsigned long long)arg1 ;
-(void)invalidateIndex:(unsigned long long)arg1 ;
-(float)distanceBetweenChildPath:(unsigned long long)arg1 andSibling:(unsigned long long)arg2 ;
@end

