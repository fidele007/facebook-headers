/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsComposerHostsViewControllerDelegate.h>
#import <Facebook/FBEventsComposerFieldControllerProtocol.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBQueriedActorFieldsProtocol, FBEventsComposerFieldControllerDelegate;
@class FBUserSession, FBEventAnalyticTracker, UICollectionViewCell, FBMemModelObject, FBMemPage, NSString, FBItemView, FBEventsComposerHostsViewController, NSMutableArray, NSMutableDictionary, NSDate;

@interface FBEventsComposerHostFieldController : NSObject <FBEventsComposerHostsViewControllerDelegate, FBEventsComposerFieldControllerProtocol, UITableViewDataSource> {

	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	UICollectionViewCell* _hostCell;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _viewerActor;
	FBMemPage* _initialSelectedPage;
	FBMemPage* _selectedPage;
	BOOL _readOnly;
	NSString* _selectedHostTitle;
	FBItemView* _selectedHostItemView;
	FBEventsComposerHostsViewController* _hostsViewController;
	NSMutableArray* _pages;
	FBItemView* _viewerActorItemView;
	NSMutableDictionary* _pageToItemViews;
	id _pageHostsDownloadRequest;
	NSMutableArray* _categoryGroupLabels;
	NSMutableDictionary* _categoryGroupLabelToCategories;
	id _pageEventCategoriesDownloadRequest;
	id<FBEventsComposerFieldControllerDelegate> _delegate;
	unsigned long long _fieldType;
	NSDate* _fieldValue;

}

@property (assign,nonatomic,__weak) id<FBEventsComposerFieldControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long fieldType;                                             //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,retain) NSDate * fieldValue;                                                      //@synthesize fieldValue=_fieldValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_downloadPageHosts;
-(void)_handleDownloadedPageHostsResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)hasChanged;
-(id)partialEventCreateInputDataSet;
-(id)partialEventEditInputDataSet;
-(double)heightForItemCellInCollectionView:(id)arg1 ;
-(void)didSelectCellAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(id)cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(void)registerCellsWithCollectionView:(id)arg1 ;
-(void)_configureHost;
-(void)_downloadPageEventCategories;
-(id)_itemViewWithImageURL:(id)arg1 title:(id)arg2 showHostSubtitle:(BOOL)arg3 showDisclosure:(BOOL)arg4 ;
-(void)_handleDownloadedPageEventCategoriesResponse:(id)arg1 error:(id)arg2 ;
-(void)didCancelWithHostViewController:(id)arg1 ;
-(void)hostViewController:(id)arg1 didFinishWithPickedIndexPath:(id)arg2 ;
-(id)initWithViewerActor:(id)arg1 selectedPage:(id)arg2 session:(id)arg3 tracker:(id)arg4 ;
-(void)setViewerActor:(id)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setDelegate:(id<FBEventsComposerFieldControllerDelegate>)arg1 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBEventsComposerFieldControllerDelegate>)delegate;
-(void)setSelectedPage:(id)arg1 ;
-(void)setFieldValue:(NSDate *)arg1 ;
-(NSDate *)fieldValue;
-(unsigned long long)fieldType;
-(void)setFieldType:(unsigned long long)arg1 ;
@end

