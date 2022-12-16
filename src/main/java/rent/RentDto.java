package rent;

import java.sql.Timestamp;

public class RentDto {

	private String userid;
	private String carcode;
	private Timestamp rentDate;
	private String rentStart;
	private String rentEnd;
	private int rentalFee;
	
	

	public RentDto(String userid, String carcode, Timestamp rentDate, String rentStart, String rentEnd, int rentalFee) {
		this.userid = userid;
		this.carcode = carcode;
		this.rentDate = rentDate;
		this.rentStart = rentStart;
		this.rentEnd = rentEnd;
		this.rentalFee = rentalFee;
	}

	public RentDto(String userid, String carcode, Timestamp rentDate, String rentStart, String rentEnd) {
		this.userid = userid;
		this.carcode = carcode;
		this.rentDate = rentDate;
		this.rentStart = rentStart;
		this.rentEnd = rentEnd;
	}

	public RentDto(String userid, String carcode, String rentStart, String rentEnd) {
		this.userid = userid;
		this.carcode = carcode;
		this.rentStart = rentStart;
		this.rentEnd = rentEnd;
	}

	public String getUserid() {
		return userid;
	}

	public String getCarcode() {
		return carcode;
	}

	public Timestamp getRentDate() {
		return rentDate;
	}

	public String getRentStart() {
		return rentStart;
	}

	public String getRentEnd() {
		return rentEnd;
	}

	public int getRentalFee() {
		return rentalFee;
	}

	public void setUserid(String userid) {
		this.userid = userid;
	}

	public void setCarcode(String carcode) {
		this.carcode = carcode;
	}

	public void setRentStart(String rentStart) {
		this.rentStart = rentStart;
	}

	public void setRentEnd(String rentEnd) {
		this.rentEnd = rentEnd;
	}
	
	
	
	
}
