//
//  BombBoxTool.h
//  SayU
//
//  Created by 杭州任性贸易有限公司 on 15/12/29.
//  Copyright © 2015年 xys. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^FirstButtonBlock) ();
typedef void(^secondButtonBlock) ();

@interface BombBoxTool : UIViewController
@property (nonatomic,copy)FirstButtonBlock blockOne;
@property (nonatomic,copy)secondButtonBlock blockTwo;

//不好使这个方法
//+(void)removeBombBoxTool;
/**
 *  类方法 设置弹出框
 *
 *  @param firBlock 第一个开关的响应block
 *  @param secBlock 第二个开关的响应block
 *
 *  @return 弹出框试图
 */
+(UIView *)showBombBoxToolWitthFirstBlock:(FirstButtonBlock)firBlock andSecondBlock:(secondButtonBlock)secBlock;
@end
