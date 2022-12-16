package user;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Timestamp;

import util.DBManager;

public class UserDao {
	
	private String id;
	private String pw;
	private String url;
	
	private Connection conn;
	private PreparedStatement pstmt;
	private ResultSet rs;
	
	private UserDao() {
		this.id = "root";
		this.pw = "1231";
		this.url = "jdbc:mysql://localhost:3306/my_rental_car";
	}
	
	private static UserDao instance = new UserDao();
	
	public static UserDao getInstance() {
		return instance;
	}
	
	// 유저 등록
	public void createUser(UserDto user) {
		String sql = "INSERT INTO `user` VALUES(?, ?, ?, ?, ?, ?, ?);";
				
		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.pstmt.setString(1, user.getId());
			this.pstmt.setString(2, user.getPw());
			this.pstmt.setString(3, user.getName());
			this.pstmt.setString(4, user.getPhone());
			this.pstmt.setString(5, user.getAddress());
			this.pstmt.setString(6, user.getLicense());
			
			Timestamp now = new Timestamp(System.currentTimeMillis());
			this.pstmt.setTimestamp(7, now);
			
			this.pstmt.execute();
			System.out.println("등록 성공");
			
		} catch (Exception e) {
			e.printStackTrace();
			System.out.println("등록 실패");
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			} 
		}
	}
	
	// 같은 유저가 있는지 찾음
	public boolean checkId(String id) {
		boolean check = false;
		String sql = "select * from `user` where id = ?;";
		
		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.pstmt.setString(1, id);
			this.rs = this.pstmt.executeQuery();
			
			if(this.rs.next()) {
				check = true;
			}
			
		} catch (Exception e) {
			e.printStackTrace();
//			System.out.println("등록 실패");
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			} 
		}
		
		return check;
	}
	
	// 로그인
	public boolean loginUser(String id, String pw) {
		boolean check = false;
		String sql = "SELECT * FROM `user` WHERE id = ? and pw = ?";
		
		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.pstmt.setString(1, id);
			this.pstmt.setString(2, pw);
			this.rs = this.pstmt.executeQuery();
			
			if(this.rs.next()) {
				check = true;
			}
			
			System.out.println("로그인 성공");
		} catch (Exception e) {
			e.printStackTrace();
			System.out.println("로그인 실패");
		} finally {
			try {
				this.rs.close();
				this.pstmt.close();
				this.conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			} 
		}
		return check;
	}
	
	// 회원 탈퇴
	public void deleteUser(String id) {
		String sql = "DELETE FROM `user` WHERE id = ?";
		
		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.pstmt.setString(1, id);
			this.pstmt.execute();
			
			System.out.println("삭제 성공");
		} catch (Exception e) {
			e.printStackTrace();
			System.out.println("삭제 실패");
		} finally {
			try {
				pstmt.close();
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			} 
		}
	}
	
	
	
	
	
	
	
	
	
	
}
