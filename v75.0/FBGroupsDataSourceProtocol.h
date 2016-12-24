/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUserSession;


@protocol FBGroupsDataSourceProtocol
@property (nonatomic,readonly) FBUserSession * session; 
@property (assign,nonatomic,__weak) id<FBGroupsDataSourceDelegate> delegate; 
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator; 
@property (assign,nonatomic,__weak) id<FBGroupsTableViewControllerProtocol> actionsTarget; 
@optional
-(BOOL)isDownloadingData:(long long)arg1;
-(BOOL)isDataValid;

@required
-(void)setTableViewMutator:(id)arg1;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)downloadData:(long long)arg1;
-(BOOL)isDownloadingData;
-(BOOL)supportsDownloadType:(long long)arg1;
-(BOOL)canDownloadTail;
-(id<FBGroupsTableViewControllerProtocol>)actionsTarget;
-(void)setActionsTarget:(id)arg1;
-(void)setDelegate:(id)arg1;
-(unsigned long long)count;
-(id<FBGroupsDataSourceDelegate>)delegate;
-(BOOL)hasData;
-(void)cancelRequests;
-(id)initWithSession:(id)arg1;
-(FBUserSession *)session;

@end
