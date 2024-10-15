#include <stdexcept>  // For std::invalid_argument

class Date {
    Date(unsigned short day, unsigned short month, unsigned short year) {
        if (!is_valid_date(day, month, year)) {
            throw std::invalid_argument("Invalid date provided.");
        }
        day_ = day;
        month_ = month;
        year_ = year;
    }

   private:
    unsigned short day_;
    unsigned short month_;
    unsigned short year_;


    /**
     * @brief Check if a year is a leap year
     * 
     * @return true 
     * @return false 
     */
    static bool is_leap_year(unsigned short year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                return year % 400 == 0;  // Divisible by 400 -> leap year
            }
            return true;  // Divisible by 4 but not 100 -> leap year
        }
        return false;  // Not divisible by 4 -> not a leap year
    }

    // Helper function to get the number of days in a given month
    unsigned short get_days_in_month(unsigned short month, unsigned short year) const {
        switch (month) {
            case 2:
                return Date::is_leap_year(year) ? 29 : 28;  // February
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;  // April, June, September, November have 30 days
            default:
                return 31;  // All other months have 31 days
        }
    }

    // Function to check if the provided date is valid
    bool is_valid_date(unsigned short day, unsigned short month, unsigned short year) const {
        if (month < 1 || month > 12) return false;

        unsigned short days_in_month = get_days_in_month(month, year);
        if (day < 1 || day > days_in_month) return false;

        return true;
    }
};