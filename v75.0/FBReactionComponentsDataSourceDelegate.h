/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionComponentsDataSourceDelegate <NSObject>
@optional
-(void)willReloadContentForReactionComponentsDataSource:(id)arg1;
-(void)scrollViewDidScroll:(id)arg1 withState:(FBScrollViewState)arg2 previousOffset:(double)arg3;
-(id)downloadRequestGraphQLQueryForReactionComponentsDataSource:(id)arg1 location:(id)arg2 reactionUnitID:(id)arg3 cursor:(id)arg4 userInfo:(id)arg5;
-(long long)headLoadIndexForReactionComponentsDataSource:(id)arg1;

@required
-(id)graphQLConnectionControllerUserInputForComponentsDataSource:(id)arg1;
-(id)connectionControllerForComponentsDataSource:(id)arg1;

@end
