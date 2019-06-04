## Node.js JWT RefreshToken

### JWT란?

서버의 다양한 인증 방식 중에 토큰 기반 인증 방식이 있다. 그중에서도 `JWT`는 JsonWebToken 의 약자로 인증에 필요한 정보들을 암호화한 토큰을 의미한다.

기존의 JWT 인증방식의 단점은 이미 발급된 JWT 토큰에 대해 돌이킬 수 없다는 것이다. 다시말해 유효기간이 끝나기 전까지 토큰을 탈취당해도 대비할 수 없다.



### RefreshToken

이것의 해결방법이 `RefreshToken` 이다. 기존의 Access Token의 유효기간을 짧게하고 로그인 시 Access Token 보다 유효기간이 더 긴 RefreshToken 을 발급해주어 Access Token이 만료되었을 때 RefreshToken을 서버에서 확인하여 다시 Access Token을 발급해주는 방법이다. 이것으로 기존의 Access Token만 사용했을 때보다 보안이 더 안전해진다.



### Node.js Example

오늘은 이 RefreshToken 을 `Node.js` 로 구현해보았다. 토큰과 인증에 집중하기 위해 DB를 사용하지 않았고 발급한 토큰또한 코드 내의 객체에 담았다.(실제 서비스 때는 DB로 회원정보를 비교해야하고, 발급한 토큰 또한 안전한 저장소에 보관해야 한다.)

[huewilliams/Node.js](https://github.com/huewilliams/Node.js/tree/master/Authentication/JWT refresh token)