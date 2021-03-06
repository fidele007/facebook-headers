/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBPhotoRemindersAsset;

@interface FBPromptPhotoRemindersAssetComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	BOOL _enableToMultiSelect;
	FBPhotoRemindersAsset* _photoRemindersAsset;

}

@property (nonatomic,readonly) FBPhotoRemindersAsset * photoRemindersAsset;              //@synthesize photoRemindersAsset=_photoRemindersAsset - In the implementation block
@property (nonatomic,readonly) BOOL enableToMultiSelect;                                 //@synthesize enableToMultiSelect=_enableToMultiSelect - In the implementation block
+(id)newWithPhotoRemindersAsset:(id)arg1 tapAction:(CKTypedComponentAction<>)arg2 size:(double)arg3 toolbox:(id)arg4 ;
-(FBPhotoRemindersAsset *)photoRemindersAsset;
-(BOOL)enableToMultiSelect;
@end

