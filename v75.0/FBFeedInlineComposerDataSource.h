/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedViewControllerLifecycleListener.h>
#import <Facebook/FBFeedInlineComposerPromptIntegrationControllerDelegate.h>
#import <Facebook/FBCollectionViewSectionDataSource.h>
#import <Facebook/FBStreamListener.h>
#import <Facebook/FBGraphQLConnectionControllerLoadListener.h>
#import <Facebook/FBGraphQLConnectionControllerNetworkListener.h>
#import <Facebook/FBTopOfFeedLifecycleListener.h>

@protocol FBCollectionViewMutating, FBFeedViewTopDataSourceDelegate;
@class FBUserSession, FBFeedInlineComposerPromptIntegrationController, NSString;

@interface FBFeedInlineComposerDataSource : NSObject <FBFeedViewControllerLifecycleListener, FBFeedInlineComposerPromptIntegrationControllerDelegate, FBCollectionViewSectionDataSource, FBStreamListener, FBGraphQLConnectionControllerLoadListener, FBGraphQLConnectionControllerNetworkListener, FBTopOfFeedLifecycleListener> {

	FBUserSession* _session;
	FBFeedInlineComposerPromptIntegrationController* _inlineComposerPromptIntegrationController;
	id<FBCollectionViewMutating> _collectionViewMutator;
	id<FBFeedViewTopDataSourceDelegate> _feedViewTopDataSourceDelegate;

}

@property (assign,nonatomic,__weak) id<FBCollectionViewMutating> collectionViewMutator;                             //@synthesize collectionViewMutator=_collectionViewMutator - In the implementation block
@property (assign,nonatomic,__weak) id<FBFeedViewTopDataSourceDelegate> feedViewTopDataSourceDelegate;              //@synthesize feedViewTopDataSourceDelegate=_feedViewTopDataSourceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
+(id)cellReuseIdentifier;
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)stream:(id)arg1 willStartLoading:(unsigned long long)arg2 refreshMode:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)registerClassWithReuseIdentifier;
-(id<FBCollectionViewMutating>)collectionViewMutator;
-(void)setCollectionViewMutator:(id<FBCollectionViewMutating>)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(void)inlineComposerNeedsReload:(BOOL)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didReceiveEdgesFromNetworkLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didLoadEdgesFromNetworkLoad:(id)arg2 ;
-(BOOL)inlineComposerCanReload;
-(void)feedViewDidAppear:(BOOL)arg1 isFirstTime:(BOOL)arg2 ;
-(void)feedViewDidDisappear:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 inlineComposerPromptIntegrationController:(id)arg2 viewControllerLifecycleListenerAnnouncer:(id)arg3 ;
-(id<FBFeedViewTopDataSourceDelegate>)feedViewTopDataSourceDelegate;
-(void)setFeedViewTopDataSourceDelegate:(id<FBFeedViewTopDataSourceDelegate>)arg1 ;
-(void)topOfFeedWillDeterministicallyRefreshData;
-(void)topOfFeedDidBecomeActive;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

