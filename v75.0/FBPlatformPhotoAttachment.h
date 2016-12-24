/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPhotoAttachmentProtocol.h>

@class NSMutableArray, NSString, NSArray, UIImage, FBAssetMetadata, NSDate, FBPhotoAssetEdits, NSDictionary, CLLocation;

@interface FBPlatformPhotoAttachment : NSObject <FBPhotoAttachmentProtocol> {

	NSMutableArray* _publishedPhotoTags;
	BOOL _livePhotoHasPlayed;
	BOOL _allowEditing;
	BOOL _allowRemoval;
	NSString* _caption;
	NSArray* _mentions;
	UIImage* _thumbnailImage;
	NSString* _assetID;
	FBAssetMetadata* _metadata;
	NSDate* _creationDate;
	NSArray* _tagsEdges;
	NSString* _dataSourceID;
	NSString* _dataSourceDescription;
	UIImage* _displayImage;
	UIImage* _image;
	unsigned long long _indexHint;
	FBPhotoAssetEdits* _edits;
	NSDictionary* _platformPhotoMetadata;

}

@property (nonatomic,retain) UIImage * thumbnailImage;                                                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                        //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) BOOL allowRemoval;                                                        //@synthesize allowRemoval=_allowRemoval - In the implementation block
@property (nonatomic,copy) NSString * assetID;                                                         //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) FBAssetMetadata * metadata;                                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,copy) NSArray * publishedPhotoTags;                                               //@synthesize publishedPhotoTags=_publishedPhotoTags - In the implementation block
@property (nonatomic,copy) NSArray * tagsEdges;                                                        //@synthesize tagsEdges=_tagsEdges - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataSourceID;                                           //@synthesize dataSourceID=_dataSourceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataSourceDescription;                                  //@synthesize dataSourceDescription=_dataSourceDescription - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                                                   //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long indexHint;                                             //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,retain) FBPhotoAssetEdits * edits;                                                //@synthesize edits=_edits - In the implementation block
@property (nonatomic,retain) NSDictionary * platformPhotoMetadata;                                     //@synthesize platformPhotoMetadata=_platformPhotoMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * caption;                                                         //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSArray * mentions;                                                         //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,readonly) BOOL requiresUpload; 
@property (nonatomic,readonly) BOOL selectedFromMultiPicker; 
@property (nonatomic,copy,readonly) NSString * existingFBID; 
@property (nonatomic,readonly) BOOL isLivePhoto; 
@property (nonatomic,copy,readonly) NSString * nameOfServerAssetIDFieldOverridingFileURL; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (assign,nonatomic) BOOL livePhotoHasPlayed;                                                  //@synthesize livePhotoHasPlayed=_livePhotoHasPlayed - In the implementation block
+(id)propertiesToSkipForCoding;
-(NSString *)assetID;
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
-(void)setDisplayImage:(UIImage *)arg1 ;
-(unsigned long long)indexHint;
-(void)setIndexHint:(unsigned long long)arg1 ;
-(NSArray *)tagsEdges;
-(void)setAssetID:(NSString *)arg1 ;
-(NSString *)dataSourceDescription;
-(id)initWithAssetID:(id)arg1 platformPhotoMetadata:(id)arg2 ;
-(void)setTagsEdges:(NSArray *)arg1 ;
-(BOOL)is360Photo;
-(void)setPublishedPhotoTags:(NSArray *)arg1 ;
-(NSDictionary *)platformPhotoMetadata;
-(void)setPlatformPhotoMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)attachmentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(CGSize)imageSize;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(UIImage *)displayImage;
-(NSString *)dataSourceID;
-(FBAssetMetadata *)metadata;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setMentions:(NSArray *)arg1 ;
-(NSArray *)mentions;
-(void)setAllowEditing:(BOOL)arg1 ;
-(BOOL)allowEditing;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(double)aspectRatio;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)isLivePhoto;
@end

