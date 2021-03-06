/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBPrivacyDataSourceWithObjects.h>

@protocol FBComposerAudienceCustomPrivacyDataSourceDelegate, FBTableViewMutating;
@class NSOrderedSet, FBUserSession, NSString, FBTypedNSArrayOfFBComposerPrivacySetting;

@interface FBComposerAudienceCustomPrivacyMemDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, FBPrivacyDataSourceWithObjects> {

	NSOrderedSet* _filteredFriendLists;
	NSOrderedSet* _friendLists;
	FBUserSession* _session;
	BOOL _currentlyShowingMoreRow;
	BOOL _showExpandedOptions;
	id<FBComposerAudienceCustomPrivacyDataSourceDelegate> _delegate;
	NSString* _searchText;
	id<FBTableViewMutating> _tableViewMutator;
	FBTypedNSArrayOfFBComposerPrivacySetting* _availableSettings;

}

@property (assign,nonatomic,__weak) id<FBComposerAudienceCustomPrivacyDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                                //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator;                                    //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,nonatomic) BOOL showExpandedOptions;                                                           //@synthesize showExpandedOptions=_showExpandedOptions - In the implementation block
@property (nonatomic,copy) FBTypedNSArrayOfFBComposerPrivacySetting * availableSettings;                         //@synthesize availableSettings=_availableSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(FBTypedNSArrayOfFBComposerPrivacySetting *)availableSettings;
-(id)_tintForCurrentController;
-(void)setShowExpandedOptions:(BOOL)arg1 ;
-(void)updateVisibleOptions:(BOOL)arg1 ;
-(void)setAvailableSettings:(FBTypedNSArrayOfFBComposerPrivacySetting *)arg1 ;
-(id)customListWithListGraphQLID:(id)arg1 ;
-(id)indexPathForOption:(id)arg1 ;
-(id)_defaultImageForCell;
-(id)_checkedImageForCell;
-(id)optionForIndexPath:(id)arg1 ;
-(void)setShowExpandedOptions:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showExpandedOptions;
-(void)setDelegate:(id<FBComposerAudienceCustomPrivacyDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBComposerAudienceCustomPrivacyDataSourceDelegate>)delegate;
-(NSString *)searchText;
-(void)fetch;
-(id)initWithSession:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
@end

