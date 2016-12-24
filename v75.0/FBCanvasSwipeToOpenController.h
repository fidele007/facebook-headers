/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBrowserScrollViewDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <Facebook/FBWebViewContainerControllerDelegate.h>

@protocol FBCanvasSwipeToOpenViewDelegate;
@class FBInstantShoppingDocumentView, FBUserSession, NSString, NSDictionary, NSArray, UIViewController;

@interface FBCanvasSwipeToOpenController : NSObject <FBBrowserScrollViewDelegate, SKStoreProductViewControllerDelegate, FBWebViewContainerControllerDelegate> {

	FBInstantShoppingDocumentView* _documentView;
	FBUserSession* _session;
	NSString* _webViewURL;
	NSDictionary* _storeProductViewParam;
	BOOL _documentViewScrolledToSwipeToOpenView;
	double _originalDocumentHeight;
	BOOL _canvasBeginDraggingInLastPage;
	BOOL _showSwipeToOpen;
	NSArray* _trackingCodes;
	BOOL _webViewLoaded;
	id<FBCanvasSwipeToOpenViewDelegate> _delegate;
	UIViewController* _swipeToOpenViewController;

}

@property (assign,nonatomic,__weak) id<FBCanvasSwipeToOpenViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * swipeToOpenViewController;                   //@synthesize swipeToOpenViewController=_swipeToOpenViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissWebViewContainerController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_openSwipeToOpenView;
-(CGPoint)_canvasLastPageContentOffset;
-(void)_closeSwipeToOpenView;
-(void)loadSwipeToOpenWebView;
-(void)browserScrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)initWithSwipeToOpenViewController:(id)arg1 documentView:(id)arg2 webViewURL:(id)arg3 trackingCodes:(id)arg4 ;
-(void)instantShoppingDocumentViewController:(id)arg1 didUpdateContentSize:(CGSize)arg2 ;
-(void)instantShoppingDocumentViewController:(id)arg1 didFinishLayoutWithSize:(CGSize)arg2 ;
-(void)instantShoppingDocumentViewController:(id)arg1 documentViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)instantShoppingDocumentViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)instantShoppingDocumentViewController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)instantShoppingDocumentViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(UIViewController *)swipeToOpenViewController;
-(void)setDelegate:(id<FBCanvasSwipeToOpenViewDelegate>)arg1 ;
-(id<FBCanvasSwipeToOpenViewDelegate>)delegate;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

