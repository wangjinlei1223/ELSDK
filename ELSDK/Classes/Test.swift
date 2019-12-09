//
//  Test.swift
//  ELSDK
//
//  Created by lei on 2019/12/7.
//

import UIKit
import Alamofire
import KDCalendar

//import FB

//import MMKV

public class Test: NSObject {
    public func request() {
//        Ala
//        MMKV.default().set(true, forKey: "123")
        
        var urls: URLConvertible = "123"
        
//        request("123")
        
        SessionManager.default.request("", method: .post, parameters: nil, encoding: JSONEncoding.default, headers: nil)
        
//        request(<#T##url: URLConvertible##URLConvertible#>)
        
        
        
//        request(urls, method: HTTPMethod.get, parameters: nil, encoding: JSONEncoding.default, headers: nil)
        
        
//        request(URLConvertible, method: <#T##HTTPMethod#>, parameters: <#T##Parameters?#>, encoding: <#T##ParameterEncoding#>, headers: <#T##HTTPHeaders?#>).res
        
    }
}
