/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBTextViewComponent, NSString;

@interface FBPageComponentFlowTextViewComponent : CKCompositeComponent {

	FBTextViewComponent* _component;

}

@property (nonatomic,copy) NSString * text; 
+(id)newWithFieldName:(id)arg1 configuration:(const FBPageComponentFlowTextViewComponentConfiguration*)arg2 actions:(const FBPageComponentFlowTextViewComponentActions*)arg3 ;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
