//
//  tabbarView.h
//  tabbarTest
//
//  Created by Kevin Lee on 13-5-6.
//  Copyright (c) 2013年 Kevin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "tabbarViewController.h"

@interface tabbarView : UIView

@property(nonatomic,strong) UIImageView *tabbarView;
@property(nonatomic,strong) UIImageView *tabbarViewCenter;

@property(nonatomic,strong) UIButton *button_1;
@property(nonatomic,strong) UIButton *button_2;
@property(nonatomic,strong) UIButton *button_3;
@property(nonatomic,strong) UIButton *button_4;
@property(nonatomic,strong) UIButton *button_center;

@property(nonatomic,weak) id<tabbarDelegate> delegate;

@end
