/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsComposerFieldControllerProtocol.h>

@protocol FBEventsComposerFieldControllerDelegate;
@class FBEventAnalyticTracker, NSString;

@interface FBEventsPostReviewFieldController : NSObject <FBEventsComposerFieldControllerProtocol> {

	FBEventAnalyticTracker* _tracker;
	NSString* _title;
	BOOL _initialPostApprovalRequired;
	BOOL _postApprovalRequired;
	id<FBEventsComposerFieldControllerDelegate> _delegate;
	unsigned long long _fieldType;

}

@property (assign,nonatomic,__weak) id<FBEventsComposerFieldControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long fieldType;                                             //@synthesize fieldType=_fieldType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)toggleSwitchDidChange:(id)arg1 ;
-(BOOL)hasChanged;
-(id)partialEventCreateInputDataSet;
-(id)partialEventEditInputDataSet;
-(id)initWithTitle:(id)arg1 tracker:(id)arg2 postApprovalRequired:(BOOL)arg3 ;
-(double)heightForItemCellInCollectionView:(id)arg1 ;
-(id)cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(void)registerCellsWithCollectionView:(id)arg1 ;
-(void)setDelegate:(id<FBEventsComposerFieldControllerDelegate>)arg1 ;
-(id<FBEventsComposerFieldControllerDelegate>)delegate;
-(unsigned long long)fieldType;
-(void)setFieldType:(unsigned long long)arg1 ;
@end

