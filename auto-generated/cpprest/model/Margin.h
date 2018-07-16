/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)    #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  *All* table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  *This is only a small subset of what is available, to get you started.*  Fill in the parameters and click the `Try it out!` button to try any of these queries.  * [Pricing Data](#!/Quote/Quote_get)  * [Trade Data](#!/Trade/Trade_get)  * [OrderBook Data](#!/OrderBook/OrderBook_getL2)  * [Settlement Data](#!/Settlement/Settlement_get)  * [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)    ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Margin.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Margin_H_
#define IO_SWAGGER_CLIENT_MODEL_Margin_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Margin
    : public ModelBase
{
public:
    Margin();
    virtual ~Margin();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Margin members

    /// <summary>
    /// 
    /// </summary>
    double getAccount() const;
        void setAccount(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrency() const;
        void setCurrency(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getRiskLimit() const;
    bool riskLimitIsSet() const;
    void unsetRiskLimit();
    void setRiskLimit(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPrevState() const;
    bool prevStateIsSet() const;
    void unsetPrevState();
    void setPrevState(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();
    void setState(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAction() const;
    bool actionIsSet() const;
    void unsetAction();
    void setAction(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getAmount() const;
    bool amountIsSet() const;
    void unsetAmount();
    void setAmount(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPendingCredit() const;
    bool pendingCreditIsSet() const;
    void unsetPendingCredit();
    void setPendingCredit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPendingDebit() const;
    bool pendingDebitIsSet() const;
    void unsetPendingDebit();
    void setPendingDebit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getConfirmedDebit() const;
    bool confirmedDebitIsSet() const;
    void unsetConfirmedDebit();
    void setConfirmedDebit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevRealisedPnl() const;
    bool prevRealisedPnlIsSet() const;
    void unsetPrevRealisedPnl();
    void setPrevRealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrevUnrealisedPnl() const;
    bool prevUnrealisedPnlIsSet() const;
    void unsetPrevUnrealisedPnl();
    void setPrevUnrealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossComm() const;
    bool grossCommIsSet() const;
    void unsetGrossComm();
    void setGrossComm(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossOpenCost() const;
    bool grossOpenCostIsSet() const;
    void unsetGrossOpenCost();
    void setGrossOpenCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossOpenPremium() const;
    bool grossOpenPremiumIsSet() const;
    void unsetGrossOpenPremium();
    void setGrossOpenPremium(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossExecCost() const;
    bool grossExecCostIsSet() const;
    void unsetGrossExecCost();
    void setGrossExecCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossMarkValue() const;
    bool grossMarkValueIsSet() const;
    void unsetGrossMarkValue();
    void setGrossMarkValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRiskValue() const;
    bool riskValueIsSet() const;
    void unsetRiskValue();
    void setRiskValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTaxableMargin() const;
    bool taxableMarginIsSet() const;
    void unsetTaxableMargin();
    void setTaxableMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getInitMargin() const;
    bool initMarginIsSet() const;
    void unsetInitMargin();
    void setInitMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMaintMargin() const;
    bool maintMarginIsSet() const;
    void unsetMaintMargin();
    void setMaintMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSessionMargin() const;
    bool sessionMarginIsSet() const;
    void unsetSessionMargin();
    void setSessionMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTargetExcessMargin() const;
    bool targetExcessMarginIsSet() const;
    void unsetTargetExcessMargin();
    void setTargetExcessMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getVarMargin() const;
    bool varMarginIsSet() const;
    void unsetVarMargin();
    void setVarMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRealisedPnl() const;
    bool realisedPnlIsSet() const;
    void unsetRealisedPnl();
    void setRealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedPnl() const;
    bool unrealisedPnlIsSet() const;
    void unsetUnrealisedPnl();
    void setUnrealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getIndicativeTax() const;
    bool indicativeTaxIsSet() const;
    void unsetIndicativeTax();
    void setIndicativeTax(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnrealisedProfit() const;
    bool unrealisedProfitIsSet() const;
    void unsetUnrealisedProfit();
    void setUnrealisedProfit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSyntheticMargin() const;
    bool syntheticMarginIsSet() const;
    void unsetSyntheticMargin();
    void setSyntheticMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getWalletBalance() const;
    bool walletBalanceIsSet() const;
    void unsetWalletBalance();
    void setWalletBalance(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMarginBalance() const;
    bool marginBalanceIsSet() const;
    void unsetMarginBalance();
    void setMarginBalance(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMarginBalancePcnt() const;
    bool marginBalancePcntIsSet() const;
    void unsetMarginBalancePcnt();
    void setMarginBalancePcnt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMarginLeverage() const;
    bool marginLeverageIsSet() const;
    void unsetMarginLeverage();
    void setMarginLeverage(double value);
    /// <summary>
    /// 
    /// </summary>
    double getMarginUsedPcnt() const;
    bool marginUsedPcntIsSet() const;
    void unsetMarginUsedPcnt();
    void setMarginUsedPcnt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExcessMargin() const;
    bool excessMarginIsSet() const;
    void unsetExcessMargin();
    void setExcessMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExcessMarginPcnt() const;
    bool excessMarginPcntIsSet() const;
    void unsetExcessMarginPcnt();
    void setExcessMarginPcnt(double value);
    /// <summary>
    /// 
    /// </summary>
    double getAvailableMargin() const;
    bool availableMarginIsSet() const;
    void unsetAvailableMargin();
    void setAvailableMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getWithdrawableMargin() const;
    bool withdrawableMarginIsSet() const;
    void unsetWithdrawableMargin();
    void setWithdrawableMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    double getGrossLastValue() const;
    bool grossLastValueIsSet() const;
    void unsetGrossLastValue();
    void setGrossLastValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCommission() const;
    bool commissionIsSet() const;
    void unsetCommission();
    void setCommission(double value);

protected:
    double m_Account;
        utility::string_t m_Currency;
        double m_RiskLimit;
    bool m_RiskLimitIsSet;
    utility::string_t m_PrevState;
    bool m_PrevStateIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    utility::string_t m_Action;
    bool m_ActionIsSet;
    double m_Amount;
    bool m_AmountIsSet;
    double m_PendingCredit;
    bool m_PendingCreditIsSet;
    double m_PendingDebit;
    bool m_PendingDebitIsSet;
    double m_ConfirmedDebit;
    bool m_ConfirmedDebitIsSet;
    double m_PrevRealisedPnl;
    bool m_PrevRealisedPnlIsSet;
    double m_PrevUnrealisedPnl;
    bool m_PrevUnrealisedPnlIsSet;
    double m_GrossComm;
    bool m_GrossCommIsSet;
    double m_GrossOpenCost;
    bool m_GrossOpenCostIsSet;
    double m_GrossOpenPremium;
    bool m_GrossOpenPremiumIsSet;
    double m_GrossExecCost;
    bool m_GrossExecCostIsSet;
    double m_GrossMarkValue;
    bool m_GrossMarkValueIsSet;
    double m_RiskValue;
    bool m_RiskValueIsSet;
    double m_TaxableMargin;
    bool m_TaxableMarginIsSet;
    double m_InitMargin;
    bool m_InitMarginIsSet;
    double m_MaintMargin;
    bool m_MaintMarginIsSet;
    double m_SessionMargin;
    bool m_SessionMarginIsSet;
    double m_TargetExcessMargin;
    bool m_TargetExcessMarginIsSet;
    double m_VarMargin;
    bool m_VarMarginIsSet;
    double m_RealisedPnl;
    bool m_RealisedPnlIsSet;
    double m_UnrealisedPnl;
    bool m_UnrealisedPnlIsSet;
    double m_IndicativeTax;
    bool m_IndicativeTaxIsSet;
    double m_UnrealisedProfit;
    bool m_UnrealisedProfitIsSet;
    double m_SyntheticMargin;
    bool m_SyntheticMarginIsSet;
    double m_WalletBalance;
    bool m_WalletBalanceIsSet;
    double m_MarginBalance;
    bool m_MarginBalanceIsSet;
    double m_MarginBalancePcnt;
    bool m_MarginBalancePcntIsSet;
    double m_MarginLeverage;
    bool m_MarginLeverageIsSet;
    double m_MarginUsedPcnt;
    bool m_MarginUsedPcntIsSet;
    double m_ExcessMargin;
    bool m_ExcessMarginIsSet;
    double m_ExcessMarginPcnt;
    bool m_ExcessMarginPcntIsSet;
    double m_AvailableMargin;
    bool m_AvailableMarginIsSet;
    double m_WithdrawableMargin;
    bool m_WithdrawableMarginIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
    double m_GrossLastValue;
    bool m_GrossLastValueIsSet;
    double m_Commission;
    bool m_CommissionIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Margin_H_ */