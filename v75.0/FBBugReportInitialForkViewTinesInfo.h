/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, FBBugReportInitialForkViewController, NSString;

@interface FBBugReportInitialForkViewTinesInfo : NSObject <UITableViewDataSource, UITableViewDelegate> {

	NSMutableArray* _tinesCellInfo;
	BOOL _enableSendFeedback;
	BOOL _enableReportAbuse;
	BOOL _enableShakeToReportSetting;
	FBBugReportInitialForkViewController* _viewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stylizeCell:(id)arg1 ;
-(id)initWithShakeToReportSwitch:(id)arg1 viewController:(id)arg2 ;
-(int)desiredTableViewHeight;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
