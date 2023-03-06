#include "Account.hpp"

/* Public Constructor */
Account::Account(int initial_deposit) {
    this->_amount = initial_deposit;
}

/* Private constructor */
Account::Account(void) {
}

/* Destructor */
Account::~Account() {
}

static  int Account::getNbAccounts(void) {   
    return (this->_nbAccounts);
}

static  int Account::getTotalAmount(void) {   
    return (this->_totalAmount);
}

static  int Account::getNbDeposits(void) {   
    return (this->_totalNbDeposits);
}

static  int Account::getNbWithdrawals(void) {   
    return (this->_totalNbWithdrawals);
}

static  void Account::displayAccountsInfos(void) {   
}

void    Account::makeDeposit(int deposit) {
}

bool    Account::makeWithdrawal(int withdrawal) {
}

int     Account::checkAmount(void) const {
}

void    Account::displayStatus(void) const {
}

static  void    Account::_displayTimestamp(void) {
}