/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBPhotoAssetEdits, NSString, UIImage;


@protocol FBEditableIdentifiablePhoto <NSObject>
@property (nonatomic,retain) FBPhotoAssetEdits * edits; 
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,readonly) UIImage * displayThumbnailImage; 
@required
-(NSString *)assetID;
-(FBPhotoAssetEdits *)edits;
-(void)setEdits:(id)arg1;
-(void)setDisplayImage:(id)arg1;
-(UIImage *)displayThumbnailImage;
-(UIImage *)displayImage;

@end

