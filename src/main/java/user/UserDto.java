package user;

import java.sql.Timestamp;

public class UserDto {

	private String id;
	private String pw;
	private String name;
	private String phone;
	private String address;
	private String license;
	private Timestamp legDate;
	
	public UserDto(String id, String pw, String name, String phone, String address, String license, Timestamp legDate) {
		this.id = id;
		this.pw = pw;
		this.name = name;
		this.phone = phone;
		this.address = address;
		this.license = license;
		this.legDate = legDate;
	}
	
	

	public UserDto(String id, String pw, String name, String phone, String address, String license) {
		this.id = id;
		this.pw = pw;
		this.name = name;
		this.phone = phone;
		this.address = address;
		this.license = license;
	}



	// getter
	public String getId() {
		return id;
	}

	public String getPw() {
		return pw;
	}

	public String getName() {
		return name;
	}

	public String getPhone() {
		return phone;
	}

	public String getAddress() {
		return address;
	}

	public String getLicense() {
		return license;
	}

	public Timestamp getLegDate() {
		return legDate;
	}

	// setter
	public void setPw(String pw) {
		this.pw = pw;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setPhone(String phone) {
		this.phone = phone;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public void setLicense(String license) {
		this.license = license;
	}
	
	
}
