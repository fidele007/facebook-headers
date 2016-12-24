/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBEntityCardSwipableViewControllerProtocol.h>

@protocol FBSwipableProfileViewController, FBEntityCardsAnalyticsLogger;
@class UIScrollView, FBUserSession, FBProviderMap, FBMemPerson, UIViewController, UIView, NSString;

@interface FBSwipablePersonCardViewController : UIViewController <FBEntityCardSwipableViewControllerProtocol> {

	FBUserSession* _session;
	FBProviderMap* _providerMap;
	FBMemPerson* _person;
	UIViewController*<FBSwipableProfileViewController> _timelineController;
	UIView* _backgroundView;
	NSString* _analyticsUUID;
	id<FBEntityCardsAnalyticsLogger> _logger;
	unsigned long long _cardLoadEvents;
	id _perfEventSequenceId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(id)analyticsModule;
-(id)initWithSession:(id)arg1 providerMap:(id)arg2 ;
-(void)_timelineAnalyticsNotification:(id)arg1 ;
-(void)_timelineFriendOrSubscriberStatusUpdatedNotification:(id)arg1 ;
-(void)analyticsLogDidHide;
-(void)analyticsLogWillShow;
-(void)scrollToTop:(BOOL)arg1 ;
-(void)_markSequenceForCardLoadEvents:(unsigned long long)arg1 ;
-(void)_logSwipeupPerfEventEndIfNeeded;
-(void)setAnalytics:(id)arg1 ;
-(void)setEntity:(id)arg1 isPreconfiguring:(BOOL)arg2 ;
-(void)beginSwipeTransition:(BOOL)arg1 ;
-(void)endSwipeTransition:(BOOL)arg1 ;
-(id)analyticsPresentedViewController;
-(void)dealloc;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

