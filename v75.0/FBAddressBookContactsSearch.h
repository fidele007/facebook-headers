/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBContactsSearch.h>
#import <Facebook/FBClassProvidable.h>

@protocol MNAddressBookContactSyncQuerying, FBContactsSearchDelegate;
@class FBContactSearchQuery, NSArray, NSString;

@interface FBAddressBookContactsSearch : NSObject <FBContactsSearch, FBClassProvidable> {

	id<MNAddressBookContactSyncQuerying> _addressBookContactSyncStore;
	NSArray* _searchResults;
	id<FBContactsSearchDelegate> _delegate;
	FBContactSearchQuery* _currentQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBContactsSearchDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBContactSearchQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(long long)numberOfSearchResultsInSection:(long long)arg1 ;
-(id)resultForRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(void)didSelectRow:(long long)arg1 inContactSection:(long long)arg2 ;
-(BOOL)hasPendingSearchOperationForSection:(long long)arg1 ;
-(id)initWithAddressBookContactSyncStore:(id)arg1 ;
-(void)_didFinishSearchWithContacts:(id)arg1 ;
-(void)_updateResultsAndInformDelegateOfFinishedSearch:(id)arg1 ;
-(void)refreshSearch:(id)arg1 ;
-(id)sectionsInSearch;
-(void)setupAnalytics:(id)arg1 jobKey:(id)arg2 ;
-(void)cancelPendingSearchOperation;
-(BOOL)hasPendingSearchOperation;
-(void)setDelegate:(id<FBContactsSearchDelegate>)arg1 ;
-(id<FBContactsSearchDelegate>)delegate;
-(void)search:(id)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(FBContactSearchQuery *)currentQuery;
-(void)clearResults;
@end

