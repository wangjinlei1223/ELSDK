//
//  Test.swift
//  ELSDK
//
//  Created by lei on 2019/12/7.
//

import UIKit
//import Alamofire

import MMKV

public class Test: NSObject {
    public func request() {
//        Ala
        MMKV.default().set(true, forKey: "123")
    }
}
