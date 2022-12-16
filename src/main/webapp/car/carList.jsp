<%@page import="car.CarDto"%>
<%@page import="java.util.ArrayList"%>
<%@page import="car.CarDao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<link rel="stylesheet" href="resources/carList.css">
<link rel="stylesheet" href="resources/main.css">
<title>Insert title here</title>
</head>
<body>
<jsp:include page="../header.jsp" />
<section>
	<div class="container">
		<%
			CarDao dao = CarDao.getInstance();
			ArrayList<CarDto> list = dao.getCarAll();
			String fuel = "";
			for (CarDto c : list) {
				if (c.getFuel() == 1) {
					fuel = "휘발유";
				} else if (c.getFuel() == 2) {
					fuel = "경유";
				} else if (c.getFuel() == 3) {
					fuel = "전기";
				}
			%>
		<div class="carTable"
			onclick="location.href='carRent?model=<%=c.getCode()%>'">
			<input type="hidden" name="carCode" value="<%=c.getCode()%>">
			<div class="carImg">
				<img src="<%=c.getImgUrl() %>" />
			</div>
			<div class="text" class="carPrice"><%=c.getPrice() %>원부터</div>

			<div class="text" class="carYear"><%=c.getModelYear() %>연식</div>

			<div class="text" class="carFuelEfficiency"><%=c.getFuelEfficiency() %>km/L</div>
			<div class="model" class="carModel"><%=c.getModel() %></div>
			<div class="text" class="carFuel"><%=fuel %></div>




		</div>
		<% }%>
	</div>

</section>
</body>
</html>