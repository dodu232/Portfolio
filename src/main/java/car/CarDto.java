package car;

public class CarDto {
	
	private String code;
	private int price;
	private String num;
	private String model;
	private int fuel;
	private int modelYear;
	private double fuelEfficiency;
	private String imgUrl;
	
	public CarDto(String code, int price, String num, String model, int fuel, int modelYear,
			double fuelEfficiency, String imgUrl) {
		this.code = code;
		this.price = price;
		this.num = num;
		this.model = model;
		this.fuel = fuel;
		this.modelYear = modelYear;
		this.fuelEfficiency = fuelEfficiency;
		this.imgUrl = imgUrl;
	}

	//getter
	public String getCode() {
		return code;
	}

	public int getPrice() {
		return price;
	}

	public String getNum() {
		return num;
	}

	public String getModel() {
		return model;
	}

	public int getFuel() {
		return fuel;
	}

	public int getModelYear() {
		return modelYear;
	}

	public double getFuelEfficiency() {
		return fuelEfficiency;
	}

	public String getImgUrl() {
		return imgUrl;
	}
	
	//setter
	public void setPrice(int price) {
		this.price = price;
	}

	public void setFuelEfficiency(double fuelEfficiency) {
		this.fuelEfficiency = fuelEfficiency;
	}

	public void setImgUrl(String imgUrl) {
		this.imgUrl = imgUrl;
	}
	
	
	
}
