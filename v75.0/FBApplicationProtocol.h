/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIWindow, NSArray, NSString;


@protocol FBApplicationProtocol <NSObject>
@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
@property (assign,getter=isNetworkActivityIndicatorVisible,nonatomic) BOOL networkActivityIndicatorVisible; 
@property (assign,nonatomic) long long statusBarOrientation; 
@property (nonatomic,readonly) UIWindow * keyWindow; 
@property (nonatomic,copy,readonly) NSArray * windows; 
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory; 
@required
-(long long)statusBarOrientation;
-(UIWindow *)keyWindow;
-(BOOL)openURL:(id)arg1;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1;
-(NSString *)preferredContentSizeCategory;
-(BOOL)isNetworkActivityIndicatorVisible;
-(void)setStatusBarOrientation:(long long)arg1;
-(BOOL)canOpenURL:(id)arg1;
-(BOOL)isProtectedDataAvailable;
-(NSArray *)windows;

@end
