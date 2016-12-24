/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>

@protocol FBMLPhotoGroupHeaderCellResponder;
@class UILabel, UIButton, UIControl, UIView, NSString;

@interface FBMLPhotoGroupHeaderCell : SRFragmentCell {

	BOOL _isBatchUpdating;
	UILabel* _topLabel;
	UILabel* _bottomLabel;
	UIButton* _checkmark;
	UIControl* _singleTapTargetControl;
	UIView* _touchStateOverlay;
	NSString* _timeText;
	NSString* _locationText;
	id<FBMLPhotoGroupHeaderCellResponder> _responder;

}

@property (nonatomic,copy) NSString * timeText;                                                   //@synthesize timeText=_timeText - In the implementation block
@property (nonatomic,copy) NSString * locationText;                                               //@synthesize locationText=_locationText - In the implementation block
@property (assign,nonatomic) BOOL photosSelected; 
@property (assign,nonatomic,__weak) id<FBMLPhotoGroupHeaderCellResponder> responder;              //@synthesize responder=_responder - In the implementation block
+(id)_normalCheckmark;
+(id)_highlightedCheckmark;
+(double)heightThatFitsConstrainWidth:(double)arg1 timeText:(id)arg2 locationText:(id)arg3 ;
-(void)_configureViewsFromProps;
-(void)batchUpdates:(/*^block*/id)arg1 ;
-(void)_didTouchDown;
-(void)_didTouchCancel;
-(void)_didTouchUpInside;
-(void)_didTouchUpOutside;
-(void)_checkmarkTapped:(id)arg1 ;
-(void)setTimeText:(NSString *)arg1 ;
-(void)setPhotosSelected:(BOOL)arg1 ;
-(BOOL)photosSelected;
-(NSString *)timeText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setResponder:(id<FBMLPhotoGroupHeaderCellResponder>)arg1 ;
-(void)prepareForReuse;
-(id<FBMLPhotoGroupHeaderCellResponder>)responder;
-(void)setLocationText:(NSString *)arg1 ;
-(NSString *)locationText;
@end

