/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchDiscoverViewModelProtocol <NSObject>
@optional
-(BOOL)shouldShowTailIndicatorView:(id)arg1 atScrollViewState:(const FBScrollViewState*)arg2;
-(BOOL)shouldShowTailLoadingView:(id)arg1 forModel:(id)arg2;
-(void)didSelectNavigationControl:(id)arg1 atIndex:(long long)arg2 withSessionStatus:(id)arg3;

@required
-(void)fetchModelForEvent:(unsigned long long)arg1 atScrollViewState:(const FBScrollViewState*)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4;
-(void)onViewWillDisappear;
-(void)expandableModuleExpandedWithModels:(id)arg1 moduleModel:(id)arg2;
-(void)suggestion:(id)arg1 didChangeDeleteState:(BOOL)arg2;

@end
