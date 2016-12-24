/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSMutableDictionary, NSString, FBUserSession, FBEditHistoryView, FBMemEditHistoryConnection;

@interface FBEditHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	NSMutableDictionary* _layoutDictionary;
	NSString* _nodeID;
	int _queryNodeType;
	BOOL _isPermalink;
	BOOL _showHeader;
	FBUserSession* _session;
	FBEditHistoryView* _historyView;
	FBMemEditHistoryConnection* _editHistory;
	unsigned long long _state;

}

@property (nonatomic,retain) FBMemEditHistoryConnection * editHistory;              //@synthesize editHistory=_editHistory - In the implementation block
@property (assign,nonatomic) unsigned long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) FBEditHistoryView * historyView;                     //@synthesize historyView=_historyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(FBMemEditHistoryConnection *)editHistory;
-(id)initWithTargetID:(id)arg1 forNodeType:(int)arg2 isPermalink:(BOOL)arg3 session:(id)arg4 ;
-(void)_loadEditHistory;
-(void)_handleMessageLabelTap:(id)arg1 withEvent:(id)arg2 ;
-(id)_layoutForEditActionAtRow:(long long)arg1 ;
-(void)setEditHistory:(FBMemEditHistoryConnection *)arg1 ;
-(void)_openActionURL:(id)arg1 ;
-(id)initWithTargetID:(id)arg1 forNodeType:(int)arg2 isPermalink:(BOOL)arg3 showHeader:(BOOL)arg4 session:(id)arg5 ;
-(FBEditHistoryView *)historyView;
-(void)setTitle:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 ;
@end

