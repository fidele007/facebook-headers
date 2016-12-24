/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageComponentFlowFormFieldUpdateListener.h>

@class NSMutableDictionary, FBPageComponentFlowFormFieldUpdateListenerAnnouncer, NSString;

@interface FBPageComponentFlowFormFieldsManager : NSObject <FBPageComponentFlowFormFieldUpdateListener> {

	NSMutableDictionary* _mutableFormFields;
	FBPageComponentFlowFormFieldUpdateListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnnouncer:(id)arg1 ;
-(id)formFields;
-(void)updateFormFieldsWithFormFieldType:(id)arg1 formFieldId:(id)arg2 fieldName:(id)arg3 value:(id)arg4 isValidValue:(BOOL)arg5 ;
-(id)mutableFormFields;
-(void)updateFormFieldsWithFormFieldObject:(id)arg1 ;
-(void)removeFormField:(id)arg1 ;
-(void)dealloc;
@end

