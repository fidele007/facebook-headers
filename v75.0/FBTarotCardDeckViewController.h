/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBTarotCardViewControllerProtocol.h>

@class FBTarotPagingCardViewController, FBTarotCardDeckEntity, FBTarotToolbox, NSString;

@interface FBTarotCardDeckViewController : UIViewController <FBTarotCardViewControllerProtocol> {

	FBTarotPagingCardViewController* _pagingCardViewController;
	FBTarotCardDeckEntity* _entity;
	FBTarotToolbox* _toolbox;

}

@property (nonatomic,readonly) FBTarotCardDeckEntity * entity;                                                      //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) FBTarotToolbox * toolbox;                                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBTarotPagingCardViewController * pagingCardViewController;                          //@synthesize pagingCardViewController=_pagingCardViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Signal<FBTarotCardRenderableAppearance>* tarotCardRenderableAppearance; 
-(FBTarotToolbox *)toolbox;
-(FBTarotPagingCardViewController *)pagingCardViewController;
-(Signal<FBTarotCardRenderableAppearance>*)tarotCardRenderableAppearance;
-(void)coveringPercentageDidChange:(double)arg1 ;
-(id)initWithEntity:(id)arg1 toolbox:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(FBTarotCardDeckEntity *)entity;
@end

