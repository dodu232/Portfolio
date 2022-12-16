<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<link rel="stylesheet" href="resources/join.css" >
<title>Insert title here</title>
</head>
<jsp:include page="header.jsp" />
<body>
	<div class="container">
		<h1>회원 가입 페이지</h1>

		<form method="post" action="userJoin">
			<table class="table">
				<tr>
					<td>아이디</td>
				</tr>
				<tr>
					<td><input id="id" name="id" type="text" placeholder="아이디" required></td>
				</tr>
				<tr>
					<td>비밀번호</td>
				</tr>
				<tr>
					<td><input id="pw" name="pw" type="password" placeholder="비밀번호" required></td>
				</tr>
				<tr>
					<td>비밀번호 확인</td>
				</tr>
				<tr>
					<td><input id="pwCheck" name="pwCheck" type="password" placeholder="비밀번호 확인" required></td>
				</tr>
				<tr>
					<td>이름</td>
				</tr>
				<tr>
					<td><input id="name" name="name" type="text" placeholder="이름을 입력해주세요" required></td>
				</tr>
				<tr>
					<td>전화 번호</td>
				</tr>
				<tr>
					<td><input id="phone" name="phone" type="text" placeholder="전화 번호를 입력해주세요" required></td>
				</tr>
				<tr>
					<td>주소</td>
				</tr>
				<tr>
					<td><input id="address" name="address" type="text" placeholder="주소를 입력해주세요" required></td>
				</tr>
				<tr>
					<td>운전면허 보유 여부</td>
				</tr>
				<tr>
					<td><input id="license" name="license" type="checkbox" value="y" onclick="clickCheck(this)" >보유</td>		
					<td><input id="license" name="license" type="checkbox" value="n" onclick="clickCheck(this)" >미보유</td>		
				</tr>
				
			</table>

			<input id="join_button" type="submit" value="회원가입"> <input
				id="join_cancle" type="button" onclick="location.href='index'"
				value="가입 취소">
		</form>
		
	</div>
	<!--  
	<script src="resources/validation.js">

	</script>
	-->
	
</body>
</html>