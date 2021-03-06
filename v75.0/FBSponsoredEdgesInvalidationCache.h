/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableArray;

@interface FBSponsoredEdgesInvalidationCache : NSObject {

	long long _capacity;
	double _timeoutPeriod;
	long long _edgeSelectionSchema;
	NSMutableArray* _cachedSponsoredEdgeUnits;
	/*function pointer*/void* _currentDateFetcher;
	mutex _cacheContextLock;

}
-(void)_freshCache;
-(id)initWithCapacity:(long long)arg1 edgeSelectionSchema:(long long)arg2 timeoutPeriod:(double)arg3 currentDateFetcher:(/*function pointer*/void*)arg4 ;
-(void)appendSponsoredEdge:(id)arg1 ;
-(id)popSponsoredEdge;
@end

