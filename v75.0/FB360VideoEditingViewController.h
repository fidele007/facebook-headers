/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMediaViewControllerProtocol.h>
#import <Facebook/FB360VideoEditingViewDelegate.h>

@protocol FB360VideoEditingViewControllerDelegate;
@class FBUserSession, FBMediaPickerDataSourceManager, FBVideoAsset, FB360VideoEditingView, NSString;

@interface FB360VideoEditingViewController : UIViewController <FBMediaViewControllerProtocol, FB360VideoEditingViewDelegate> {

	FBUserSession* _session;
	FBMediaPickerDataSourceManager* _dataSourceManager;
	BOOL _allowAutoPlay;
	FBVideoAsset* _asset;
	id<FB360VideoEditingViewControllerDelegate> _delegate;
	FB360VideoEditingView* _editingView;

}

@property (nonatomic,retain) FB360VideoEditingView * editingView;                                      //@synthesize editingView=_editingView - In the implementation block
@property (nonatomic,retain) FBVideoAsset * asset;                                                     //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL allowAutoPlay;                                                       //@synthesize allowAutoPlay=_allowAutoPlay - In the implementation block
@property (assign,nonatomic,__weak) id<FB360VideoEditingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willPresentMediaAtDataSourceIndex:(unsigned long long)arg1 fromCamera:(BOOL)arg2 showAll:(BOOL)arg3 showTaggingMode:(BOOL)arg4 source:(unsigned long long)arg5 forDataSource:(id)arg6 photoAssetDoesNotNeedRecycle:(BOOL)arg7 ;
-(BOOL)hasMultiSelectSupport;
-(unsigned long long)presentationAssetType;
-(void)setTransitionView:(id)arg1 ;
-(void)setAllowAutoPlay:(BOOL)arg1 ;
-(void)three60VideoEditingViewDidTapDoneButton:(id)arg1 withConfig:(id)arg2 thumbnail:(id)arg3 ;
-(void)three60VideoEditingViewDidTapCancelButton:(id)arg1 ;
-(BOOL)allowAutoPlay;
-(void)setEditingView:(FB360VideoEditingView *)arg1 ;
-(void)setDelegate:(id<FB360VideoEditingViewControllerDelegate>)arg1 ;
-(id<FB360VideoEditingViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(FBVideoAsset *)asset;
-(void)setAsset:(FBVideoAsset *)arg1 ;
-(FB360VideoEditingView *)editingView;
-(id)initWithSession:(id)arg1 ;
-(void)setDataSourceManager:(id)arg1 ;
@end

