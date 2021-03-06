/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPrivacyReviewCoreListViewDelegate.h>

@protocol FBPrivacyCheckupPageViewControllerDelegate;
@class FBUserSession, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBPrivacyReviewCoreListView, FBPrivacyCheckupDataSourceAdapter, FBPrivacyReviewCoreToolbox, NSString;

@interface FBPrivacyCheckupPageViewController : UIViewController <FBPrivacyReviewCoreListViewDelegate> {

	FBUserSession* _session;
	FBComponentCollectionViewDataSource* _componentDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBPrivacyReviewCoreListView* _checkupListView;
	FBPrivacyCheckupDataSourceAdapter* _dataSourceAdapter;
	unsigned long long _queryType;
	FBPrivacyReviewCoreToolbox* _toolbox;
	BOOL _allowPageLoad;
	id<FBPrivacyCheckupPageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPrivacyCheckupPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long queryType;                                              //@synthesize queryType=_queryType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)queryType;
-(void)privacyButton:(id)arg1 didChangeWithPrivacyActionBundle:(id)arg2 ;
-(void)appDeleteButton:(id)arg1 didDeleteForModel:(id)arg2 ;
-(void)appDeleteButton:(id)arg1 didDeletePostsForModel:(id)arg2 ;
-(void)_enablePageFetch;
-(void)listViewDidScrollToBottom:(id)arg1 ;
-(id)initWithSession:(id)arg1 queryType:(unsigned long long)arg2 ;
-(void)setupDataSourceAndFetch;
-(void)setDelegate:(id<FBPrivacyCheckupPageViewControllerDelegate>)arg1 ;
-(id<FBPrivacyCheckupPageViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
@end

