/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBEventDiscoveryToolbox, FBEventDiscoveryCategoryModel, UIColor;

@interface FBEventDiscoveryCategoryGridComponent : CKCompositeComponent {

	FBEventDiscoveryToolbox* _toolbox;
	FBEventDiscoveryCategoryModel* _category;
	UIColor* _highlightColor;

}
+(id)newWithToolbox:(id)arg1 category:(id)arg2 ;
+(id)initialState;
-(void)performHighlight;
-(void)performUnhighlight;
-(void)handleTapUp:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
@end

