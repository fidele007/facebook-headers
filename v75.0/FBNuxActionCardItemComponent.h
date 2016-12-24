/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBMemNuxActionCardItem, FBFeedToolbox, NSArray;

@interface FBNuxActionCardItemComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	FBMemNuxActionCardItem* _item;
	FBFeedToolbox* _toolbox;
	CKTypedComponentAction<> _clickAction;
	NSArray* _trackingCodes;

}
+(id)newWithItem:(id)arg1 isOnlyItem:(BOOL)arg2 clickAction:(CKTypedComponentAction<>)arg3 toolbox:(id)arg4 ;
-(void)becameFullyVisible;
-(void)didXOut:(id)arg1 ;
-(id)_extraDataForAnalytics;
-(void)didClick:(id)arg1 ;
@end

