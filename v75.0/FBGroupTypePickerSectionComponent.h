/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@protocol FBGroupCreationFlowEventsDelegate;
@class FBGroupTypePickerSectionComponentListenerAnnouncer;

@interface FBGroupTypePickerSectionComponent : FBCompositeSectionComponent {

	FBGroupTypePickerSectionComponentListenerAnnouncer* _pickerAnnouncer;
	id<FBGroupCreationFlowEventsDelegate> _creationDelegate;

}

@property (nonatomic,__weak,readonly) FBGroupTypePickerSectionComponentListenerAnnouncer * pickerAnnouncer;              //@synthesize pickerAnnouncer=_pickerAnnouncer - In the implementation block
@property (nonatomic,__weak,readonly) id<FBGroupCreationFlowEventsDelegate> creationDelegate;                            //@synthesize creationDelegate=_creationDelegate - In the implementation block
+(id)newWithToolbox:(id)arg1 ;
+(id)initialState;
-(FBGroupTypePickerSectionComponentListenerAnnouncer *)pickerAnnouncer;
-(id<FBGroupCreationFlowEventsDelegate>)creationDelegate;
@end

