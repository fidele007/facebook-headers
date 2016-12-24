/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSString, NSArray, FBLeadGenToolbox;

@interface FBLeadGenDialogPickerTextField : UITextField <UIPickerViewDelegate, UIPickerViewDataSource> {

	NSString* _pickedValue;
	NSArray* _values;
	FBLeadGenToolbox* _toolbox;
	NSString* _fieldKey;

}

@property (nonatomic,copy) NSArray * values;                          //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) FBLeadGenToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy) NSString * fieldKey;                       //@synthesize fieldKey=_fieldKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBLeadGenToolbox *)toolbox;
-(NSString *)fieldKey;
-(void)setFieldKey:(NSString *)arg1 ;
-(void)setToolbox:(FBLeadGenToolbox *)arg1 ;
-(void)userDoneSelecting;
-(void)setPickedValue:(id)arg1 values:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(CGRect)caretRectForPosition:(id)arg1 ;
@end

