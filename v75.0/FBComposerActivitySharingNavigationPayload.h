/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerActivityPickerOpenType, FBComposerDestinationUpdate;

@interface FBComposerActivitySharingNavigationPayload : FBValueObject <NSCopying> {

	BOOL _shouldHideTabBar;
	FBComposerActivityPickerOpenType* _openType;
	FBComposerDestinationUpdate* _nextDestinationUpdate;

}

@property (nonatomic,copy,readonly) FBComposerActivityPickerOpenType * openType;                      //@synthesize openType=_openType - In the implementation block
@property (nonatomic,copy,readonly) FBComposerDestinationUpdate * nextDestinationUpdate;              //@synthesize nextDestinationUpdate=_nextDestinationUpdate - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideTabBar;                                                 //@synthesize shouldHideTabBar=_shouldHideTabBar - In the implementation block
-(id)initWithOpenType:(id)arg1 nextDestinationUpdate:(id)arg2 shouldHideTabBar:(BOOL)arg3 ;
-(FBComposerDestinationUpdate *)nextDestinationUpdate;
-(FBComposerActivityPickerOpenType *)openType;
-(BOOL)shouldHideTabBar;
@end

