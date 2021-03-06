/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBGrowingComposerViewListener.h>
#import <Facebook/FBMStickerInputViewDelegate.h>

@protocol FBCommentComposerViewDelegate;
@class FBGrowingComposerView, FBCommentComposerButton, UIView, UITapGestureRecognizer, FBUserSession, FBInputWrapperView, UILongPressGestureRecognizer, FBFeedbackReactionDataProvider, NSString, UIImage, FBMStickerInputView, FBBottomSeparatorContainerView, FBMultiMediaAttachmentsView, FBCommentComposerAccessoryContainerView, FBAvatarProfilePictureView, UIColor;

@interface FBCommentComposerView : UIView <UIGestureRecognizerDelegate, FBGrowingComposerViewListener, FBMStickerInputViewDelegate> {

	FBGrowingComposerView* _composerView;
	FBCommentComposerButton* _cameraComposerButton;
	UIView* _mirroringNoticeAccessoryView;
	UIView* _audienceNoticeAccessoryView;
	unsigned long long _feedbackContainerType;
	UITapGestureRecognizer* _inputViewDismissalGestureRecognizer;
	BOOL _shouldUseSystemButtonType;
	FBUserSession* _session;
	BOOL _isPresentingStickerTrayFullScreen;
	FBInputWrapperView* _inputWrapperView;
	UITapGestureRecognizer* _stickerViewDismissalGestureRecognizer;
	BOOL _shouldDisplayCameraButtonInCommentComposer;
	UILongPressGestureRecognizer* _likeButtonLongPressGestureRecognizer;
	FBFeedbackReactionDataProvider* _reactionsDataProvider;
	NSString* _composerViewTextOnDismissal;
	BOOL _supportsPhotoAttachment;
	BOOL _supportsPrivateComments;
	BOOL _supportsVideoAttachment;
	BOOL _supportsStickerAttachment;
	BOOL _shouldHideTopBorder;
	BOOL _shouldHideTextViewBackground;
	BOOL _shouldDockComposerAfterLastComment;
	BOOL _stickerSearchEnabled;
	BOOL _privateCommentSelected;
	BOOL _privateCommentButtonEnabled;
	id<FBCommentComposerViewDelegate> _delegate;
	FBCommentComposerButton* _attachMediaButton;
	FBCommentComposerButton* _takeMediaButton;
	UIImage* _mediaAttachmentThumbnail;
	UIView* _topAccessoryView;
	NSString* _videoTimestamp;
	NSString* _commentsMirroringNotice;
	NSString* _commentsAudienceNotice;
	unsigned long long _dividerStyle;
	unsigned long long _maximumNumberOfLines;
	double _contentEdgeInsetsVerticalAdjustment;
	FBMStickerInputView* _stickerInputView;
	FBCommentComposerButton* _stickerComposerButton;
	FBCommentComposerButton* _gifComposerButton;
	FBCommentComposerButton* _videoTimestampButton;
	FBCommentComposerButton* _privateCommentComposerButton;
	FBBottomSeparatorContainerView* _attachmentsView;
	FBMultiMediaAttachmentsView* _mediaAttachmentView;
	FBCommentComposerAccessoryContainerView* _rightAccessoryContainerView;
	FBCommentComposerAccessoryContainerView* _textViewAccessoryContainerView;
	FBAvatarProfilePictureView* _profilePictureImageView;
	FBCommentComposerButton* _likeButton;

}

