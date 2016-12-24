/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBPageCTAItemListDataSourceDelegate;
@class NSDictionary, NSArray, FBImageDownloader, NSIndexPath, FBPageCTALogger, NSString;

@interface FBPageCTAItemListDataSource : NSObject <UITableViewDelegate, UITableViewDataSource> {

	NSDictionary* _groupInfo;
	NSArray* _groupNames;
	BOOL _showGroup;
	FBImageDownloader* _imageDownloader;
	unsigned long long _actionType;
	id<FBPageCTAItemListDataSourceDelegate> _delegate;
	NSIndexPath* _currentCTAIndexPath;
	FBPageCTALogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCTAItemsGroupInfo:(id)arg1 groupNames:(id)arg2 delegate:(id)arg3 imageDownloader:(id)arg4 actionType:(unsigned long long)arg5 currentCTAItem:(id)arg6 logger:(id)arg7 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end
