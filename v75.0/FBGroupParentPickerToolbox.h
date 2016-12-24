/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentToolbox.h>

@protocol FBGroupCreationParentGroupPickerDelegate;
@class FBGroupParentGroupPickerListenerAnnouncer;

@interface FBGroupParentPickerToolbox : FBSectionComponentToolbox {

	FBGroupParentGroupPickerListenerAnnouncer* _pickerAnnouncer;
	id<FBGroupCreationParentGroupPickerDelegate> _delegate;

}

@property (nonatomic,readonly) FBGroupParentGroupPickerListenerAnnouncer * pickerAnnouncer;               //@synthesize pickerAnnouncer=_pickerAnnouncer - In the implementation block
@property (nonatomic,__weak,readonly) id<FBGroupCreationParentGroupPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithContext:(id)arg1 pickerDelegate:(id)arg2 ;
-(FBGroupParentGroupPickerListenerAnnouncer *)pickerAnnouncer;
-(id<FBGroupCreationParentGroupPickerDelegate>)delegate;
@end

