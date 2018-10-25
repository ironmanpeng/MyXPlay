//
// Created by pengt on 2018/10/25.
//

#include "IResample.h"

void IResample::Update(XData data) {
    XData d = this->Resample(data);
    if(d.size > 0){
        this->Notify(d);
    }
}