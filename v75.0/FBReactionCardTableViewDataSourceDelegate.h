/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionCardTableViewDataSourceDelegate <NSObject>
@optional
-(void)dataSource:(id)arg1 adapterWillAppear:(id)arg2 atIndexPath:(id)arg3;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@required
-(void)dataSource:(id)arg1 adaptersDidLoad:(id)arg2 atIndexPaths:(id)arg3;
-(void)dataSource:(id)arg1 didRemoveAdapter:(id)arg2 atIndexPath:(id)arg3;
-(void)dataSource:(id)arg1 didReplaceAdapter:(id)arg2 withAdapter:(id)arg3 atIndexPath:(id)arg4;

@end
