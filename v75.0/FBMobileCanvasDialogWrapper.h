/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMobileCanvasDialog.h>

@protocol FBMobileCanvasDialog;
@class NSString;

@interface FBMobileCanvasDialogWrapper : NSObject <FBMobileCanvasDialog> {

	FBMobileCanvasDialogWrapper* _opener;
	FBMobileCanvasDialogWrapper* _childDialog;
	id<FBMobileCanvasDialog> _decoratedObject;
	NSString* _childDialogID;

}

@property (assign,nonatomic,__weak) id<FBMobileCanvasDialog> decoratedObject;              //@synthesize decoratedObject=_decoratedObject - In the implementation block
@property (nonatomic,retain) FBMobileCanvasDialogWrapper * opener; 
@property (nonatomic,retain) FBMobileCanvasDialogWrapper * childDialog; 
@property (nonatomic,copy) NSString * childDialogID;                                       //@synthesize childDialogID=_childDialogID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDecoratedObject:(id<FBMobileCanvasDialog>)arg1 ;
-(id<FBMobileCanvasDialog>)decoratedObject;
-(id)openDialogWithURL:(id)arg1 ;
-(void)setCancelButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setActionButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)closeDialog:(id)arg1 ;
-(FBMobileCanvasDialogWrapper *)opener;
-(void)setOpener:(FBMobileCanvasDialogWrapper *)arg1 ;
-(FBMobileCanvasDialogWrapper *)childDialog;
-(void)setChildDialog:(FBMobileCanvasDialogWrapper *)arg1 ;
-(NSString *)childDialogID;
-(void)setChildDialogID:(NSString *)arg1 ;
-(id)webView;
-(void)close;
@end
