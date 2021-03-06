/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaAttachmentProtocol, FBClonePhotoView;
@class UIView, NSString;

@interface FBComposerMediaViewNavigationPayload : NSObject {

	BOOL _showTaggingMode;
	BOOL _showAll;
	BOOL _tappedVideoTag;
	BOOL _isEditingMode;
	id<FBMediaAttachmentProtocol> _attachment;
	UIView*<FBClonePhotoView> _transitionView;
	NSString* _faceBoxID;

}

@property (nonatomic,readonly) id<FBMediaAttachmentProtocol> attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) UIView*<FBClonePhotoView> transitionView;              //@synthesize transitionView=_transitionView - In the implementation block
@property (nonatomic,copy,readonly) NSString * faceBoxID;                             //@synthesize faceBoxID=_faceBoxID - In the implementation block
@property (nonatomic,readonly) BOOL showTaggingMode;                                  //@synthesize showTaggingMode=_showTaggingMode - In the implementation block
@property (nonatomic,readonly) BOOL showAll;                                          //@synthesize showAll=_showAll - In the implementation block
@property (nonatomic,readonly) BOOL tappedVideoTag;                                   //@synthesize tappedVideoTag=_tappedVideoTag - In the implementation block
@property (nonatomic,readonly) BOOL isEditingMode;                                    //@synthesize isEditingMode=_isEditingMode - In the implementation block
-(id)initWithAttachment:(id)arg1 transitionView:(id)arg2 faceBoxID:(id)arg3 showTaggingMode:(BOOL)arg4 showAll:(BOOL)arg5 tappedVideoTag:(BOOL)arg6 isEditingMode:(BOOL)arg7 ;
-(NSString *)faceBoxID;
-(BOOL)isEditingMode;
-(BOOL)tappedVideoTag;
-(BOOL)showTaggingMode;
-(UIView*<FBClonePhotoView>)transitionView;
-(id<FBMediaAttachmentProtocol>)attachment;
-(BOOL)showAll;
@end

