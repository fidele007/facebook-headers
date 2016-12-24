/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBForceTouchIntentProvider.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class NSString, FBFriendingToolbox, FBMemPerson;

@interface FBHScrollPYMKCellComponent : CKCompositeComponent <FBForceTouchIntentProvider, FBHScrollImpressionLogging> {

	NSString* _pymkLocation;
	FBFriendingToolbox* _toolbox;
	CKTypedComponentAction<> _xoutAction;
	FBMemPerson* _person;

}

@property (nonatomic,retain) FBMemPerson * person;                  //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(FBActionableCellComponentLayoutConfiguration)layoutConfigurationForBigSizePYMKCard;
+(id)newWithPerson:(id)arg1 socialContextVariants:(id)arg2 requestHowFound:(id)arg3 cancelRef:(id)arg4 pymkLocation:(id)arg5 backgroundAction:(CKTypedComponentAction<>)arg6 addFriendButtonAction:(CKTypedComponentAction<>)arg7 cancelRequestButtonAction:(CKTypedComponentAction<>)arg8 xoutButtonAction:(CKTypedComponentAction<>)arg9 enableRemoveButton:(BOOL)arg10 withCardBorder:(BOOL)arg11 layoutConfiguration:(FBActionableCellComponentLayoutConfiguration)arg12 buttonStyle:(unsigned long long)arg13 toolbox:(id)arg14 ;
-(id)forceTouchIntentAtPoint:(CGPoint)arg1 sourceView:(id)arg2 ;
-(void)didTapXout;
-(void)setPerson:(FBMemPerson *)arg1 ;
-(FBMemPerson *)person;
@end