@property (nonatomic,retain) FBMStickerInputView * stickerInputView;                                                //@synthesize stickerInputView=_stickerInputView - In the implementation block
@property (nonatomic,retain) FBCommentComposerButton * attachMediaButton;                                           //@synthesize attachMediaButton=_attachMediaButton - In the implementation block
@property (nonatomic,retain) FBCommentComposerButton * stickerComposerButton;                                       //@synthesize stickerComposerButton=_stickerComposerButton - In the implementation block
@property (nonatomic,retain) FBCommentComposerButton * gifComposerButton;                                           //@synthesize gifComposerButton=_gifComposerButton - In the implementation block
@property (nonatomic,retain) FBCommentComposerButton * takeMediaButton;                                             //@synthesize takeMediaButton=_takeMediaButton - In the implementation block
@property (nonatomic,retain) FBCommentComposerButton * videoTimestampButton;                                        //@synthesize videoTimestampButton=_videoTimestampButton - In the implementation block
@property (nonatomic,retain) FBCommentComposerButton * privateCommentComposerButton;                                //@synthesize privateCommentComposerButton=_privateCommentComposerButton - In the implementation block
@property (nonatomic,retain) FBBottomSeparatorContainerView * attachmentsView;                                      //@synthesize attachmentsView=_attachmentsView - In the implementation block
@property (nonatomic,retain) FBMultiMediaAttachmentsView * mediaAttachmentView;                                     //@synthesize mediaAttachmentView=_mediaAttachmentView - In the implementation block
@property (nonatomic,retain) FBCommentComposerAccessoryContainerView * rightAccessoryContainerView;                 //@synthesize rightAccessoryContainerView=_rightAccessoryContainerView - In the implementation block
@property (nonatomic,retain) FBCommentComposerAccessoryContainerView * textViewAccessoryContainerView;              //@synthesize textViewAccessoryContainerView=_textViewAccessoryContainerView - In the implementation block
@property (nonatomic,retain) FBAvatarProfilePictureView * profilePictureImageView;                                  //@synthesize profilePictureImageView=_profilePictureImageView - In the implementation block
@property (nonatomic,retain) FBCommentComposerButton * likeButton;                                                  //@synthesize likeButton=_likeButton - In the implementation block
@property (assign,nonatomic,__weak) id<FBCommentComposerViewDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * mediaAttachmentThumbnail;                                                  //@synthesize mediaAttachmentThumbnail=_mediaAttachmentThumbnail - In the implementation block
@property (nonatomic,retain) UIView * topAccessoryView;                                                             //@synthesize topAccessoryView=_topAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL supportsPhotoAttachment;                                                          //@synthesize supportsPhotoAttachment=_supportsPhotoAttachment - In the implementation block
@property (assign,nonatomic) BOOL supportsPrivateComments;                                                          //@synthesize supportsPrivateComments=_supportsPrivateComments - In the implementation block
@property (assign,nonatomic) BOOL supportsVideoAttachment;                                                          //@synthesize supportsVideoAttachment=_supportsVideoAttachment - In the implementation block
@property (assign,nonatomic) BOOL supportsStickerAttachment;                                                        //@synthesize supportsStickerAttachment=_supportsStickerAttachment - In the implementation block
@property (nonatomic,copy) NSString * videoTimestamp;                                                               //@synthesize videoTimestamp=_videoTimestamp - In the implementation block
@property (nonatomic,copy) NSString * commentsMirroringNotice;                                                      //@synthesize commentsMirroringNotice=_commentsMirroringNotice - In the implementation block
@property (nonatomic,copy) NSString * commentsAudienceNotice;                                                       //@synthesize commentsAudienceNotice=_commentsAudienceNotice - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> commentAuthor; 
@property (assign,nonatomic) unsigned long long dividerStyle;                                                       //@synthesize dividerStyle=_dividerStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHideTopBorder;                                                              //@synthesize shouldHideTopBorder=_shouldHideTopBorder - In the implementation block
@property (assign,nonatomic) BOOL shouldHideTextViewBackground;                                                     //@synthesize shouldHideTextViewBackground=_shouldHideTextViewBackground - In the implementation block
@property (assign,nonatomic) BOOL shouldDockComposerAfterLastComment;                                               //@synthesize shouldDockComposerAfterLastComment=_shouldDockComposerAfterLastComment - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;                                               //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) double contentEdgeInsetsVerticalAdjustment;                                            //@synthesize contentEdgeInsetsVerticalAdjustment=_contentEdgeInsetsVerticalAdjustment - In the implementation block
@property (assign,nonatomic) BOOL stickerSearchEnabled;                                                             //@synthesize stickerSearchEnabled=_stickerSearchEnabled - In the implementation block
@property (assign,nonatomic) BOOL privateCommentSelected;                                                           //@synthesize privateCommentSelected=_privateCommentSelected - In the implementation block
@property (assign,nonatomic) BOOL privateCommentButtonEnabled;                                                      //@synthesize privateCommentButtonEnabled=_privateCommentButtonEnabled - In the implementation block
@property (nonatomic,copy) UIColor * textViewBorderColor; 
@property (nonatomic,copy) UIColor * textViewBackgroundColor; 
@property (nonatomic,retain) UIColor * placeholderTextColor; 
@property (nonatomic,retain) UIColor * textColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)stickerSearchEnabled;
-(void)setStickerSearchEnabled:(BOOL)arg1 ;
-(void)setProfilePictureImageView:(FBAvatarProfilePictureView *)arg1 ;
-(FBAvatarProfilePictureView *)profilePictureImageView;
-(FBBottomSeparatorContainerView *)attachmentsView;
-(void)setAttachmentsView:(FBBottomSeparatorContainerView *)arg1 ;
-(BOOL)shouldDockComposerAfterLastComment;
-(void)dismissCommentComposer;
-(id)initWithFrame:(CGRect)arg1 feedbackContainerType:(unsigned long long)arg2 shouldShowLikeButton:(BOOL)arg3 session:(id)arg4 ;
-(void)setDividerStyle:(unsigned long long)arg1 ;
-(void)setMediaAttachmentViewDelegate:(id)arg1 ;
-(void)setComposerViewDelegate:(id)arg1 ;
-(id)composerViewListenerAnnouncer;
-(void)setSupportsPhotoAttachment:(BOOL)arg1 ;
-(void)setSupportsVideoAttachment:(BOOL)arg1 ;
-(void)setSupportsStickerAttachment:(BOOL)arg1 ;
-(void)setCommentAuthor:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(void)setFeedbackContainerType:(unsigned long long)arg1 ;
-(BOOL)privateCommentSelected;
-(FBCommentComposerButton *)attachMediaButton;
-(void)growingComposerViewDidBeginEditing:(id)arg1 ;
-(void)growingComposerViewDidEndEditing:(id)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)commentAuthor;
-(void)showStickerPack:(id)arg1 ;
-(void)setVideoTimestamp:(NSString *)arg1 ;
-(void)setTextViewBackgroundColor:(UIColor *)arg1 ;
-(void)setTextViewBorderColor:(UIColor *)arg1 ;
-(void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2 ;
-(void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2 ;
-(void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_glyphSize;
-(int)composerMode;
-(void)showDefaultKeyboard;
-(void)showStickerTray;
-(void)setShouldHideTextViewBackground:(BOOL)arg1 ;
-(void)_sendButtonAction:(id)arg1 ;
-(void)_commentComposerNeedsResize:(id)arg1 ;
-(void)_deviceOrientationDidChange:(id)arg1 ;
-(void)_attachMediaButtonAction:(id)arg1 ;
-(void)_takeMediaButtonAction:(id)arg1 ;
-(void)_stickerComposerButtonAction:(id)arg1 ;
-(void)_gifComposerButtonAction:(id)arg1 ;
-(void)_privateCommentComposerButtonAction:(id)arg1 ;
-(void)setTopAccessoryView:(UIView *)arg1 ;
-(FBMultiMediaAttachmentsView *)mediaAttachmentView;
-(void)_setAttachmentView:(id)arg1 insets:(UIEdgeInsets)arg2 ;
-(void)_updateAccessoryViews;
-(double)_profilePictureImageSize;
-(void)_likeButtonLongPressAction:(id)arg1 ;
-(BOOL)_shouldConfigureProfilePictureImageView;
-(void)setShouldHideTopBorder:(BOOL)arg1 ;
-(void)_tappedForStickerDismissal:(id)arg1 ;
-(void)_addInputViewDismissalGestureRecognizer;
-(void)_addStickerViewDismissalGestureRecognizer;
-(void)_removeInputViewDismissalGestureRecognizer;
-(void)_removeStickerViewDismissalGestureRecognizer;
-(UIColor *)textViewBorderColor;
-(UIColor *)textViewBackgroundColor;
-(void)updateSendButtonEnabledAnimated:(BOOL)arg1 ;
-(id)_reactionImageForKey:(long long)arg1 ;
-(void)_updateComposerButtonState;
-(void)_updateComposerViewGestureRecognizers;
-(void)_updateComposerCaret;
-(void)_switchInputView:(id)arg1 ;
-(void)updateComposerState;
-(FBMStickerInputView *)stickerInputView;
-(void)_initInputContainerViewIfNeeded;
-(FBCommentComposerButton *)stickerComposerButton;
-(FBCommentComposerButton *)privateCommentComposerButton;
-(id)attachPhotoButton;
-(FBCommentComposerAccessoryContainerView *)textViewAccessoryContainerView;
-(void)_insertTextViewAccessoryView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_removeTextViewAccessoryView:(id)arg1 ;
-(FBCommentComposerButton *)videoTimestampButton;
-(void)_setLeftAccessoryView:(id)arg1 ;
-(UIImage *)mediaAttachmentThumbnail;
-(FBCommentComposerButton *)gifComposerButton;
-(void)_removeRightAccessoryView:(id)arg1 ;
-(FBCommentComposerAccessoryContainerView *)rightAccessoryContainerView;
-(void)_insertRightAccessoryView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)takePhotoButton;
-(void)_setNoticeAccessoryViewsVisible:(BOOL)arg1 ;
-(void)setMediaAttachmentThumbnail:(id)arg1 attachmentType:(unsigned long long)arg2 ;
-(void)setContentEdgeInsetsVerticalAdjustment:(double)arg1 ;
-(void)updateSendButtonTitle:(id)arg1 ;
-(void)setFeedbackReactionKey:(long long)arg1 ;
-(void)setPrivateCommentSelected:(BOOL)arg1 ;
-(void)setPrivateCommentButtonEnabled:(BOOL)arg1 ;
-(void)setCommentsMirroringNotice:(NSString *)arg1 ;
-(void)setCommentsAudienceNotice:(NSString *)arg1 ;
-(void)setAttachMediaButton:(FBCommentComposerButton *)arg1 ;
-(FBCommentComposerButton *)takeMediaButton;
-(void)setTakeMediaButton:(FBCommentComposerButton *)arg1 ;
-(UIView *)topAccessoryView;
-(BOOL)supportsPhotoAttachment;
-(BOOL)supportsVideoAttachment;
-(BOOL)supportsStickerAttachment;
-(NSString *)videoTimestamp;
-(NSString *)commentsMirroringNotice;
-(NSString *)commentsAudienceNotice;
-(unsigned long long)dividerStyle;
-(BOOL)shouldHideTopBorder;
-(BOOL)shouldHideTextViewBackground;
-(void)setShouldDockComposerAfterLastComment:(BOOL)arg1 ;
-(double)contentEdgeInsetsVerticalAdjustment;
-(BOOL)privateCommentButtonEnabled;
-(void)setStickerInputView:(FBMStickerInputView *)arg1 ;
-(void)setStickerComposerButton:(FBCommentComposerButton *)arg1 ;
-(void)setGifComposerButton:(FBCommentComposerButton *)arg1 ;
-(void)setVideoTimestampButton:(FBCommentComposerButton *)arg1 ;
-(void)setPrivateCommentComposerButton:(FBCommentComposerButton *)arg1 ;
-(void)setMediaAttachmentView:(FBMultiMediaAttachmentsView *)arg1 ;
-(void)setRightAccessoryContainerView:(FBCommentComposerAccessoryContainerView *)arg1 ;
-(void)setTextViewAccessoryContainerView:(FBCommentComposerAccessoryContainerView *)arg1 ;
-(void)setLikeButton:(FBCommentComposerButton *)arg1 ;
-(void)setDelegate:(id<FBCommentComposerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBCommentComposerViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(UIColor *)textColor;
-(void)paste:(id)arg1 ;
-(id)textView;
-(unsigned long long)maximumNumberOfLines;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(void)setPlaceholderText:(id)arg1 ;
-(BOOL)supportsPrivateComments;
-(void)setSupportsPrivateComments:(BOOL)arg1 ;
-(void)_likeButtonAction:(id)arg1 ;
-(FBCommentComposerButton *)likeButton;
@end

