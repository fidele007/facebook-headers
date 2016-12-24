/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBEventsComposerFieldControllerProtocol.h>

@protocol FBEventsComposerFieldControllerDelegate;
@class NSString, FBEventAnalyticTracker, FBEventsComposerTextFieldCell;

@interface FBEventsComposerTicketURLFieldController : NSObject <UITextFieldDelegate, FBEventsComposerFieldControllerProtocol> {

	NSString* _placeholderText;
	NSString* _initialText;
	NSString* _urlText;
	FBEventAnalyticTracker* _tracker;
	CGRect _lastContentFrame;
	FBEventsComposerTextFieldCell* _cell;
	id<FBEventsComposerFieldControllerDelegate> _delegate;
	unsigned long long _fieldType;

}

@property (assign,nonatomic,__weak) id<FBEventsComposerFieldControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long fieldType;                                             //@synthesize fieldType=_fieldType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasChanged;
-(id)partialEventCreateInputDataSet;
-(id)partialEventEditInputDataSet;
-(double)heightForItemCellInCollectionView:(id)arg1 ;
-(id)cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(void)registerCellsWithCollectionView:(id)arg1 ;
-(id)initWithText:(id)arg1 placeHolderText:(id)arg2 tracker:(id)arg3 ;
-(void)textFieldDidChangeValue:(id)arg1 ;
-(void)setDelegate:(id<FBEventsComposerFieldControllerDelegate>)arg1 ;
-(id<FBEventsComposerFieldControllerDelegate>)delegate;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(unsigned long long)fieldType;
-(void)setFieldType:(unsigned long long)arg1 ;
@end
