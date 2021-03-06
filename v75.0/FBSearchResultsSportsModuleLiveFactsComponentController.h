/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBSearchResultsActivityListener.h>

@class FBComponentTableViewDataSource, UITableView, FBGraphSearchLiveConversationController, FBSearchResultsContext, FBMemSportsDataMatchData, NSString;

@interface FBSearchResultsSportsModuleLiveFactsComponentController : CKComponentController <CKComponentProvider, FBSearchResultsActivityListener> {

	FBComponentTableViewDataSource* _tableViewDataSource;
	UITableView* _tableView;
	FBGraphSearchLiveConversationController* _controller;
	FBSearchResultsContext* _context;
	FBMemSportsDataMatchData* _sportsData;
	NSString* _targetID;

}

@property (assign,nonatomic,__weak) FBSearchResultsContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBMemSportsDataMatchData * sportsData;                //@synthesize sportsData=_sportsData - In the implementation block
@property (nonatomic,copy) NSString * targetID;                                    //@synthesize targetID=_targetID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)didMount;
-(void)didRemount;
-(void)didUnmount;
-(void)viewDidAppearForResultsWithContext:(id)arg1 ;
-(void)viewWillDisappearForResultsWithContext:(id)arg1 ;
-(FBMemSportsDataMatchData *)sportsData;
-(void)setSportsData:(FBMemSportsDataMatchData *)arg1 ;
-(void)createTableViewIfNeeded;
-(void)createTableViewDataSourceIfNeeded;
-(void)createLiveUpdateControllerIfNeeded;
-(id)initialFacts:(id)arg1 ;
-(void)addInitialStories:(id)arg1 toDataSource:(id)arg2 ;
-(FBSearchResultsContext *)context;
-(void)setContext:(FBSearchResultsContext *)arg1 ;
-(void)setTargetID:(NSString *)arg1 ;
-(NSString *)targetID;
@end

