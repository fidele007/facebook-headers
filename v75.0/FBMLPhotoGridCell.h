/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>
#import <Facebook/FBMLPhotoUploaderListener.h>
#import <Facebook/FBMLPhotoViewerContainerProtocol.h>

@protocol FBMLPhotoGridCellResponder;
@class UIView, CAGradientLayer, UILabel, UIImageView, NSSet, NSDate, FBTimer, FBMLHitTestSloppyButton, FBMLBlurredPhotoView, NSDateFormatter, FBMLPhotoUploaderSubscription, SYNPhoto, FBMLSession, FBMLPhotoView, UIColor, UIButton, NSValue, NSString;

@interface FBMLPhotoGridCell : SRFragmentCell <FBMLPhotoUploaderListener, FBMLPhotoViewerContainerProtocol> {

	BOOL _isBatchUpdating;
	UIView* _gradientView;
	CAGradientLayer* _gradientLayer;
	UIView* _darkenView;
	UILabel* _morePhotosLabel;
	UIImageView* _moreChevronImageView;
	unsigned long long _additionalPhotoCount;
	NSSet* _additionalPhotoUUIDs;
	int _currentUploadState;
	NSDate* _currentUploadStateStartTimestamp;
	FBTimer* _uploadBadgeUpdateTimer;
	UIImageView* _uploadBadgeView;
	UIImageView* _uploadBadgeOverlayView;
	FBMLHitTestSloppyButton* _selectionAccessory;
	FBMLBlurredPhotoView* _blurView;
	NSDateFormatter* _dateFormatter;
	FBMLPhotoUploaderSubscription* _photoUploaderSubscription;
	BOOL _contentIsSelected;
	BOOL _showUploadIndicator;
	int _selectionMode;
	int _imageQuality;
	SYNPhoto* _photo;
	FBMLSession* _momentsSession;
	FBMLPhotoView* _photoView;
	UIColor* _borderColor;
	id<FBMLPhotoGridCellResponder> _responder;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) SYNPhoto * photo;                                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) FBMLSession * momentsSession;                                 //@synthesize momentsSession=_momentsSession - In the implementation block
@property (assign,nonatomic) int selectionMode;                                            //@synthesize selectionMode=_selectionMode - In the implementation block
@property (assign,nonatomic) BOOL contentIsSelected;                                       //@synthesize contentIsSelected=_contentIsSelected - In the implementation block
@property (nonatomic,readonly) UIButton * selectionAccessory; 
@property (nonatomic,readonly) FBMLPhotoView * photoView;                                  //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) BOOL showUploadIndicator;                                     //@synthesize showUploadIndicator=_showUploadIndicator - In the implementation block
@property (assign,nonatomic) int imageQuality;                                             //@synthesize imageQuality=_imageQuality - In the implementation block
@property (nonatomic,copy) NSValue * boxedFocalPoint; 
@property (nonatomic,copy) NSValue * boxedFocalSize; 
@property (nonatomic,copy) UIColor * borderColor;                                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                      //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLPhotoGridCellResponder> responder;              //@synthesize responder=_responder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL animatedTransitionContainerHidden; 
+(id)_uploadBadgeSpinner;
+(id)_imageForUploadState:(int)arg1 ;
+(id)_queuedUploadBadge;
+(id)_completeUploadBadge;
+(id)_inProgressUploadBadge;
-(void)didTapAccessory;
-(void)didTapPhoto;
-(void)batchUpdate:(/*^block*/id)arg1 ;
-(void)_didLongPressPhoto:(id)arg1 ;
-(void)_ensureBadgeAnimation;
-(void)setContentIsSelected:(BOOL)arg1 ;
-(void)setBoxedFocalSize:(NSValue *)arg1 ;
-(void)setShowUploadIndicator:(BOOL)arg1 ;
-(NSValue *)boxedFocalPoint;
-(NSValue *)boxedFocalSize;
-(void)_updateUploadState;
-(void)_configureImageViewFromProperties;
-(int)_computeUploadState;
-(void)_setBlurAndPillHidden:(BOOL)arg1 ;
-(void)_onUploadBadgeTimer;
-(BOOL)animatedTransitionContainerHidden;
-(void)photoUploaderSubscription:(id)arg1 didUpdateToState:(id)arg2 ;
-(UIButton *)selectionAccessory;
-(int)selectionMode;
-(BOOL)contentIsSelected;
-(BOOL)showUploadIndicator;
-(int)imageQuality;
-(id)animatedTransitionContainerImage;
-(id)animatedTransitionContentView;
-(void)setAnimatedTransitionContainerHidden:(BOOL)arg1 ;
-(void)setAdditionalPhotos:(id)arg1 ;
-(void)setMomentsSession:(FBMLSession *)arg1 ;
-(void)setImageQuality:(int)arg1 ;
-(void)setBoxedFocalPoint:(NSValue *)arg1 ;
-(FBMLSession *)momentsSession;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setResponder:(id<FBMLPhotoGridCellResponder>)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)prepareForReuse;
-(void)setBorderColor:(UIColor *)arg1 ;
-(id<FBMLPhotoGridCellResponder>)responder;
-(UIColor *)borderColor;
-(void)setSelectionMode:(int)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setPhoto:(SYNPhoto *)arg1 ;
-(SYNPhoto *)photo;
-(FBMLPhotoView *)photoView;
@end

