/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPhotoAttachmentProtocol.h>

@class CLLocation, NSArray, FBPhotoAssetEdits, NSString, NSDate, UIImage, NSURL, FBAssetMetadata;

@interface FBComposerAppExtensionPhotoAttachment : NSObject <FBPhotoAttachmentProtocol> {

	NSString* _fbID;
	BOOL _livePhotoHasPlayed;
	CLLocation* _location;
	FBPhotoAssetEdits* _edits;
	NSDate* _creationDate;
	NSString* _assetID;
	UIImage* _thumbnailImage;
	NSURL* _fileURL;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                                                   //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * thumbnailImage;                                                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL allowEditing; 
@property (assign,nonatomic) BOOL allowRemoval; 
@property (nonatomic,copy,readonly) NSString * assetID;                                                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) FBAssetMetadata * metadata; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,retain) NSDate * creationDate;                                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSArray * mentions; 
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,readonly) BOOL selectedFromMultiPicker; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,copy,readonly) NSString * nameOfServerAssetIDFieldOverridingFileURL; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) CLLocation * location;                                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * publishedPhotoTags; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) FBPhotoAssetEdits * edits;                                                //@synthesize edits=_edits - In the implementation block
@property (assign,nonatomic) BOOL livePhotoHasPlayed;                                                  //@synthesize livePhotoHasPlayed=_livePhotoHasPlayed - In the implementation block
-(NSString *)assetID;
-(id)initWithFileURL:(id)arg1 fbID:(id)arg2 ;
-(void)loadImageDataForUploadWithCompressionRate:(double)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)supportsQualitySampling;
-(BOOL)isPhotoCropped;
-(NSArray *)publishedPhotoTags;
-(FBPhotoAssetEdits *)edits;
-(void)setEdits:(FBPhotoAssetEdits *)arg1 ;
-(BOOL)livePhotoHasPlayed;
-(void)setLivePhotoHasPlayed:(BOOL)arg1 ;
-(id)visualDedupRepresentation;
-(BOOL)allowRemoval;
-(void)setAllowRemoval:(BOOL)arg1 ;
-(BOOL)requiresUpload;
-(BOOL)selectedFromMultiPicker;
-(NSString *)existingFBID;
-(NSString *)nameOfServerAssetIDFieldOverridingFileURL;
-(unsigned long long)attachmentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)imageSize;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSURL *)fileURL;
-(FBAssetMetadata *)metadata;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(void)setAllowEditing:(BOOL)arg1 ;
-(BOOL)allowEditing;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)isLivePhoto;
@end
