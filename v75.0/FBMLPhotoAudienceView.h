/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBMLTouchableTextViewResponder.h>

@protocol FBMLPhotoAudienceViewResponder;
@class NSString, UILabel, FBMLTouchableTextView, NSDate, FBTimer, SYNPhoto;

@interface FBMLPhotoAudienceView : UIView <FBMLTouchableTextViewResponder> {

	NSString* _sessionUserUUID;
	UILabel* _ownerLabel;
	UILabel* _timestampLabel;
	UILabel* _statusLabel;
	FBMLTouchableTextView* _textView;
	NSDate* _loadingStateChangeDate;
	FBTimer* _loadingStateTimer;
	unsigned long long _displayedLoadingState;
	BOOL _isFullAudienceShown;
	SYNPhoto* _photo;
	unsigned long long _loadingState;
	id<FBMLPhotoAudienceViewResponder> _responder;

}

@property (nonatomic,retain) SYNPhoto * photo;                                                 //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) BOOL isFullAudienceShown;                                         //@synthesize isFullAudienceShown=_isFullAudienceShown - In the implementation block
@property (assign,nonatomic) unsigned long long loadingState;                                  //@synthesize loadingState=_loadingState - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLPhotoAudienceViewResponder> responder;              //@synthesize responder=_responder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_nonUserAttributes;
+(id)_userAttributes;
+(id)_attributedTextForPhoto:(id)arg1 sessionUserUUID:(id)arg2 ;
+(id)_shadow;
-(void)_configureViewFromProps;
-(void)_updateLoadingState;
-(BOOL)isFullAudienceShown;
-(id)initWithSessionUserUUID:(id)arg1 ;
-(void)setIsFullAudienceShown:(BOOL)arg1 ;
-(void)touchableTextView:(id)arg1 didTapTarget:(id)arg2 frame:(CGRect)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setResponder:(id<FBMLPhotoAudienceViewResponder>)arg1 ;
-(id<FBMLPhotoAudienceViewResponder>)responder;
-(unsigned long long)loadingState;
-(void)setLoadingState:(unsigned long long)arg1 ;
-(void)setPhoto:(SYNPhoto *)arg1 ;
-(SYNPhoto *)photo;
@end
