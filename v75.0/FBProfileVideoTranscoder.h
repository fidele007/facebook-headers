/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoWriterDelegate.h>

@protocol FBProfileVideoTranscoderDelegate;
@class FBUserSession, NSString, FBProfileVideoLogger, UIImage, FBProfileVideoWriter;

@interface FBProfileVideoTranscoder : NSObject <FBVideoWriterDelegate> {

	FBUserSession* _session;
	unsigned long long _profileVideoHostType;
	NSString* _targetID;
	FBProfileVideoLogger* _profileVideoLogger;
	id<FBProfileVideoTranscoderDelegate> _delegate;
	UIImage* _thumbnailImage;
	SCD_Struct_FB100 _frameOffset;
	FBProfileVideoWriter* _profileVideoWriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 profileVideoHostType:(unsigned long long)arg2 targetID:(id)arg3 profileVideoLogger:(id)arg4 delegate:(id)arg5 ;
-(void)_callBackToAcceptProfileVideo:(id)arg1 ;
-(void)_trimmedProfileVideoSaveDidFailWithError:(id)arg1 ;
-(void)videoWriter:(id)arg1 didExportEditedVideo:(id)arg2 ;
-(void)videoWriter:(id)arg1 didFailSavingEditedVideoWithError:(id)arg2 atStep:(id)arg3 ;
-(void)finishEditingWithVideo:(id)arg1 videoClip:(id)arg2 cropRect:(CGRect)arg3 overlayImage:(id)arg4 thumbnailImage:(id)arg5 frameOffset:(SCD_Struct_FB100)arg6 modified:(BOOL)arg7 ;
@end

