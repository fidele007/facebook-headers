/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSMutableSet, NSByteCountFormatter, UIFont, FBRetainCycleAnalysisCache, NSString;

@interface FBMemoryProfilerDataSource : NSObject <UITableViewDataSource> {

	NSArray* _data;
	NSArray* _filtered;
	NSMutableSet* _expandedSection;
	NSByteCountFormatter* _byteCountFormatter;
	UIFont* _font;
	FBRetainCycleAnalysisCache* _analysisCache;
	NSString* _classFilter;
	unsigned long long _sortingMode;
	unsigned long long _sortingOrder;

}

@property (nonatomic,copy) NSString * classFilter;                         //@synthesize classFilter=_classFilter - In the implementation block
@property (assign,nonatomic) unsigned long long sortingMode;               //@synthesize sortingMode=_sortingMode - In the implementation block
@property (assign,nonatomic) unsigned long long sortingOrder;              //@synthesize sortingOrder=_sortingOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSectionExpanded:(long long)arg1 ;
-(void)refilter;
-(id)_colorForAnalysisStatus:(unsigned long long)arg1 ;
-(id)_sortArray:(id)arg1 withKey:(id)arg2 ;
-(id)_refilterSectionAtIndex:(long long)arg1 ;
-(id)initWithAnalysisCache:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 forSection:(long long)arg2 ;
-(void)forceDataReload;
-(id)summaryForSection:(long long)arg1 ;
-(void)setClassFilter:(NSString *)arg1 ;
-(void)setSortingOrder:(unsigned long long)arg1 ;
-(id)classNamesForSection:(long long)arg1 ;
-(NSString *)classFilter;
-(unsigned long long)sortingOrder;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSortingMode:(unsigned long long)arg1 ;
-(unsigned long long)sortingMode;
@end

