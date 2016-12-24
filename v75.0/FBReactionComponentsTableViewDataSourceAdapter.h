/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>

@class FBComponentTableViewDataSource, FBReactionComponentsDataSource, UITableView, NSString;

@interface FBReactionComponentsTableViewDataSourceAdapter : NSObject <FBComponentTableViewDataSourceCellConfigProvider> {

	FBComponentTableViewDataSource* _tableViewDataSource;
	FBReactionComponentsDataSource* _reactionDataSource;
	UITableView* _tableView;

}

@property (nonatomic,readonly) FBReactionComponentsDataSource * reactionDataSource;              //@synthesize reactionDataSource=_reactionDataSource - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(FBReactionComponentsDataSource *)reactionDataSource;
-(id)initWithSession:(id)arg1 styleMapper:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 reactionSessionInfo:(id)arg5 analyticsModule:(id)arg6 renderIdiom:(unsigned long long)arg7 layoutIdiom:(unsigned long long)arg8 userInfo:(id)arg9 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end
