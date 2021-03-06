/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBIntentHandler.h>

@protocol FBTarotCardModallyPresentableCardViewControllerProtocol;
@class UIViewController, FBTarotInstantArticleCardEntity, FBTarotModalPresentationStackCardViewController, FBTarotToolbox, NSString;

@interface FBTarotCardOverlayComponent : CKCompositeComponent <FBIntentHandler> {

	UIViewController*<FBTarotCardModallyPresentableCardViewControllerProtocol> _presentedArticle;
	FBTarotInstantArticleCardEntity* _featuredArticleEntity;
	FBTarotModalPresentationStackCardViewController* _stackViewController;
	FBTarotToolbox* _toolbox;

}

@property (nonatomic,readonly) FBTarotInstantArticleCardEntity * featuredArticleEntity;                                   //@synthesize featuredArticleEntity=_featuredArticleEntity - In the implementation block
@property (nonatomic,__weak,readonly) FBTarotModalPresentationStackCardViewController * stackViewController;              //@synthesize stackViewController=_stackViewController - In the implementation block
@property (nonatomic,readonly) FBTarotToolbox * toolbox;                                                                  //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithCardTitle:(id)arg1 cardDescription:(id)arg2 featuredArticleEntity:(id)arg3 stackViewController:(id)arg4 observableFeedbackEntity:(id)arg5 toolbox:(id)arg6 ;
-(FBTarotToolbox *)toolbox;
-(void)handleIntent:(id)arg1 ;
-(void)_showFeaturedArticle;
-(FBTarotInstantArticleCardEntity *)featuredArticleEntity;
-(FBTarotModalPresentationStackCardViewController *)stackViewController;
@end

