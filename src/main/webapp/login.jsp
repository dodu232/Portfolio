<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<link rel="stylesheet" href="resources/join.css">
<title>Insert title here</title>
</head>
<body>
	<div class="container">
		<h1>로그인 페이지</h1>

		<form method="post" action="userLogin">
			<table class="table">
				<tr>
					<td>아이디</td>
				</tr>
				<tr>
					<td><input id="id" name="id" type="text" placeholder="아이디"
						required></td>
				</tr>
				<tr>
					<td>비밀번호</td>
				</tr>
				<tr>
					<td><input id="pw" name="pw" type="password"
						placeholder="비밀번호" required></td>
				</tr>
				<tr>
					<td><input id="loginButton" type="submit" value="로그인"></td>
				</tr>
				<tr>
					<td><a href="userjoin">회원가입</a></td>
				</tr>
			</table>
		</form>
	</div>
</body>
</html>