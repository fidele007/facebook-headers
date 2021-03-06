/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTimelineProfilePictureControllerDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSString, NSURL, NSArray, FBUserSession, FBMemPerson;

@interface FBTimelineProfilePictureController : NSObject {

	NSString* _personID;
	NSURL* _profilePictureHighResImageURL;
	NSArray* _profilePictureLowResImageURLs;
	FBUserSession* _session;
	CGImageRef _highResImage;
	CGImageRef _lowResImage;
	BOOL _highResDownloadPending;
	double _size;
	/*^block*/id _logBlock;
	BOOL _canDownloadHighRes;
	FBMemPerson* _person;
	id<FBTimelineProfilePictureControllerDelegate> _delegate;
	id _highResImageDownload;
	id _lowResImageDownload;
	id _lowResCachedImageFetch;

}

@property (nonatomic,retain) id highResImageDownload;                                                     //@synthesize highResImageDownload=_highResImageDownload - In the implementation block
@property (nonatomic,retain) id lowResImageDownload;                                                      //@synthesize lowResImageDownload=_lowResImageDownload - In the implementation block
@property (nonatomic,retain) id lowResCachedImageFetch;                                                   //@synthesize lowResCachedImageFetch=_lowResCachedImageFetch - In the implementation block
@property (nonatomic,retain) FBMemPerson * person;                                                        //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) BOOL canDownloadHighRes;                                                     //@synthesize canDownloadHighRes=_canDownloadHighRes - In the implementation block
@property (assign,nonatomic,__weak) id<FBTimelineProfilePictureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 size:(double)arg2 logBlock:(/*^block*/id)arg3 ;
-(void)setCanDownloadHighRes:(BOOL)arg1 ;
-(void)setLowResImageDownload:(id)arg1 ;
-(BOOL)canDownloadHighRes;
-(id)lowResImageDownload;
-(void)setHighResImageDownload:(id)arg1 ;
-(void)setLowResCachedImageFetch:(id)arg1 ;
-(BOOL)shouldShowBlankState:(id)arg1 ;
-(void)_handleLowResImageUpdates:(id)arg1 ;
-(void)_handleHighResImageUpdates:(id)arg1 ;
-(void)_downloadImage:(id)arg1 isLowRes:(BOOL)arg2 ;
-(void)_fetchLowResImages:(id)arg1 ;
-(void)_handleImageDownloadResponseForURL:(id)arg1 withImage:(CGImageRef)arg2 isLowRes:(BOOL)arg3 isCached:(BOOL)arg4 ;
-(void)_cancelExistingDownload:(id)arg1 ;
-(BOOL)isViewingSelf:(id)arg1 ;
-(id)highResImageDownload;
-(id)lowResCachedImageFetch;
-(void)setDelegate:(id<FBTimelineProfilePictureControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBTimelineProfilePictureControllerDelegate>)delegate;
-(void)setPerson:(FBMemPerson *)arg1 ;
-(FBMemPerson *)person;
@end

