# SR04-lib

Arduino SR04超声波库例程  

2021变更如下：  

## 不适用类库直接驱动示例  
```c++
float distance;

void initSR04(int tp,int ep) {
  pinMode(tp, OUTPUT);
  pinMode(ep, INPUT);
}

float getDistance(int tp,int ep) {
  //产生一个10μs的高脉冲触发TrigPin
  digitalWrite(tp, LOW);
  delayMicroseconds(2);
  digitalWrite(tp, HIGH);
  delayMicroseconds(10);
  digitalWrite(tp, LOW);
  float distance = pulseIn(ep, HIGH) / 58.0;
  return distance;
}

void setup() {
  initSR04(2,3);
  Serial.begin(9600);
}

void loop() {
  distance= getDistance(2,3);
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  delay(1000);
}
```

## 命名规则

1. 变量名一律小写，单词用下划线相连，如：trig_pin、distance。    
2. 类型命名使用大驼峰法，所有单词首字母也大写，以名词形式命名。但由于这里SR04指的特定型号，所以使用了全大写命名。  
3. 函数命名使用小驼峰法，第一个单词小写，其余单词首字母大写，以动词开头。如：getDistance
