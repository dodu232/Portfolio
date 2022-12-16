package util;

import java.sql.Connection;
import java.sql.DriverManager;

public class DBManager {
	private static String url = "jdbc:mysql://localhost:3306/my_rental_car";
	private static String user = "root";
	private static String pw = "root";

	public static Connection getConnection() {
		Connection conn = null;
		
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");s
			conn = DriverManager.getConnection(url, user, pw);
			System.out.println("데이터 베이스 연동 성공");
		} catch (Exception e) {
			e.printStackTrace();
			System.out.println("데이터 베이스 연동  실패");
		}
		
		return conn;
	}
}
