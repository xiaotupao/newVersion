//
//  NewsDetailViewController.h
//  wirelessuda
//
//  Created by 叶帆 on 13-11-28.
//  Copyright (c) 2013年 苏州大学信息化建设与管理中心. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewsDetailViewController : UIViewController

@property(nonatomic, strong) NSString *detailURL;
@property(nonatomic, strong) UIWebView *detailWebView;

@end
