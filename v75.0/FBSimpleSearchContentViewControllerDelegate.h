/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSimpleSearchContentViewControllerDelegate <UIScrollViewDelegate>
@optional
-(void)simpleSearchContentViewControllerNeedsToOpenActivityLog:(id)arg1;
-(void)simpleSearchContentViewControllerDidUpdatedContent:(id)arg1;

@required
-(void)simpleSearchContentViewController:(id)arg1 logImpressionForSuggestion:(id)arg2 position:(unsigned long long)arg3;
-(void)simpleSearchContentViewController:(id)arg1 logNoClickSessionWithReason:(id)arg2 source:(id)arg3;
-(void)simpleSearchContentViewController:(id)arg1 logClickForSuggestion:(id)arg2 position:(unsigned long long)arg3;
-(void)simpleSearchContentViewController:(id)arg1 openSuggestion:(id)arg2;
-(void)simpleSearchContentViewController:(id)arg1 openResultsViewController:(id)arg2;

@end
