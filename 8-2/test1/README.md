
1. SmartTV 객체 htv가 생성될 때 SmartTV가 호출한 다음 SmartTV의 부모클래스인 WideTV를 호출하고 WideTV의 부모클래스인 TV를 호출하게 된다 
기본클래스인 TV클래스는 부모클래스가 없기때문에 호출이 멈추게 된다.

SmartTV객체생성 --> htv("192.0.0.1",32) --> SmartTV호출  "192.0.0.1"하고 32가 전달된다 
--> SmartTV 생성자는  SmartTV는 WideTV를 상속 받기 때문에  WideTV생성자를 호출하 32 와 true를 videoIn에 전달하고 ip주소를 ipAddr에 저장한다한다.
-->크기32와 true를 WideTV가 상속 받는 TV생성자에 32를 전달하고 true를 videoIn에 저장한다. -->TV생성자 호출이되면 size 32전달  --> size에 저장
--> 호출이 완료되면 size값을 저장한다.
