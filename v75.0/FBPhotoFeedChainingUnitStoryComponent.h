/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>
#import <Facebook/FBPhotoComponentOverlay.h>

@class FBGradientComponent, CKOverlayLayoutComponent, FBFeedToolbox, FBAnalyticsInfo, NSString, FBMemFeedStory, FBPhotoComponent;

@interface FBPhotoFeedChainingUnitStoryComponent : CKCompositeComponent <FBHScrollImpressionLogging, FBPhotoComponentOverlay> {

	CKTypedComponentAction<> _tapAction;
	FBGradientComponent* _gradientComponent;
	CKOverlayLayoutComponent* _overlayComponent;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;
	NSString* _chainingUnitID;
	BOOL _animateOverlayVisibility;
	BOOL _hidden;
	FBMemFeedStory* _story;
	FBPhotoComponent* _imageComponent;

}

@property (assign,nonatomic) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;                         //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBPhotoComponent * imageComponent;              //@synthesize imageComponent=_imageComponent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithStory:(id)arg1 tapAction:(CKTypedComponentAction<>)arg2 toolbox:(id)arg3 chainingUnitID:(id)arg4 ;
+(id)initialState;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)becameFullyVisible;
-(FBMemFeedStory *)story;
-(FBPhotoComponent *)imageComponent;
-(void)didTapImage;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(void)showOverlayAnimated:(BOOL)arg1 ;
-(void)hideOverlayAnimated:(BOOL)arg1 ;
@end

