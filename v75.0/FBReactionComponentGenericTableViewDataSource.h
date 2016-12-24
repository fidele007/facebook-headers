/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamListener.h>
#import <Facebook/FBReactionUnitComponentAdapterDelegate.h>
#import <Facebook/FBReactionCallbackLoggerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class FBMemModelObject, FBReactionContext, NSMutableDictionary, NSMutableArray, FBStream, FBLoadingIndicatorView, FBReactionExperienceLogger, UITableView, NSString;

@interface FBReactionComponentGenericTableViewDataSource : NSObject <FBStreamListener, FBReactionUnitComponentAdapterDelegate, FBReactionCallbackLoggerDelegate, UITableViewDataSource, UITableViewDelegate> {

	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBReactionContext* _reactionContext;
	FBReactionContext* _childContext;
	NSMutableDictionary* _heightCache;
	NSMutableArray* _unitComponentAdapters;
	NSMutableArray* _unitComponents;
	FBStream* _stream;
	FBLoadingIndicatorView* _loadingIndicatorView;
	FBReactionExperienceLogger* _logger;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)logUserInteraction:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(void)switchToNewOverlayWithPageId:(id)arg1 ;
-(void)hideUnitForUnitComponentAdapter:(id)arg1 ;
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 forUnitComponentAdapter:(id)arg3 ;
-(void)hideCardComponentContainingReactionUnitComponentAdapter:(id)arg1 ;
-(void)updateComponentForUnitComponentAdapter:(id)arg1 oldComponentView:(id)arg2 ;
-(void)hideComponentForUnitComponentAdapter:(id)arg1 ;
-(void)heightDidChangeForUnitComponentAdapter:(id)arg1 shouldPreservePosition:(BOOL)arg2 ;
-(void)_loadMoreIfDidNotFillTableView:(id)arg1 ;
-(id)_commonLoggingExtrasWithEmbeddedInteraction:(id)arg1 ;
-(id)initWithUnit:(id)arg1 reactionContext:(id)arg2 componentId:(id)arg3 logger:(id)arg4 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

