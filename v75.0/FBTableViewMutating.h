/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTableViewMutating <NSObject>
@required
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 forDataSource:(id)arg3;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(id)rootTableView;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(id)absoluteIndexPathFor:(id)arg1 fromDataSource:(id)arg2;
-(id)indexPathsForVisibleRowsInDataSource:(id)arg1;
-(CGRect*)rectForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2;
-(id)dataSourceForIndexPath:(id)arg1 translatedIndexPath:(id*)arg2;
-(id)cellForRowAtIndexPath:(id)arg1 forDataSource:(id)arg2;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 forDataSource:(id)arg3;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 forDataSource:(id)arg3;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 forDataSource:(id)arg3;
-(unsigned long long)numberOfRowsInSection:(unsigned long long)arg1 forDataSource:(id)arg2;
-(void)reloadData;
-(void)beginUpdates;
-(void)endUpdates;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;

@end

