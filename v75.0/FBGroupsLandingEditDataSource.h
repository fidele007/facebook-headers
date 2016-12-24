/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class FBUserSession, NSMutableArray, NSString;

@interface FBGroupsLandingEditDataSource : NSObject <UITableViewDataSource> {

	FBUserSession* _session;
	NSMutableArray* _favoriteGroups;
	NSMutableArray* _normalGroups;
	BOOL _showFavoriteSectionFooter;
	BOOL _showNormalSectionFooter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_groupAtIndexPath:(id)arg1 ;
-(void)_syncFavorites;
-(void)_tableView:(id)arg1 reloadSection:(unsigned long long)arg2 ;
-(BOOL)shouldShowHeaderForSection:(long long)arg1 ;
-(BOOL)shouldShowFooterForSection:(long long)arg1 ;
-(unsigned long long)countOfGroupsInSection:(unsigned long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setGroups:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

