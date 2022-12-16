<%@page import="java.text.DateFormat"%>
<%@page import="java.util.Date"%>
<%@page import="java.util.Calendar"%>
<%@page import="java.text.SimpleDateFormat"%>
<%@page import="java.sql.Timestamp"%>
<%@page import="car.CarDto"%>
<%@page import="car.CarDao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<link rel="stylesheet" href="resources/carList.css">
<title>Insert title here</title>
</head>
<jsp:include page="../header.jsp" />
<body>
	<%
	String log = (String) session.getAttribute("log");

	CarDao dao = CarDao.getInstance();
	CarDto car = null;

	Calendar start = Calendar.getInstance();
	start.setTime(new Date());
	DateFormat df = new SimpleDateFormat("yyyy-MM-dd");

	Calendar end = Calendar.getInstance();
	end.setTime(new Date());
	end.add(Calendar.DATE, +1);

	request.setCharacterEncoding("utf-8");
	if (request.getParameter("model") != null) {
		String code = request.getParameter("model");
		car = dao.getCarOne(code);
	}

	String fuel = "";
	if (car.getFuel() == 1) {
		fuel = "휘발유";
	} else if (car.getFuel() == 2) {
		fuel = "경유";
	} else if (car.getFuel() == 3) {
		fuel = "전기";
	}
	%>
	<div class="container">
		<header></header>

		<form method="post" action="rent">
			<section>
				<div class="carTable">

					<div class="carImg">
						<img src="<%=car.getImgUrl()%>" />
					</div>
					<div class="carModel"><%=car.getModel()%></div>
					<div class="carPrice"><%=car.getPrice()%>원부터
					</div>

					<div class="carYear"><%=car.getModelYear()%>연식
					</div>

					<div class="carFuelEfficiency"><%=car.getFuelEfficiency()%>km/L
					</div>
					<div class="carFuel"><%=fuel%></div>

					<input type="hidden" name="log" id="log" value="<%=log%>">
					<input type="hidden" name="code" value="<%=car.getCode()%>">
					<input type="date" name="startDate"
						value="<%=df.format(start.getTime())%>"> <input
						type="date" name="endDate" value="<%=df.format(end.getTime())%>">
					<input id="rent_button" type="button" onclick="checkForm(form)"
						value="예약하기">

				</div>
			</section>
		</form>

	</div>
	<script src="resources/validation.js"></script>
</body>
</html>