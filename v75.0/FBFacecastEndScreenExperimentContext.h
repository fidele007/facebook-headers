/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBFacecastEndScreenExperimentContext : FBExperimentContext {

	NSString* _deleteButtonTitle;
	BOOL _showVideo;
	NSString* _postButtonTitle;
	BOOL _allowDeletion;
	BOOL _allowVideoEditing;
	BOOL _showPrivacyButton;
	BOOL _showFullSizeVideoDesign;
	BOOL _uploadHdAutomatically;
	BOOL _uploadHdOnByDefaultInRightConditions;
	NSString* _deleteVideoToggleTitle;

}

@property (nonatomic,copy) NSString * deleteButtonTitle;                             //@synthesize deleteButtonTitle=_deleteButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL showVideo;                                         //@synthesize showVideo=_showVideo - In the implementation block
@property (nonatomic,copy) NSString * postButtonTitle;                               //@synthesize postButtonTitle=_postButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL allowDeletion;                                     //@synthesize allowDeletion=_allowDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowVideoEditing;                                 //@synthesize allowVideoEditing=_allowVideoEditing - In the implementation block
@property (assign,nonatomic) BOOL showPrivacyButton;                                 //@synthesize showPrivacyButton=_showPrivacyButton - In the implementation block
@property (assign,nonatomic) BOOL showFullSizeVideoDesign;                           //@synthesize showFullSizeVideoDesign=_showFullSizeVideoDesign - In the implementation block
@property (assign,nonatomic) BOOL uploadHdAutomatically;                             //@synthesize uploadHdAutomatically=_uploadHdAutomatically - In the implementation block
@property (assign,nonatomic) BOOL uploadHdOnByDefaultInRightConditions;              //@synthesize uploadHdOnByDefaultInRightConditions=_uploadHdOnByDefaultInRightConditions - In the implementation block
@property (nonatomic,copy) NSString * deleteVideoToggleTitle;                        //@synthesize deleteVideoToggleTitle=_deleteVideoToggleTitle - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)allowDeletion;
-(BOOL)allowVideoEditing;
-(NSString *)deleteButtonTitle;
-(NSString *)deleteVideoToggleTitle;
-(NSString *)postButtonTitle;
-(BOOL)showFullSizeVideoDesign;
-(BOOL)showPrivacyButton;
-(BOOL)showVideo;
-(BOOL)uploadHdAutomatically;
-(BOOL)uploadHdOnByDefaultInRightConditions;
-(void)setDeleteButtonTitle:(NSString *)arg1 ;
-(void)setShowVideo:(BOOL)arg1 ;
-(void)setAllowDeletion:(BOOL)arg1 ;
-(void)setAllowVideoEditing:(BOOL)arg1 ;
-(void)setShowPrivacyButton:(BOOL)arg1 ;
-(void)setShowFullSizeVideoDesign:(BOOL)arg1 ;
-(void)setUploadHdAutomatically:(BOOL)arg1 ;
-(void)setUploadHdOnByDefaultInRightConditions:(BOOL)arg1 ;
-(void)setDeleteVideoToggleTitle:(NSString *)arg1 ;
-(void)setPostButtonTitle:(NSString *)arg1 ;
@end

