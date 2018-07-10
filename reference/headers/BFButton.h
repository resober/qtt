//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface BFButton : UIButton
{
    UIImageView *_overlayImgView;
    double _fadeDuration;
}

@property(nonatomic) double fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property(retain, nonatomic) UIImageView *overlayImgView; // @synthesize overlayImgView=_overlayImgView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 highlightedImage:(id)arg3 fadeDuration:(double)arg4;

@end
