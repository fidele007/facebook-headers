/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTagSearchViewDelegate <NSObject>
@optional
-(void)tagSearchViewWillAppear:(id)arg1 preserveScrollEnabled:(BOOL)arg2;
-(void)tagSearchViewDidAppear:(id)arg1;
-(void)tagSearchViewWillDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)tagSearchViewDidDisappear:(id)arg1;
-(void)didFinishTagEditing:(id)arg1 withAvatar:(id)arg2 loggingSource:(id)arg3;

@required
-(void)tagSearchView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)tagSearchView:(id)arg1 searchTextDidChange:(id)arg2;

@end
