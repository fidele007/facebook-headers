/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBModalPresentationSource.h>
#import <Facebook/FBTarotPagingAsyncRenderableProtocol.h>
#import <Facebook/FBTarotCardViewControllerProtocol.h>

@class FBModalPresentationStackViewController, NSMutableArray, NSMapTable, BFTaskCompletionSource, NSString;

@interface FBTarotModalPresentationStackCardViewController : UIViewController <FBModalPresentationSource, FBTarotPagingAsyncRenderableProtocol, FBTarotCardViewControllerProtocol> {

	BOOL _viewAppearanceState;
	FBModalPresentationStackViewController* _modalPresentationStackViewController;
	UIViewController* _rootViewController;
	NSMutableArray* _modalViewControllers;
	NSMapTable* _modalPresenters;
	double _coveringPercentage;
	BFTaskCompletionSource* _onDeallocTaskCompletionSource;
	Signal<FBTarotCardRenderableAppearance>* _tarotCardRenderableAppearance;
	shared_ptr<FB::Input<FBTarotCardRenderableAppearance> >* _tarotCardRenderableAppearanceInput;

}

@property (nonatomic,readonly) UIViewController*<FBTarotCardViewControllerProtocol> rootViewController;                                  //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) FBModalPresentationStackViewController * modalPresentationStackViewController;                            //@synthesize modalPresentationStackViewController=_modalPresentationStackViewController - In the implementation block
@property (nonatomic,readonly) shared_ptr<FB::Input<FBTarotCardRenderableAppearance> >* tarotCardRenderableAppearanceInput;              //@synthesize tarotCardRenderableAppearanceInput=_tarotCardRenderableAppearanceInput - In the implementation block
@property (nonatomic,readonly) NSMutableArray * modalViewControllers;                                                                    //@synthesize modalViewControllers=_modalViewControllers - In the implementation block
@property (nonatomic,readonly) NSMapTable * modalPresenters;                                                                             //@synthesize modalPresenters=_modalPresenters - In the implementation block
@property (assign,nonatomic) BOOL viewAppearanceState;                                                                                   //@synthesize viewAppearanceState=_viewAppearanceState - In the implementation block
@property (assign,nonatomic) double coveringPercentage;                                                                                  //@synthesize coveringPercentage=_coveringPercentage - In the implementation block
@property (nonatomic,readonly) BFTaskCompletionSource * onDeallocTaskCompletionSource;                                                   //@synthesize onDeallocTaskCompletionSource=_onDeallocTaskCompletionSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Signal<FBTarotCardRenderableAppearance>* tarotCardRenderableAppearance;                                   //@synthesize tarotCardRenderableAppearance=_tarotCardRenderableAppearance - In the implementation block
-(id)pagingRenderableRenderAsyncForSize:(CGSize)arg1 ;
-(id)modalPresentationStackManager;
-(Signal<FBTarotCardRenderableAppearance>*)tarotCardRenderableAppearance;
-(void)coveringPercentageDidChange:(double)arg1 ;
-(void)presentViewController:(id)arg1 presentationAxis:(long long)arg2 ;
-(double)coveringPercentage;
-(BFTaskCompletionSource *)onDeallocTaskCompletionSource;
-(FBModalPresentationStackViewController *)modalPresentationStackViewController;
-(void)setViewAppearanceState:(BOOL)arg1 ;
-(NSMutableArray *)modalViewControllers;
-(NSMapTable *)modalPresenters;
-(BOOL)viewAppearanceState;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissLastPresentedViewController;
-(void)dismissAllPresentedViewControllers;
-(void)_setCoveringPercentages;
-(void)setCoveringPercentage:(double)arg1 ;
-(shared_ptr<FB::Input<FBTarotCardRenderableAppearance> >*)tarotCardRenderableAppearanceInput;
-(void)dealloc;
-(UIViewController*<FBTarotCardViewControllerProtocol>)rootViewController;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithRootViewController:(UIViewController*)arg1 ;
-(void)_updateAppearance;
@end
