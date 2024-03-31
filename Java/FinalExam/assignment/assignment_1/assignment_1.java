package Java.FinalExam.assignment.assignment_1;

import java.util.Date;

// import java.sql.Date;

class Visit {
    Date date;
    double serviceExpense;
    double productExpense;

    Visit(Date date) {
        this.date = date;
    }

    double getServiceExpense() {
        return serviceExpense;
    }

    void getServiceExpense(double ex) {
        this.serviceExpense = ex;
    }

    double getProductExpense() {
        return productExpense;
    }

    void getProductExpense(double ex) {
        this.productExpense = ex;
    }

    double getTotalExpense() {
        return productExpense + serviceExpense;
    }

    void Displayinfo() {
        System.out.println("Visit Date: " + date);
        System.out.println("Service Expense: $" + serviceExpense);
        System.out.println("Product Expense: $" + productExpense);
        System.out.println("Total Expense: $" + getTotalExpense());
    }
}

class Customer {
    String name;
    Boolean member;
    String memberType;
    Visit visit;

    Customer(String name, Visit visit) {
        this.name = name;
        this.visit = visit;
    }

    String getName() {
        return name;
    }

    Boolean isMember() {
        return member;
    }

    void setMember(Boolean member) {
        this.member = member;
    }

    String getMemberType() {
        return memberType;
    }

    void setMemberType(String type) {
        memberType = type;
    }

    void DisplayInfo() {
        double discountOnService = visit.getServiceExpense() * Discount.getserviceDiscountRate(memberType);
        double discountOnproduct = visit.getProductExpense() * Discount.getproductDiscountRate(memberType);
        double totalDiscount = discountOnService + discountOnproduct;
        double bill = visit.getTotalExpense() - totalDiscount;
        System.out.println("Customer Name: " + name);
        System.out.println("Membership Status: " + (member ? "Yes" : "No"));
        if (member) {
            System.out.println("Membership Type: " + memberType);
        }
        visit.Displayinfo();
        System.out.println("Your Discount: " + totalDiscount);
        System.out.println("Total Bill: " + bill);

    }
}

class Discount {
    static double serviceDiscountPremium = 0.2;
    static double serviceDiscountGold = 0.15;
    static double serviceDiscountSilver = 0.1;

    static double ProductDiscountPremium = 0.1;
    static double ProductDiscountGold = 0.1;
    static double ProductDiscountSilver = 0.1;

    static double getserviceDiscountRate(String type) {
        if (type == "Premium") {
            return serviceDiscountPremium;
        } else if (type == "Gold") {
            return serviceDiscountGold;
        } else if (type == "Silver") {
            return serviceDiscountSilver;
        } else {
            return 0;
        }
    }

    static double getproductDiscountRate(String type) {
        if (type == "Premium") {
            return ProductDiscountPremium;
        } else if (type == "Gold") {
            return ProductDiscountGold;
        } else if (type == "Silver") {
            return ProductDiscountSilver;
        } else {
            return 0;
        }
    }

}

public class assignment_1 {
    public static void main(String[] args) {
        Visit visit = new Visit(new Date());
        visit.getServiceExpense(50);
        visit.getProductExpense(150);

        Customer customer = new Customer("John", visit);
        customer.setMember(true);
        customer.setMemberType("Gold");

        customer.DisplayInfo();
    }
}
