package car;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import util.DBManager;

public class CarDao {

	private String id;
	private String pw;
	private String url;

	private Connection conn;
	private PreparedStatement pstmt;
	private ResultSet rs;

	private CarDao() {
		this.id = "root";
		this.pw = "1231";
		this.url = "jdbc:mysql://localhost:3306/my_rental_car";
	}

	private static CarDao instance = new CarDao();

	public static CarDao getInstance() {
		return instance;
	}

	// 자동차 다 가져오깅
	public ArrayList<CarDto> getCarAll() {
		ArrayList<CarDto> list = new ArrayList<CarDto>();
		String sql = "SELECT * FROM car;";

		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = this.conn.prepareStatement(sql);
			this.rs = this.pstmt.executeQuery();

			while (rs.next()) {
				String code = rs.getString(1);
				int price = rs.getInt(2);
				String num = rs.getString(3);
				String model = rs.getString(4);
				int fuel = rs.getInt(5);
				int modelYear = rs.getInt(6);
				double fuelEfficiency = rs.getDouble(7);
				String imgUrl = rs.getString(8);

				CarDto car = new CarDto(code, price, num, model, fuel, modelYear, fuelEfficiency, imgUrl);
				list.add(car);
			}

		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				this.rs.close();
				this.pstmt.close();
				this.conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		return list;
	}

	// 자동차 하나 가져오깅
	public CarDto getCarOne(String carCode) {
		CarDto car = null;
		String sql = "SELECT * FROM car WHERE `code`=?;";

		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = this.conn.prepareStatement(sql);
			this.pstmt.setString(1, carCode);
			this.rs = this.pstmt.executeQuery();

			if (rs.next()) {
				String code = rs.getString(1);
				int price = rs.getInt(2);
				String num = rs.getString(3);
				String model = rs.getString(4);
				int fuel = rs.getInt(5);
				int modelYear = rs.getInt(6);
				double fuelEfficiency = rs.getDouble(7);
				String imgUrl = rs.getString(8);

				car = new CarDto(code, price, num, model, fuel, modelYear, fuelEfficiency, imgUrl);
			}

		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				this.rs.close();
				this.pstmt.close();
				this.conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		return car;
	}
	
	// 차 렌탈비 
	public int getCarPrice(String carCode) {
		int price = 0;
		String sql = "SELECT price FROM car WHERE `code`=?;";

		try {
			this.conn = DBManager.getConnection(this.url, this.id, this.pw);
			this.pstmt = this.conn.prepareStatement(sql);
			this.pstmt.setString(1, carCode);
			this.rs = this.pstmt.executeQuery();

			if (rs.next()) {
				price = rs.getInt(1);
				}

		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				this.rs.close();
				this.pstmt.close();
				this.conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		return price;
	}
}
