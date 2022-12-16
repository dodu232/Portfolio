<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<link rel="stylesheet" href="resources/header.css">
<title>Insert title here</title>
</head>
<body>
	<header>
	<div class="header">
		<form method="post" action="userLogout">
			<div class="title">
				<h1>렌터카</h1>
				<div class="button">
					<%
				String log = (String) session.getAttribute("log");
				System.out.println(log);
		  		if(log == null){%>
					<a href="join">회원 가입</a> <a href="login">로그인</a>
					<%} else { %>
					<p><%=log%>님 환영합니다!
					</p>
						<a href="logoutCom">로그아웃</a>
					<%
					}
					%>

				</div>
			</div>
			<ul>
				<li><a href="index">홈</a></li>
				<li><a href="carList">차랑대여</a></li>
				<li><a href="board">커뮤니티</a></li>
				<li><a href="notice">공지사항</a></li>
				<li><a href="mypage">마이페이지</a></li>
			</ul>


		</form>
	</div>

	</header>

</body>
</html>