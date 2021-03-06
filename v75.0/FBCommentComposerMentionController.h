/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerMentionDecoratorDelegate.h>
#import <Facebook/FBComposerMentionDecoratorListener.h>

@protocol FBAvatarProtocol, FBCommentComposerMentionControllerDelegate, FBFeedbackTargetProtocol;
@class FBUserSession, FBMemModelObject, FBScenePath, FBComposerMentionKeyboardController, NSArray, FBComposerMentionDecorator, FBMentionsTaggingCollectionController, UITableView, UICollectionView, UITextView, NSSet, FBSearchTableViewData, NSString;

@interface FBCommentComposerMentionController : NSObject <FBComposerMentionDecoratorDelegate, FBComposerMentionDecoratorListener> {

	FBUserSession* _session;
	FBMemModelObject*<FBAvatarProtocol> _commentAuthor;
	FBScenePath* _scenePath;
	unsigned long long _theme;
	FBComposerMentionKeyboardController* _keyboardMentionController;
	NSArray* _mentions;
	FBComposerMentionDecorator* _lazy_mentionDecorator;
	FBMentionsTaggingCollectionController* _lazy_mentionCollectionController;
	id<FBCommentComposerMentionControllerDelegate> _delegate;
	UITableView* _mentionPicker;
	UICollectionView* _pickerCollectionView;
	UITextView* _textView;
	NSSet* _taggableCollections;
	id<FBFeedbackTargetProtocol> _feedbackTarget;
	FBSearchTableViewData* _mentionsData;

}

@property (assign,nonatomic,__weak) id<FBCommentComposerMentionControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBFeedbackTargetProtocol> feedbackTarget;                                      //@synthesize feedbackTarget=_feedbackTarget - In the implementation block
@property (nonatomic,retain) FBComposerMentionDecorator * mentionDecorator;                                    //@synthesize lazy_mentionDecorator=_lazy_mentionDecorator - In the implementation block
@property (nonatomic,retain) FBMentionsTaggingCollectionController * mentionCollectionController;              //@synthesize lazy_mentionCollectionController=_lazy_mentionCollectionController - In the implementation block
@property (nonatomic,retain) FBSearchTableViewData * mentionsData;                                             //@synthesize mentionsData=_mentionsData - In the implementation block
@property (nonatomic,readonly) UITableView * mentionPicker;                                                    //@synthesize mentionPicker=_mentionPicker - In the implementation block
@property (nonatomic,readonly) UICollectionView * pickerCollectionView;                                        //@synthesize pickerCollectionView=_pickerCollectionView - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                                          //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSSet * taggableCollections;                                                        //@synthesize taggableCollections=_taggableCollections - In the implementation block
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled; 
@property (nonatomic,copy) NSArray * committedMentions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBFeedbackTargetProtocol>)feedbackTarget;
-(void)setFeedbackTarget:(id<FBFeedbackTargetProtocol>)arg1 ;
-(FBComposerMentionDecorator *)mentionDecorator;
-(id)initWithSession:(id)arg1 commentAuthor:(id)arg2 feedbackTarget:(id)arg3 theme:(unsigned long long)arg4 scenePath:(id)arg5 ;
-(void)setDelegate:(id)arg1 mentionPicker:(id)arg2 pickerCollectionView:(id)arg3 textView:(id)arg4 ;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(double)heightForNumberOfRowsWithContent:(unsigned long long)arg1 ;
-(NSArray *)committedMentions;
-(UITableView *)mentionPicker;
-(void)setCommittedMentions:(NSArray *)arg1 ;
-(void)mentionDecorator:(id)arg1 hasSuggestedMentions:(id)arg2 ;
-(void)mentionDecorator:(id)arg1 selectedMention:(id)arg2 ;
-(void)mentionDecoratorDidAbortProgressiveMentionalizing:(id)arg1 ;
-(void)mentionDecoratorDidFinishFetchingResults:(id)arg1 ;
-(void)mentionDecorator:(id)arg1 didChangeTextInTextView:(id)arg2 ;
-(void)_setMentionPickerHidden:(BOOL)arg1 ;
-(void)setMentionPicker:(UITableView *)arg1 ;
-(void)setPickerCollectionView:(UICollectionView *)arg1 ;
-(FBMentionsTaggingCollectionController *)mentionCollectionController;
-(void)setMentionsData:(FBSearchTableViewData *)arg1 ;
-(void)_updateMentionPicker;
-(void)_textViewDidChange:(id)arg1 ;
-(NSSet *)taggableCollections;
-(UICollectionView *)pickerCollectionView;
-(id)textColorForNamesInMentionDecorator:(id)arg1 ;
-(id)normalBackgroundColorForNamesInMentionDecorator:(id)arg1 ;
-(id)selectedBackgroundColorForNamesInMentionDecorator:(id)arg1 ;
-(id)textColorForSectionTitleInMentionDecorator:(id)arg1 ;
-(id)separatorColorInMentionDecorator:(id)arg1 ;
-(BOOL)isSyncingEnabled;
-(void)setMentionDecorator:(FBComposerMentionDecorator *)arg1 ;
-(void)setMentionCollectionController:(FBMentionsTaggingCollectionController *)arg1 ;
-(void)setTaggableCollections:(NSSet *)arg1 ;
-(FBSearchTableViewData *)mentionsData;
-(void)setDelegate:(id<FBCommentComposerMentionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCommentComposerMentionControllerDelegate>)delegate;
-(void)reset;
-(void)setTextView:(UITextView *)arg1 ;
-(BOOL)shouldChangeTextInRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(UITextView *)textView;
@end

