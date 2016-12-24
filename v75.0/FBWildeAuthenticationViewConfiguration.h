/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAuthenticationViewConfiguring.h>

@class FBImageDownloader, NSString;

@interface FBWildeAuthenticationViewConfiguration : NSObject <FBAuthenticationViewConfiguring> {

	FBImageDownloader* _imageDownloader;
	BOOL _shouldSkipSSOLogin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldSkipSSOLogin;               //@synthesize shouldSkipSSOLogin=_shouldSkipSSOLogin - In the implementation block
-(id)initWithImageDownloader:(id)arg1 ;
-(id)newAuthenticationView;
-(id)newLogoutView;
-(unsigned long long)preferedErrorMessageStyle;
-(Class)preferedTooltipBorderViewClass;
-(unsigned long long)loginApprovalFailureAction;
-(BOOL)shouldSkipSSOLogin;
-(void)setShouldSkipSSOLogin:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
@end

