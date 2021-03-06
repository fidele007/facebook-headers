/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBTarotObservable, FBTarotToolbox;

@interface FBTarotFeedbackComponent : CKCompositeComponent {

	FBTarotObservable* _observableEntity;
	FBTarotToolbox* _toolbox;

}

@property (nonatomic,readonly) FBTarotObservable * observableEntity;              //@synthesize observableEntity=_observableEntity - In the implementation block
@property (nonatomic,readonly) FBTarotToolbox * toolbox;                          //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithObservableEntity:(id)arg1 toolbox:(id)arg2 ;
-(FBTarotToolbox *)toolbox;
-(void)_didTapOnShareButton;
-(void)_didTapOnCommentButton;
-(FBTarotObservable *)observableEntity;
@end

