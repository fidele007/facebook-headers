/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FBNearbyPlacesAdvancedFiltersState : NSObject <NSCopying> {

	BOOL _openNowFilter;
	NSString* _sortTypeTitle;
	long long _appliedFiltersCount;
	unsigned long long _sortType;
	NSSet* _pricesFilters;
	NSSet* _featuresFilters;
	NSString* _cuisineSemantic;

}

@property (nonatomic,copy,readonly) NSString * sortTypeTitle;                //@synthesize sortTypeTitle=_sortTypeTitle - In the implementation block
@property (nonatomic,readonly) long long appliedFiltersCount;                //@synthesize appliedFiltersCount=_appliedFiltersCount - In the implementation block
@property (nonatomic,readonly) unsigned long long sortType;                  //@synthesize sortType=_sortType - In the implementation block
@property (nonatomic,readonly) BOOL openNowFilter;                           //@synthesize openNowFilter=_openNowFilter - In the implementation block
@property (nonatomic,copy,readonly) NSSet * pricesFilters;                   //@synthesize pricesFilters=_pricesFilters - In the implementation block
@property (nonatomic,copy,readonly) NSSet * featuresFilters;                 //@synthesize featuresFilters=_featuresFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * cuisineSemantic;              //@synthesize cuisineSemantic=_cuisineSemantic - In the implementation block
+(id)defaultFiltersState;
+(unsigned long long)defaultSortType;
-(id)initWithSortType:(unsigned long long)arg1 filterMask:(unsigned long long)arg2 ;
-(void)_calculateAppliedFiltersCount;
-(id)initWithSortType:(unsigned long long)arg1 openNowFilter:(BOOL)arg2 pricesFilters:(id)arg3 featuresFilters:(id)arg4 cuisineSemantic:(id)arg5 ;
-(NSString *)cuisineSemantic;
-(unsigned long long)openNowFilterMaskValue;
-(NSString *)sortTypeTitle;
-(long long)appliedFiltersCount;
-(BOOL)openNowFilter;
-(NSSet *)pricesFilters;
-(NSSet *)featuresFilters;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)sortType;
@end
