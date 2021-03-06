/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FB360SphericalPhotoContext : FBExperimentContext {

	BOOL _isAlbumMmpProductionOn;
	BOOL _isAlbumMmpConsumptionOn;
	BOOL _sphericalPhotoPromptEnabled;
	BOOL _sphericalPhotoFooterEnabled;

}

@property (assign,nonatomic) BOOL isAlbumMmpProductionOn;                   //@synthesize isAlbumMmpProductionOn=_isAlbumMmpProductionOn - In the implementation block
@property (assign,nonatomic) BOOL isAlbumMmpConsumptionOn;                  //@synthesize isAlbumMmpConsumptionOn=_isAlbumMmpConsumptionOn - In the implementation block
@property (assign,nonatomic) BOOL sphericalPhotoPromptEnabled;              //@synthesize sphericalPhotoPromptEnabled=_sphericalPhotoPromptEnabled - In the implementation block
@property (assign,nonatomic) BOOL sphericalPhotoFooterEnabled;              //@synthesize sphericalPhotoFooterEnabled=_sphericalPhotoFooterEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)isAlbumMmpConsumptionOn;
-(BOOL)isAlbumMmpProductionOn;
-(BOOL)sphericalPhotoFooterEnabled;
-(BOOL)sphericalPhotoPromptEnabled;
-(void)setIsAlbumMmpProductionOn:(BOOL)arg1 ;
-(void)setIsAlbumMmpConsumptionOn:(BOOL)arg1 ;
-(void)setSphericalPhotoPromptEnabled:(BOOL)arg1 ;
-(void)setSphericalPhotoFooterEnabled:(BOOL)arg1 ;
@end

