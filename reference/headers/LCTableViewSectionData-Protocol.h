//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, UIView;

@protocol LCTableViewSectionData <NSObject>
@property(retain, nonatomic) NSMutableArray *rowData;

@optional
@property(retain, nonatomic) UIView *sectionFooterView;
@property(nonatomic) double sectionFooterHeight;
@property(retain, nonatomic) UIView *sectionHeaderView;
@property(nonatomic) double sectionHeaderHeight;
@end
