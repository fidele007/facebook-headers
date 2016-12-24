/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBComposerExpandedInlineSproutListener.h>

@class NSArray, FBComposerViewToolbox, NSString;

@interface FBComposerExpandedInlineSproutsComponent : CKCompositeComponent <FBComposerExpandedInlineSproutListener> {

	unsigned long long _targetType;
	BOOL _presentsPickersInRelativePositionedOverlays;
	NSArray* _inlineSprouts;
	FBComposerViewToolbox* _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithInlineSprouts:(id)arg1 sproutStyle:(id)arg2 targetType:(unsigned long long)arg3 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg4 individualSproutAttributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg5 options:(const FBComposerExpandedInlineSproutsOptions*)arg6 toolbox:(id)arg7 ;
-(void)didTapWriteSprout;
-(void)performSproutActionWithSelector:(SEL)arg1 data:(id)arg2 loggingData:(id)arg3 ;
-(id)pickerPopoverInfo;
-(void)tappedSproutWithComponent:(id)arg1 sprout:(id)arg2 ;
-(void)tappedSproutHScrollChildWithComponent:(id)arg1 composerUpdate:(id)arg2 ;
-(void)didTapActivitySprout;
-(void)didTapExternalMusicSprout;
-(void)didTapShareLocationSprout;
-(void)didTapUploadAPhotoSprout;
-(void)didTapUserTaggingSprout;
-(void)didTapVideoBroadcastSprout;
-(void)didTapMovieSprout;
-(void)didTapQAndASprout;
-(void)didTapSponsorTaggingSprout;
-(void)didTapBirthdayCameraSprout;
-(void)didTapCameraSprout;
@end
