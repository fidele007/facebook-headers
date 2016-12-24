/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBMemoryProfilerOptions : NSObject {

	unsigned long long _sortingMode;
	unsigned long long _sortingOrder;
	NSArray* _plugins;

}

@property (nonatomic,readonly) unsigned long long sortingMode;               //@synthesize sortingMode=_sortingMode - In the implementation block
@property (nonatomic,readonly) unsigned long long sortingOrder;              //@synthesize sortingOrder=_sortingOrder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * plugins;                       //@synthesize plugins=_plugins - In the implementation block
-(unsigned long long)sortingOrder;
-(id)initWithSortingMode:(unsigned long long)arg1 sortingOrder:(unsigned long long)arg2 plugins:(id)arg3 ;
-(unsigned long long)sortingMode;
-(NSArray *)plugins;
@end

