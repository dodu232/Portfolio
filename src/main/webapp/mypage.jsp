<%@page import="java.text.DateFormat"%>
<%@page import="java.text.SimpleDateFormat"%>
<%@page import="car.CarDto"%>
<%@page import="car.CarDao"%>
<%@page import="rent.RentDto"%>
<%@page import="java.util.ArrayList"%>
<%@page import="rent.RentDao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<jsp:include page="header.jsp" />
<body>
	<div class="container">
		<form method="post" action="userDelete">
			<input type="button" onclick="userSecession(form)" value="회원탈퇴">
			<h2>예약한 차량목록</h2>
			<%
			String log = (String) session.getAttribute("log");
			String pw = (String) session.getAttribute("log2");
			RentDao dao = RentDao.getInstance();
			CarDao cDao = CarDao.getInstance();
			ArrayList<RentDto> list = dao.getRent(log);
			DateFormat df = new SimpleDateFormat("yyyy-mm-dd");

			if(list != null){
			for (RentDto r : list) {
				String date = df.format(r.getRentDate());
				String start = r.getRentStart().substring(0, 10);
				String end = r.getRentEnd().substring(0, 10);
				CarDto car = cDao.getCarOne(r.getCarcode());
			%>
			<div class="carTable">
				<input type="hidden" id="password" value="<%=pw%>"> 
				<input
					type="hidden" name="id" value="<%=log%>"> 
					<input
					type="hidden" name="carCode" value="<%=car.getCode()%>">
				<div class="carImg">
					<img src="<%=car.getImgUrl()%>" />
				</div>
				<div class="carModel">
					모델명
					<%=car.getModel()%></div>
				<div class="carPrice">
					결제 금액
					<%=r.getRentalFee()%>원
				</div>


				<div class="rent">
					대여 기간<%=start%>
					~
					<%=end%>
				</div>


				<div class="rent">
					예약일
					<%=date%>
				</div>
				<div class="rent">
					예약일
					<%=r.getRentDate()%>
				</div>



			</div>
			<%
			}} else{
				%>
				<input type="hidden" id="password" value="<%=pw%>"> 
				<input
					type="hidden" name="id" value="<%=log%>"> 
					<% 
			}
			%>
		</form>
	</div>
	<script>
		function userSecession(form) {
			let pw = prompt('탈퇴하시려면 비밀번호를 입력하세요');
			console.log(form.password.value);
			if (form.password.value !== pw) {
				alert('비밀번호가 틀렸습니다.');
			} else {
				form.submit();
			}
		}
	</script>
</body>
</html>