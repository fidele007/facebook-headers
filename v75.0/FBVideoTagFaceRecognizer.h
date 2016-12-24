/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoTagProcessingStep.h>

@protocol OS_dispatch_queue, FBVideoTagFaceRecognizerDelegate;
@class FBUserSession, FBVideoTagConfiguration, NSObject, NSString;

@interface FBVideoTagFaceRecognizer : NSObject <FBVideoTagProcessingStep> {

	FBUserSession* _session;
	FBVideoTagConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBVideoTagFaceRecognizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBVideoTagFaceRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(void)_sendRecognitionRequestWithFaceCropJPEGs:(id)arg1 faceBoxes:(id)arg2 videoAsset:(id)arg3 timestamp:(SCD_Struct_FB100)arg4 scenePath:(id)arg5 ;
-(id)_getNamedPeopleFromServerResponse:(id)arg1 ;
-(id)_tagSuggestionsFromDictionary:(id)arg1 ;
-(id)_tagSuggestionFromDictionary:(id)arg1 ;
-(void)recognizeFaceBoxes:(id)arg1 inImage:(id)arg2 inVideoAsset:(id)arg3 atTimestamp:(SCD_Struct_FB100)arg4 withScenePath:(id)arg5 ;
-(void)setDelegate:(id<FBVideoTagFaceRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBVideoTagFaceRecognizerDelegate>)delegate;
-(void)setDelegateQueue:(id)arg1 ;
@end

