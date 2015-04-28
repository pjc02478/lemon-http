lemon-http
====

```C++
string url = "www.naver.com";
string response;

response = 
  lemon::http::request(url).get();

cout<< response;
```
