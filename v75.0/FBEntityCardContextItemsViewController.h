/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Facebook/FBLongTextExpandableViewDelegate.h>
#import <Facebook/FBEntityCardPagesContextItemsHelperDelegate.h>

@protocol FBEntityCardContextItemsViewControllerDelegateProtocol, FBQueriedNodeFieldsProtocol, FBEntityCardContextItemsLoggerProtocol, FBEntityCardContextItemsExtraLoggerDelegateProtocol;
@class FBUserSession, NSArray, FBMemModelObject, UIImageView, FBLoadingIndicatorView, NSMutableSet, FBPopoverActionSheet, FBActionSheetButtonItem, FBFeedToolbox, FBConsistentLookasideCacheObservationHandle, FBLongTextExpandableCell, NSAttributedString, UITableViewCell, FBEntityCardComponentCell, NSString;

@interface FBEntityCardContextItemsViewController : UITableViewController <FBLongTextExpandableViewDelegate, FBEntityCardPagesContextItemsHelperDelegate> {

	id<FBEntityCardContextItemsViewControllerDelegateProtocol> _delegate;
	FBUserSession* _session;
	NSArray* _contextItems;
	FBMemModelObject*<FBQueriedNodeFieldsProtocol> _entity;
	unsigned long long _surface;
	unsigned long long _initialContextItemCount;
	BOOL _hasNextPage;
	BOOL _isFIGUIEnabled;
	UIImageView* _moreImageView;
	FBLoadingIndicatorView* _loadingIndicatorView;
	unsigned long long _indexToStartImpressionLogging;
	NSMutableSet* _hiddenItems;
	FBPopoverActionSheet* _moreInfoPopover;
	FBActionSheetButtonItem* _onlyPageAdmins;
	FBActionSheetButtonItem* _respondTo;
	FBActionSheetButtonItem* _learnMoreLink;
	FBFeedToolbox* _toolbox;
	FBConsistentLookasideCacheObservationHandle* _menuInfoCLCHandle;
	id<FBEntityCardContextItemsLoggerProtocol> _logger;
	FBLongTextExpandableCell* _descriptionCell;
	NSAttributedString* _longDescription;
	UITableViewCell* _expandCell;
	FBEntityCardComponentCell* _componentExpandCell;
	BOOL _isSelected;
	id<FBEntityCardContextItemsExtraLoggerDelegateProtocol> _extraLoggerDelegate;

}

@property (nonatomic,readonly) FBLongTextExpandableCell * descriptionCell; 
@property (assign,nonatomic,__weak) id<FBEntityCardContextItemsNavigationHandlerProtocol> navigationHandler; 
@property (assign,nonatomic) BOOL isSelected;                                                                                 //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic,__weak) id<FBEntityCardContextItemsExtraLoggerDelegateProtocol> extraLoggerDelegate;              //@synthesize extraLoggerDelegate=_extraLoggerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithSession:(id)arg1 entityType:(id)arg2 surface:(unsigned long long)arg3 initialContextItemCount:(long long)arg4 navigationHandler:(id)arg5 entityCardAnalytics:(id)arg6 toolbox:(id)arg7 ;
-(BOOL)configureWithEntity:(id)arg1 entityCardContextItems:(id)arg2 hasNextPage:(BOOL)arg3 enforceRefresh:(BOOL)arg4 ;
-(void)hideContextRowWithType:(id)arg1 ;
-(void)tappedURL:(id)arg1 ;
-(void)setExtraLoggerDelegate:(id<FBEntityCardContextItemsExtraLoggerDelegateProtocol>)arg1 ;
-(void)configureWithEntity:(id)arg1 addEntityCardContextItems:(id)arg2 ;
-(id)moreInfoPopover;
-(void)_setupPageMenuCLCObserver:(id)arg1 oldPage:(id)arg2 ;
-(BOOL)_updatedEntity:(id)arg1 oldEntity:(id)arg2 ;
-(void)logImpressionsIfNeeded;
-(void)setNavigationHandler:(id<FBEntityCardContextItemsNavigationHandlerProtocol>)arg1 ;
-(id<FBEntityCardContextItemsNavigationHandlerProtocol>)navigationHandler;
-(void)_popoverTapAction;
-(BOOL)_isExpandCellRow:(long long)arg1 ;
-(id)expandCell;
-(id)_entityCardModelWithContextItem:(id)arg1 overallRating:(double)arg2 ;
-(void)_showMoreInfoPopover:(id)arg1 ;
-(id)_seeMoreItemModelWithShowLoadingIndicator:(BOOL)arg1 ;
-(void)_handleExpandRowTap;
-(void)_didTapContextItemAtPosition:(unsigned long long)arg1 ;
-(void)_consistentMenuFieldDidChange:(id)arg1 ;
-(BOOL)_shouldShowExpandCell;
-(unsigned long long)_findContextItemOfType:(id)arg1 ;
-(id<FBEntityCardContextItemsExtraLoggerDelegateProtocol>)extraLoggerDelegate;
-(id)_decoratedAttributedStringWithAttributedString:(id)arg1 textFont:(id)arg2 textColor:(CGColorRef)arg3 tagFont:(id)arg4 tagColor:(CGColorRef)arg5 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setLongDescription:(id)arg1 ;
-(FBLongTextExpandableCell *)descriptionCell;
@end

