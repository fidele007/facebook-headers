/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBComposerPublishTarget, NSString, CKComponent;

@interface FBComposerReviewRatingInitialChosenComponent : CKCompositeComponent {

	FBComposerPublishTarget* _publishTarget;
	NSString* _compositionID;
	CKTypedComponentAction<> _ratingDidChangeAction;
	CKComponent* _questionLabelComponent;
	CKComponent* _starRatingComponent;
	CKComponent* _starLabelsComponent;

}
+(id)newWithPublishTarget:(id)arg1 compositionID:(id)arg2 action:(CKTypedComponentAction<>)arg3 session:(id)arg4 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsToRatingSelectionButtonComponent:(id)arg1 forStarRating:(long long)arg2 ;
-(void)didChangeRatingFromStarRating:(id)arg1 rating:(id)arg2 ;
-(void)didChangeRatingFromStarLabel:(id)arg1 rating:(id)arg2 ;
@end

