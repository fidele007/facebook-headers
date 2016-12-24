/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBNetworkImageViewDelegate;
@class FBImageDownloader, UIImage, NSURL, FBScenePath, NSString;

@interface FBNetworkImageView : UIView {

	BOOL _deferred;
	unsigned _deferSentinel;
	FBImageDownloader* _imageDownloader;
	id _imageDownload;
	unsigned long long _contentType;
	id<FBNetworkImageViewDelegate> _delegate;
	UIImage* _defaultImage;
	NSURL* _imageURL;
	unsigned long long _transitionMode;
	FBScenePath* _scenePath;
	long long _priority;
	NSString* _module;

}

@property (assign,nonatomic,__weak) id<FBNetworkImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                                      //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                            //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) unsigned long long transitionMode;                           //@synthesize transitionMode=_transitionMode - In the implementation block
@property (nonatomic,retain) FBScenePath * scenePath;                                     //@synthesize scenePath=_scenePath - In the implementation block
@property (assign,nonatomic) long long priority;                                          //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSString * module;                                             //@synthesize module=_module - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfImageURL;
-(NSString *)module;
-(void)setImageURL:(id)arg1 resetToDefaultImageWhileLoading:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(FBScenePath *)scenePath;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(void)setModule:(NSString *)arg1 ;
-(void)setTransitionMode:(unsigned long long)arg1 ;
-(void)_resetToDefaultImage;
-(unsigned long long)transitionMode;
-(void)_startDownload;
-(void)_handleImageDownloaderResponse:(id)arg1 forImageURL:(id)arg2 ;
-(void)_setContentsToDownloadedImage:(CGImageRef)arg1 ;
-(void)_enterDeferredModeIfNeededForSentinel:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBNetworkImageViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(id<FBNetworkImageViewDelegate>)delegate;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(UIImage *)defaultImage;
-(void)setDefaultImage:(UIImage *)arg1 ;
@end
