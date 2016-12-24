/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewSectionDataSource.h>
#import <Facebook/FBCollectionViewSectionDataSource.h>
#import <Facebook/FBHeadPublisherNuxTableViewCellDelegate.h>

@protocol FBTableViewMutating, FBCollectionViewMutating, FBHeadPublisherNuxDataSourceDelegate;
@class FBUserSession, FBHeadPublisherFeedNuxPresenter, NSAttributedString, NSString;

@interface FBHeadPublisherNuxDataSource : NSObject <FBTableViewSectionDataSource, FBCollectionViewSectionDataSource, FBHeadPublisherNuxTableViewCellDelegate> {

	FBUserSession* _session;
	double _tableViewWidth;
	double _cellHeight;
	long long _rowCount;
	long long _nuxScrolledAway;
	FBHeadPublisherFeedNuxPresenter* _nuxPresenter;
	BOOL _active;
	BOOL _feedIsEmpty;
	id<FBTableViewMutating> _tableViewMutator;
	id<FBCollectionViewMutating> _collectionViewMutator;
	NSAttributedString* _text;
	NSString* _nuxID;
	id<FBHeadPublisherNuxDataSourceDelegate> _delegate;

}

@property (assign,nonatomic) BOOL feedIsEmpty;                                                      //@synthesize feedIsEmpty=_feedIsEmpty - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                                      //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * nuxID;                                               //@synthesize nuxID=_nuxID - In the implementation block
@property (assign,nonatomic,__weak) id<FBHeadPublisherNuxDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;                              //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) id<FBCollectionViewMutating> collectionViewMutator;                    //@synthesize collectionViewMutator=_collectionViewMutator - In the implementation block
+(id)fetchMentionsFeedNuxDataSource:(id)arg1 ;
+(id)fetchNewsFeedNuxDataSource:(id)arg1 title:(id)arg2 ;
-(void)registerClassWithReuseIdentifier;
-(id<FBCollectionViewMutating>)collectionViewMutator;
-(void)setCollectionViewMutator:(id<FBCollectionViewMutating>)arg1 ;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(NSString *)nuxID;
-(void)setFeedIsEmpty:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 nuxPresenter:(id)arg2 ;
-(double)_cellHeightWithParentView:(id)arg1 ;
-(void)_setupCell:(id)arg1 withParentView:(id)arg2 ;
-(BOOL)feedIsEmpty;
-(void)dismissNuxButtonWasTapped:(id)arg1 ;
-(void)setDelegate:(id<FBHeadPublisherNuxDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBHeadPublisherNuxDataSourceDelegate>)delegate;
-(BOOL)isActive;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(NSAttributedString *)text;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setActive:(BOOL)arg1 ;
@end

