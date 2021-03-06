/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMStickerTrayPresenter <NSObject>
@property (assign,nonatomic,__weak) id<FBMStickerPresenterDataSource> presenterDataSource; 
@property (assign,nonatomic,__weak) id<FBMStickerPresenterDelegate> presenterDelegate; 
@required
-(void)scrollToTop:(BOOL)arg1;
-(void)setSearchingInFullScreen:(BOOL)arg1;
-(void)setPresenterDataSource:(id)arg1;
-(void)setPresenterDelegate:(id)arg1;
-(id)getView;
-(void)reloadPresenter;
-(void)setSelectedTabIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
-(id<FBMStickerPresenterDataSource>)presenterDataSource;
-(id<FBMStickerPresenterDelegate>)presenterDelegate;
-(void)tearDown;

@end

