## 구조 분해 할당(destructuring assignment)

ES6 에서 새로 도입된 기능으로 비 구조화 할당, 해체 할당이라 고도 한다.



이 기능은 객체나 배열을 변수로 해체할 수 있다. node.js 에서 모듈에서 특정 부분만 import 할 때도 활용된다.

먼저 `객체의 해체`를 해보자.

```javascript
// 객체 선언
const obj = { b:2, c:3, d:4 };

// 해체 할당
const {a, b, c} = obj;
a; // undefined : obj 에는 'a' 프로퍼티가 없음
b; // 2
c; // 3
d; // ReferenceError : d는 정의되지 않았음
```

객체를 해체할 때는 반드시 변수 이름과 객체의 프로퍼티 이름이 일치해야 한다. 프로퍼티 이름이 유효한 식별자인 프로퍼티만 해체 후 할당된다.

위에서는 선언과 할당을 동시에 했지만 할당만 하려면 반드시 `괄호`를 써야 한다.

```javascript
const obj = { b:2, c:3, d:4 };
let a,b,c;

{a, b, c} = obj; //Error

({a, b, c}) = obj; //Good
```



`배열을 해체`할 때는 배열 요소에 대응할 변수 이름은 마음대로 쓸 수 있고, 배열 순서대로 대응한다.

또한 확산 연산자(...)를 사용하여 남은 요소를 새 배열로 할당할 수 있다.

```javascript
// 배열 선언
const arr = [1, 2, 3];

// 배열 해체 할당
let [x, y] = arr;
x; // 1
y; // 2
rest; // [3, 4, 5]
```

위 예제에서 x 와 y는 배열의 처음 두 요소를 받고, 변수 rest 에는 나머지가 저장된다.

배열의 해체를 사용하여 임시 변수 없이 변수의 값을 바꿀 수 있다.

```javascript
let a = 5, b = 10;
[a, b] = [b, a];
a; //10
b; //5
```

