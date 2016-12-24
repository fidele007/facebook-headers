/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBWebViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBFeedAwesomizerCardViewControllerProtocol.h>

@protocol FBWebView;
@class NSString, UIColor, FBUserSession, FBFeedAwesomizerCardAnalyticInfo, UITableView, CKComponentHostingView, FBFeedAwesomizerCardView, FBFeedAwesomizerCardFloatingControlsView, UIView, NSDate, NSDictionary, FBFeedAwesomizerCardViewControllerEventListenerAnnouncer;

@interface FBFeedAwesomizerWebContentCardViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FBWebViewDelegate, UISearchBarDelegate, FBAccessibilityInvalidationEventsListener, FBFeedAwesomizerCardViewControllerProtocol> {

	Class _headerProvider;
	Class _footerProvider;
	NSString* _urlPath;
	UIColor* _themeColor;
	NSString* _floatingTitle;
	FBUserSession* _session;
	FBFeedAwesomizerCardAnalyticInfo* _analyticInfo;
	UITableView* _tableView;
	CKComponentHostingView* _cardHeaderView;
	FBFeedAwesomizerCardView* _cardView;
	FBFeedAwesomizerCardFloatingControlsView* _floatingControlsView;
	UIView* _contentView;
	UIView*<FBWebView> _webView;
	BOOL _statusBarHiddenBeforePresentation;
	BOOL _hasOpened;
	NSDate* _cardOpenDate;
	NSDate* _initialWebViewRequestFinishDate;
	NSDictionary* _footerLogData;
	double _maxContentOffsetYReached;
	long long _cardIdentifer;
	FBFeedAwesomizerCardViewControllerEventListenerAnnouncer* _eventAnnouncer;
	double _webContentHeight;

}

@property (assign,nonatomic) double webContentHeight;                                                                  //@synthesize webContentHeight=_webContentHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long cardIdentifier;                                                               //@synthesize cardIdentifer=_cardIdentifer - In the implementation block
@property (nonatomic,readonly) FBFeedAwesomizerCardViewControllerEventListenerAnnouncer * eventAnnouncer;              //@synthesize eventAnnouncer=_eventAnnouncer - In the implementation block
+(id)newConnectionsCardWithSession:(id)arg1 analyticInfo:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)didReceiveAccessibilityInvalidation;
-(FBFeedAwesomizerCardViewControllerEventListenerAnnouncer *)eventAnnouncer;
-(long long)cardIdentifier;
-(void)didTapCloseButton;
-(id)createToolbox;
-(double)floatingThresholdYOffset;
-(void)_scrollHeightComplete:(id)arg1 ;
-(void)setWebContentHeight:(double)arg1 ;
-(void)didDismissSurveyWithComponent:(id)arg1 logData:(id)arg2 ;
-(id)initWithCardIdentifier:(long long)arg1 headerProvider:(Class)arg2 footerProvider:(Class)arg3 urlPath:(id)arg4 themeColor:(id)arg5 floatingTitle:(id)arg6 session:(id)arg7 analyticInfo:(id)arg8 ;
-(double)webContentHeight;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
