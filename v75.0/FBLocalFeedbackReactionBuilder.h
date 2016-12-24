/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIImage, KFVector;

@interface FBLocalFeedbackReactionBuilder : NSObject {

	long long _key;
	NSString* _localizedName;
	UIColor* _color;
	UIImage* _faceImage16;
	UIImage* _stackedFaceImage16;
	NSString* _faceImage16VersionName;
	UIImage* _faceImage24;
	NSString* _faceImage24VersionName;
	UIImage* _faceImage32;
	NSString* _faceImage32VersionName;
	KFVector* _inputFaceModel;
	NSString* _inputFaceModelVersionName;
	KFVector* _postTapAnimationModel;
	NSString* _postTapAnimationModelVersionName;

}
+(id)localFeedbackReaction;
+(id)localFeedbackReactionFromExistingLocalFeedbackReaction:(id)arg1 ;
-(id)withKey:(long long)arg1 ;
-(id)withLocalizedName:(id)arg1 ;
-(id)withColor:(id)arg1 ;
-(id)withFaceImage16:(id)arg1 ;
-(id)withStackedFaceImage16:(id)arg1 ;
-(id)withFaceImage16VersionName:(id)arg1 ;
-(id)withFaceImage24:(id)arg1 ;
-(id)withFaceImage24VersionName:(id)arg1 ;
-(id)withFaceImage32:(id)arg1 ;
-(id)withFaceImage32VersionName:(id)arg1 ;
-(id)withInputFaceModel:(id)arg1 ;
-(id)withInputFaceModelVersionName:(id)arg1 ;
-(id)withPostTapAnimationModel:(id)arg1 ;
-(id)withPostTapAnimationModelVersionName:(id)arg1 ;
-(id)build;
@end

