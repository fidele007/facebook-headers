/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionAbstractViewController.h>

@class FBMemTimelineAppSection, FBMemTimelineAppCollection, NSOrderedSet;

@interface FBCollectionPerCollectionViewController : FBCollectionAbstractViewController {

	FBMemTimelineAppSection* _section;
	FBMemTimelineAppCollection* _collection;
	NSOrderedSet* _items;

}
-(id)analyticsModule;
-(id)initWithSession:(id)arg1 ownerFBID:(id)arg2 collection:(id)arg3 inCollectionSection:(id)arg4 ;
-(BOOL)supportsPaging;
-(double)scrollBufferFactor;
-(id)headerSection;
-(id)collectionForTableSection:(long long)arg1 ;
-(id)collectionItemsForCollection:(id)arg1 ;
-(id)collectionSectionForTableSection:(long long)arg1 ;
-(unsigned long long)maxItemsToShowForCollectionStyle:(id)arg1 ;
-(BOOL)shouldShowEmptyState;
-(id)newQueryWithPageInfo:(id)arg1 ;
-(id)queryForProfileSections;
-(void)handleBootstrapResponse:(id)arg1 error:(id)arg2 ;
-(id)viewEventLogData;
-(id)connectionKeypath;
-(void)updateWithConnectionNodes:(id)arg1 ;
-(unsigned long long)numberOfTableSections;
-(id)headerTitleForTableSection:(long long)arg1 ;
-(id)headerSubtitleForTableSection:(long long)arg1 ;
-(BOOL)canExpandSections;
-(id)destinationURLForTableSection:(long long)arg1 ;
-(id)logoURLForTableSection:(long long)arg1 ;
-(unsigned long long)_numberOfCollectionItemsPerPage;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

