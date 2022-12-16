package rent;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Timestamp;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;

import car.CarDao;
import util.DBManager;

public class RentDao {

	private String id;
	private String pw;
	private String url;
	
	private Connection conn;
	private PreparedStatement pstmt;
	private ResultSet rs;
	
	private RentDao() {
		this.id = "root";
		this.pw = "1231";
		this.url = "jdbc:mysql://localhost:3306/my_rental_car";
	}
	
	private static RentDao instance = new RentDao();
	
	public static RentDao getInstance() {
		return instance;
	}
	
	// 렌트하기
	public void carRent(RentDto rent) {
		String sql = "INSERT INTO rent VALUES(?, ?, ?, ?, ?, ?);";
		
		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = this.conn.prepareStatement(sql);
			this.pstmt.setString(1, rent.getUserid());
			this.pstmt.setString(2, rent.getCarcode());
			
			Timestamp now = new Timestamp(System.currentTimeMillis());
			this.pstmt.setTimestamp(3, now);
			this.pstmt.setString(4, rent.getRentStart());
			this.pstmt.setString(5, rent.getRentEnd());
			
			Date format1 = new SimpleDateFormat("yyyy-MM-dd").parse(rent.getRentStart());
	        Date format2 = new SimpleDateFormat("yyyy-MM-dd").parse(rent.getRentEnd());
			
	        long diffSec = (format2.getTime() - format1.getTime()) / 1000;
	        long diffDays = diffSec / (24*60*60);
	        
	        CarDao dao = CarDao.getInstance();
	        int carPrice = dao.getCarPrice(rent.getCarcode());
	        int price = carPrice * (int)diffDays;
	        
			this.pstmt.setInt(6, price);
			
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
	
	
	
	
	// 예약현황 조회
	public ArrayList<RentDto> getRent(String id) {
		ArrayList<RentDto> list = new ArrayList<RentDto>();
		String sql = "select * from rent where userid = ?;";
		
		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = conn.prepareStatement(sql);
			this.pstmt.setString(1, id);
			this.rs = this.pstmt.executeQuery();
			
			while(this.rs.next()) {
				String userid = this.rs.getString(1);
				String carcode = this.rs.getString(2);
				Timestamp rentDate = this.rs.getTimestamp(3);
				String rentStart = this.rs.getString(4);
				String rentEnd = this.rs.getString(5);
				int rentalFee = this.rs.getInt(6);
				
				RentDto rent = new RentDto(userid, carcode, rentDate, rentStart, rentEnd, rentalFee);
				list.add(rent);
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
		
		return list;
	}
	
	
	
	// 취소하기
}
