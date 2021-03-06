/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSAttributedString, FBSwipeableFramesTextAssetOrientation, NSString;

@interface FBSwipeableFramesTextAsset : FBValueObject <FBObjectShallowCopyProtocol, NSCopying> {

	UIImage* _image;
	NSAttributedString* _attributedText;
	FBSwipeableFramesTextAssetOrientation* _portraitOrientation;
	FBSwipeableFramesTextAssetOrientation* _landscapeOrientation;

}

@property (nonatomic,copy,readonly) UIImage * image;                                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedText;                                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy,readonly) FBSwipeableFramesTextAssetOrientation * portraitOrientation;               //@synthesize portraitOrientation=_portraitOrientation - In the implementation block
@property (nonatomic,copy,readonly) FBSwipeableFramesTextAssetOrientation * landscapeOrientation;              //@synthesize landscapeOrientation=_landscapeOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImage:(id)arg1 attributedText:(id)arg2 portraitOrientation:(id)arg3 landscapeOrientation:(id)arg4 ;
-(FBSwipeableFramesTextAssetOrientation *)portraitOrientation;
-(FBSwipeableFramesTextAssetOrientation *)landscapeOrientation;
-(UIImage *)image;
-(NSAttributedString *)attributedText;
-(id)shallowCopy;
@end

