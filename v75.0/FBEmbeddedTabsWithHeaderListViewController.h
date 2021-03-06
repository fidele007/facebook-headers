/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBListViewController.h>

@class FBEmbeddedTabsHeightUpdateListenerAnnouncer, NSString;

@interface FBEmbeddedTabsWithHeaderListViewController : FBListViewController {

	FBEmbeddedTabsHeightUpdateListenerAnnouncer* _tabsHeightUpdateAnnouncer;
	double _tabContentBottomInset;
	BOOL _hasTabsEverBeenSelected;
	NSString* _preSelectedTabName;

}
-(void)dataSourceWillEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(id)initWithSession:(id)arg1 preSelectedTabName:(id)arg2 configuration:(id)arg3 componentContextFactory:(/*^block*/id)arg4 sectionComponentFactory:(/*^block*/id)arg5 ;
-(void)addTabsHeightUpdateListener:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

