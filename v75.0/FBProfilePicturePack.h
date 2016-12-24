/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, FBMemPhoto, NSString;

@interface FBProfilePicturePack : FBValueObject <NSCopying> {

	UIImage* _originalImage;
	FBMemPhoto* _selectedPhoto;
	NSString* _currentProfilePictureFBID;
	UIImage* _finalImage;
	UIImage* _initialImage;

}

@property (nonatomic,copy,readonly) UIImage * originalImage;                           //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy,readonly) FBMemPhoto * selectedPhoto;                        //@synthesize selectedPhoto=_selectedPhoto - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentProfilePictureFBID;              //@synthesize currentProfilePictureFBID=_currentProfilePictureFBID - In the implementation block
@property (nonatomic,copy,readonly) UIImage * finalImage;                              //@synthesize finalImage=_finalImage - In the implementation block
@property (nonatomic,copy,readonly) UIImage * initialImage;                            //@synthesize initialImage=_initialImage - In the implementation block
-(id)initWithOriginalImage:(id)arg1 selectedPhoto:(id)arg2 currentProfilePictureFBID:(id)arg3 finalImage:(id)arg4 initialImage:(id)arg5 ;
-(UIImage *)finalImage;
-(NSString *)currentProfilePictureFBID;
-(UIImage *)initialImage;
-(FBMemPhoto *)selectedPhoto;
-(UIImage *)originalImage;
@end

