/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBMSHScrollCardProviding.h>

@class NSString, FBMemStoryAttachment, FBFeedToolbox, UIImage, FBMemBusinessLocationAttachmentStyleInfo;

@interface FBMSBusinessLocationCardComponent : CKCompositeComponent <FBMSHScrollCardProviding> {

	NSString* _attachmentURLString;
	unsigned long long _index;
	FBMSHCustomCardOptions _options;
	FBMemStoryAttachment* _subAttachment;
	FBFeedToolbox* _toolbox;
	UIImage* _logo;
	FBMemBusinessLocationAttachmentStyleInfo* _styleInfo;

}

@property (nonatomic,retain) FBFeedToolbox * toolbox;                                           //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                                    //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) FBMemBusinessLocationAttachmentStyleInfo * styleInfo;              //@synthesize styleInfo=_styleInfo - In the implementation block
+(BOOL)canRenderAttachment:(id)arg1 toolbox:(id)arg2 ;
+(id)newWithAttachment:(id)arg1 index:(unsigned long long)arg2 options:(const FBMSHCustomCardOptions*)arg3 toolbox:(id)arg4 ;
-(FBFeedToolbox *)toolbox;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(void)didTap:(id)arg1 ;
-(void)setStyleInfo:(FBMemBusinessLocationAttachmentStyleInfo *)arg1 ;
-(FBMemBusinessLocationAttachmentStyleInfo *)styleInfo;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
@end

